#include <timer.h>
#include <stm32f30x_func.h>

#include <interrupts.h>


volatile uint64_t Timer::time;
volatile sTimer Timer::timers[TIMERS_COUNT];

#define TIMER_FREQUENCY         ((uint32_t)2000)
#define TIMER_RATIO             ((uint32_t)2)


#define TIMER_PRESCALER         ((uint32_t)100)

Timer::Timer()
{

}



void Timer::init()
{
    uint8_t i;

    for (i = 0; i < TIMERS_COUNT; i++)
    {
        timers[i].callback_class = nullptr;

        timers[i].period  = TIMER_FREQUENCY*TIMER_RATIO;
        timers[i].cnt     = 0;
        timers[i].flag    = 0;
    }

    time = 0;


    RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;  //timer 2 clock enable

    timer_init(TIM2, 0, 0, (F_CPU/(TIMER_FREQUENCY*TIMER_PRESCALER)) - 1, TIMER_PRESCALER);
    nvic_init(TIM2_IRQn, 0, 1);

    enable_interrupts();
}

Timer::~Timer()
{


}


int8_t Timer::add_task(Thread &callback_class, uint32_t period_ms)
{
    int8_t timer_idx = -1;

    disable_interrupts();

    for (uint8_t i = 0; i < TIMERS_COUNT; i++)
        if (timers[i].callback_class == nullptr)
        {
            timer_idx = i;
            break;
        }

    if (timer_idx != -1)
    {
        timers[(uint8_t)timer_idx].callback_class = &callback_class;
        timers[(uint8_t)timer_idx].period         = period_ms*TIMER_RATIO;
        timers[(uint8_t)timer_idx].cnt            = period_ms*TIMER_RATIO;
        timers[(uint8_t)timer_idx].flag           = 0;
    }


    enable_interrupts();

    return timer_idx;
}

void Timer::set_period(uint8_t timer_id, uint32_t period_ms)
{ 
    disable_interrupts();
    timers[timer_id].period         = period_ms*TIMER_RATIO;
    timers[timer_id].cnt            = period_ms*TIMER_RATIO;
    timers[timer_id].flag           = 0;
    enable_interrupts();
}

uint8_t Timer::get_flag(uint8_t timer_id)
{
    volatile uint8_t result;
    disable_interrupts();
    result = timers[timer_id].flag;
    enable_interrupts();

    return result;
}

void Timer::clear_flag(uint8_t timer_id)
{
    disable_interrupts();
    timers[timer_id].flag = 0;
    enable_interrupts();
}

uint64_t Timer::get_time()
{
    volatile uint64_t result;

    disable_interrupts();
    result = time/TIMER_RATIO;
    enable_interrupts();

    return result;
}

uint64_t Timer::get_time_interrupt()
{
    return time/TIMER_RATIO;
}

void Timer::delay_ms(uint32_t ms_time)
{
  volatile uint64_t time_stop = ms_time + get_time();
  while (get_time() < time_stop)
    __asm("nop");
}

void Timer::delay_loops(uint32_t loops)
{
    while (loops--)
        __asm("nop");
}

#ifdef __cplusplus
extern "C" {
#endif

void TIM2_IRQHandler()
{
    if ((TIM2->SR&((uint16_t)0x0001)) != RESET)    //check TIME_IT_Update flag
    {
        TIM2->SR = (uint16_t)~((uint16_t)0x0001);    //clear flag

        for (uint8_t i = 0; i < TIMERS_COUNT; i++)
        {
            if (Timer::timers[i].cnt)
                Timer::timers[i].cnt--;
            else
            {
                Timer::timers[i].cnt = Timer::timers[i].period;

                if (Timer::timers[i].flag != 255)
                    Timer::timers[i].flag++;

                if (Timer::timers[i].callback_class != nullptr)
                    Timer::timers[i].callback_class->main();
            }
        }

        Timer::time++;
    }
}

#ifdef __cplusplus
}
#endif
