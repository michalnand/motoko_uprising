#include "line_search.h"

#include <drivers.h>

LineSearch::LineSearch()
{
    initial_line_position = 0;
    state                 = 0;
    motion_state          = 0;

    turn_speed   = 0.5;

    line_search_distance = 100;


    float k_rise = 0.002;
    float k_fall = 0.004;

    integrator.init(k_rise, k_fall);
}

LineSearch::~LineSearch()
{

}

void LineSearch::set_initial_conditions(float initial_line_position, float speed)
{
    this->initial_line_position = initial_line_position;

    this->motion_state = 0;
    this->state        = 0;

    integrator.set_value(speed);
}


void LineSearch::main()
{
    long int line_search_distance_;

    switch (state)
    {
        case 0:
                ruler.start_point(encoder_sensor.get_distance());
                state = 2;
                break;

        case 1:
                integrator.reset();
                ruler.start_point(encoder_sensor.get_distance());
                state = 2;
                break;

        case 2:
                ruler.end_point(encoder_sensor.get_distance());
                if (motion_state == 4)
                    line_search_distance_ = line_search_distance/2;
                else
                    line_search_distance_ = line_search_distance;

                if (ruler.distance() > line_search_distance_)
                {
                    if ((motion_state == 1)||(motion_state == 3))
                        motors_brake(false);
                    else
                        motors_brake(true);

                    motion_state = (motion_state + 1)%5;
                    state = 1;
                }
                break;
    }

    if (line_sensor.result.on_line)
    {
        // state = 0;
    }


    switch (motion_state)
    {
        case 0:
                if (initial_line_position < 0)
                    set_motors(false, true);
                else
                    set_motors(true, true);
                break;

        case 1:
                if (initial_line_position < 0)
                    set_motors(false, false);
                else
                    set_motors(true, false);
                break;

        case 2:
                if (initial_line_position < 0)
                    set_motors(true, true);
                else
                    set_motors(false, true);
                break;

        case 3:
                if (initial_line_position < 0)
                    set_motors(true, false);
                else
                    set_motors(false, false);
                break;

        case 4:
                motor_controll.set_right_speed(integrator.get());
                motor_controll.set_left_speed(integrator.get());
                break;
    }

    integrator.process(turn_speed);
}


float LineSearch::get_speed()
{
    return integrator.get();
}


void LineSearch::set_motors(bool right, bool forward)
{
    float speed = integrator.get();

    if (forward == false)
        speed = -speed;

    if (right)
    {
        motor_controll.set_right_speed(speed);
        motor_controll.set_left_speed(0.0);
    }
    else
    {
        motor_controll.set_right_speed(0.0);
        motor_controll.set_left_speed(speed);
    }
}


void LineSearch::motors_brake(bool forward)
{
    while (integrator.get() > 0.05)
    {
        float speed = integrator.process(0);

        if (forward == false)
            speed = -speed;

        if (motor_controll.get_speed_right() > motor_controll.get_speed_left())
            motor_controll.set_right_speed(speed);
        else
            motor_controll.set_left_speed(speed);

        timer.delay_ms(4);
    }

    motor_controll.set_right_speed(0);
    motor_controll.set_left_speed(0);
}
