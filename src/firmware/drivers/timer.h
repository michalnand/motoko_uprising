#ifndef _TIMER_H_
#define _TIMER_H_

#include <thread.h>

class Timer
{
  private:
    unsigned long int stop_watch_init_value;

  public:
    Timer();
    ~Timer();

    void init();

    //@brief add periodic task
    //@param callback task function callback, void my_func(void)
    //@param period_ms executing period in miliseconds
    //@param main_loop_callback_enabled if set to true (default) task function is executed in main loop
    //if set to false, task function is executing inside interrupt rutine - and other interrupts are blocked
    int add_task(void (*callback_function)(), unsigned int period_ms, bool main_loop_callback_enabled = true);

    int add_task(class Thread *callback_class, unsigned int period_ms, bool main_loop_callback_enabled = true);


    //@brief start real timer tasks executing
    //run in main loop, all tasks set with main_loop_callback_enabled to true are
    //executed in their period, and celared they flags;
    //@warning - dont call test_and_clear for those tasks
    void main();


    //@brief set period of timer_id
    //flag will be set to nonzero value 1000/period_ms times per second
    void set_period(unsigned char timer_id, unsigned int period_ms);


    //@brief return nonzero value if timer_id elapsed it's period
    //if flag is nonzero, is cleared automaticly
    //when longer than one period isn't called this function, flag is incremented each
    //period, until reach 255 value
    unsigned int test_and_clear(unsigned char timer_id);

    unsigned long int get_time();

    void delay_ms(unsigned int ms_time);

    void delay_loops(unsigned long int loops);

    void reset();
    unsigned long int elapsed_time();
};


#endif
