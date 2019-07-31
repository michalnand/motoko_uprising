#ifndef _TIMER_H_
#define _TIMER_H_

#include <thread.h>
#include <stdint.h>

#define TIMERS_COUNT    ((uint8_t)16)


struct sTimer
{
    Thread *callback_class;
    uint32_t period, cnt;
    uint8_t flag;
};

class Timer
{
    public:
        static volatile uint64_t time;
        static volatile sTimer timers[TIMERS_COUNT];

    public:
        Timer();
        virtual ~Timer();

        void init();

        //@brief add periodic task
        //@param callback task function callback, void my_func(void)
        //@param period_ms executing period in miliseconds
        //if set to false, task function is executing inside interrupt rutine - and other interrupts are blocked
        int8_t add_task(Thread &callback_class, uint32_t period_ms);

        void set_period(uint8_t timer_id, uint32_t period_ms);

        uint8_t get_flag(uint8_t timer_id);
        void clear_flag(uint8_t timer_id);

        uint64_t get_time();
        uint64_t get_time_interrupt();


        void delay_ms(uint32_t ms_time);
        void delay_loops(uint32_t loops);
};


#endif
