#include "timer.h"

#include <stm32_common.h>
#include <config.h>

struct sTimer
{
  void (*callback_function)();
  class Thread *callback_class;
  unsigned int period, cnt;
  unsigned char flag;
  bool main_loop_callback_enabled;
};

volatile unsigned long int g_time;
volatile struct sTimer g_timers[TIMERS_COUNT];

Timer::Timer()
{

}

void Timer::init()
{
  unsigned char i;

  for (i = 0; i < TIMERS_COUNT; i++)
  {
    g_timers[i].callback_function = nullptr;
    g_timers[i].callback_class = nullptr;

    g_timers[i].period = 1000;
    g_timers[i].cnt = 0;
    g_timers[i].flag = 0;
    g_timers[i].main_loop_callback_enabled = false;
  }

  g_time = 0;

  stop_watch_init_value = 0;


  RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;  //timer 2 clock enable

  timer_init(TIM2, 0, 0, 100-1, 720);
  nvic_init(TIM2_IRQn, 0, 1);


  enable_interrupt();
}

Timer::~Timer()
{


}

//@brief add periodic task
//@param callback task function callback, void my_func(void)
//@param period_ms executing period in miliseconds
//@param main_loop_callback_enabled if set to true (default) task function is executed in main loop
//if set to false, task function is executing inside interrupt rutine - and other interrupts are blocked
int Timer::add_task(void (*callback_function)(), unsigned int period_ms, bool main_loop_callback_enabled)
{
  int timer_idx = -1;

  disable_interrupt();

  for (unsigned char i = 0; i < TIMERS_COUNT; i++)
    if ( (g_timers[i].callback_function == nullptr) && (g_timers[i].callback_class == nullptr) )
      timer_idx = i;

  if (timer_idx != -1)
  {
    g_timers[(unsigned char)timer_idx].callback_function = callback_function;
    g_timers[(unsigned char)timer_idx].callback_class = nullptr;
    g_timers[(unsigned char)timer_idx].period = period_ms;
    g_timers[(unsigned char)timer_idx].cnt = period_ms;
    g_timers[(unsigned char)timer_idx].flag = 0;
    g_timers[(unsigned char)timer_idx].main_loop_callback_enabled = main_loop_callback_enabled;
  }

  enable_interrupt();

  return timer_idx;
}


int Timer::add_task(class Thread *callback_class, unsigned int period_ms, bool main_loop_callback_enabled)
{
  int timer_idx = -1;

  disable_interrupt();

  for (unsigned char i = 0; i < TIMERS_COUNT; i++)
    if ( (g_timers[i].callback_function == nullptr) && (g_timers[i].callback_class == nullptr) )
      timer_idx = i;

  if (timer_idx != -1)
  {
    g_timers[(unsigned char)timer_idx].callback_function = nullptr;
    g_timers[(unsigned char)timer_idx].callback_class = callback_class;
    g_timers[(unsigned char)timer_idx].period = period_ms;
    g_timers[(unsigned char)timer_idx].cnt = period_ms;
    g_timers[(unsigned char)timer_idx].flag = 0;
    g_timers[(unsigned char)timer_idx].main_loop_callback_enabled = main_loop_callback_enabled;
  }

  enable_interrupt();

  return timer_idx;
}


//@brief start real timer tasks executing
//run in main loop, all tasks set with main_loop_callback_enabled to true are
//executed in their period, and celared they flags;
//@warning - dont call test_and_clear for those tasks
void Timer::main()
{
  unsigned char i = 0;
  while (1)
  {
    if (g_timers[i].main_loop_callback_enabled == true) //task executing in main
      if (test_and_clear(i))
      {
        if (g_timers[i].callback_function != nullptr)
          g_timers[i].callback_function();

        if (g_timers[i].callback_class != nullptr)
          g_timers[i].callback_class->main();
      }
    i++;
    if (i >= TIMERS_COUNT)
      i = 0;
  }
}


//@brief set period of timer_id
//flag will be set to nonzero value 1000/period_ms times per second
void Timer::set_period(unsigned char timer_id, unsigned int period_ms)
{
//  disable_interrupt();
  g_timers[timer_id].cnt = period_ms;
  g_timers[timer_id].period = period_ms;
  g_timers[timer_id].flag = 0;
//  enable_interrupt();
}

//@brief return nonzero value if timer_id elapsed it's period
//if flag is nonzero, is cleared automaticly
//when longer than one period isn't called this function, flag is incremented each
//period, until reach 255 value
unsigned int Timer::test_and_clear(unsigned char timer_id)
{
  unsigned char res = 0;
  disable_interrupt();


  if (g_timers[timer_id].flag)
  {
    res = g_timers[timer_id].flag;
    g_timers[timer_id].flag = 0;
  }

  enable_interrupt();
  return res;
}

unsigned long int Timer::get_time()
{
  volatile unsigned long int tmp;

  disable_interrupt();
  tmp = g_time;
  enable_interrupt();

  return tmp;
}

void Timer::delay_ms(unsigned int ms_time)
{
  volatile unsigned long int time_stop = ms_time + get_time();
  while (get_time() < time_stop)
    __asm("nop");
}

void Timer::delay_loops(unsigned long int loops)
{
  while (loops--)
    __asm("nop");
}

void Timer::reset()
{
  stop_watch_init_value = get_time();
}

unsigned long int Timer::elapsed_time()
{
  return get_time() - stop_watch_init_value;
}


#ifdef __cplusplus
extern "C" {
#endif


void TIM2_IRQHandler()
{
  if ((TIM2->SR&((uint16_t)0x0001)) != RESET)    //check TIME_IT_Update flag
  {
    TIM2->SR = (uint16_t)~((uint16_t)0x0001);    //clear flag

    for (unsigned char i = 0; i < TIMERS_COUNT; i++)
    {

      if (g_timers[i].cnt)
        g_timers[i].cnt--;
      else
      {
        g_timers[i].cnt = g_timers[i].period;

        if (g_timers[i].flag != 255)
          g_timers[i].flag++;


        if (g_timers[i].main_loop_callback_enabled == false)    //task executing in interrupt
        {
          if (g_timers[i].callback_function != nullptr)
            g_timers[i].callback_function();

          if (g_timers[i].callback_class != nullptr)
            g_timers[i].callback_class->main();
        }
      }
    }

    g_time++;
  }
}

#ifdef __cplusplus
}
#endif
