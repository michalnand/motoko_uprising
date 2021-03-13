#include <key.h>

#include <drivers.h>

#define  BLINK_SLOW_PERIOD      500
#define  BLINK_MIDLE_PERIOD     100
#define  BLINK_FAST_PERIOD      50

Key::Key()
{

}


Key::~Key()
{

}

void Key::init()
{
    result = -1;
    led_state = 0;

    //initial slow blinking
    timer_id = timer.add_task(*this, BLINK_SLOW_PERIOD);
}


int Key::read()
{
    //wait for keypress
    while (key != 0)
        __asm("nop");

    result = 1;

    //button pressed -> blink midle
    timer.set_period(timer_id, BLINK_MIDLE_PERIOD);

    unsigned int time_start = timer.get_time();

    //wait for key release
    while (key == 0)
    {
        //if long pressed
        if (timer.get_time() > (time_start + 2000))
        if (result == 1)
        {
            timer.set_period(timer_id, BLINK_FAST_PERIOD);
            result = 2;
        }
    }

    return result;
}

int Key::get_result()
{
    return result;
}

void Key::main()
{
    if (led_state != 0)
    {
        led_state = 0;
        led = 1;
    }
    else
    {
        led_state = 1;
        led = 0;
    }
}
