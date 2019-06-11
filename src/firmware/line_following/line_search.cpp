#include "line_search.h"

#include <drivers.h>
#include <robot_config.h>

LineSearch::LineSearch()
{
    position_control.init(LINE_SEARCH_MAX_SPEED);
    keep_speed = false;
}

LineSearch::~LineSearch()
{

}

void LineSearch::set_last_line_position(float last_line_position)
{
    this->last_line_position = last_line_position;
}

void LineSearch::keep_speed_enable()
{
    keep_speed = true;
}

void LineSearch::keep_speed_disable()
{
    keep_speed = false;
}

int LineSearch::main()
{
    if (line_sensor.result.line_lost_type == LINE_LOST_CENTER)
    {
        float speed = (motor_controll.get_speed_left() + motor_controll.get_speed_right())/2.0;
        motor_controll.set_left_speed(speed);
        motor_controll.set_right_speed(speed);
    }
    else
    {
        motor_controll.set_left_speed(0);
        motor_controll.set_right_speed(0);

        return LINE_NO_FOUND;
    }

    return LINE_NO_FOUND;
}

/*
int LineSearch::main()
{
    if (abs(last_line_position) < 0.6)
    {
        position_control.set_position(LINE_SEARCH_TURN_DISTANCE_FORWARD, LINE_SEARCH_TURN_DISTANCE_FORWARD);
        process_move(80);
        position_control.stop();
    }



    if (last_line_position < 0.0)
        position_control.set_position(LINE_SEARCH_TURN_DISTANCE_RIGHT, 0, POSITION_CONTROLL_DEFAULT_DISTANCE_LIMIT, keep_speed);
    else
        position_control.set_position(0, LINE_SEARCH_TURN_DISTANCE_LEFT, POSITION_CONTROLL_DEFAULT_DISTANCE_LIMIT, keep_speed);

    keep_speed = false;

    if (process_move(0) == 0)
        return LINE_FOUND_IMMEDIATELY;

    if (last_line_position < 0.0)
        position_control.set_position(-LINE_SEARCH_TURN_DISTANCE_BACK_RIGHT, 0);
    else
        position_control.set_position(0, -LINE_SEARCH_TURN_DISTANCE_BACK_LEFT);

    process_move(1000000);
    position_control.stop();

    position_control.set_position(LINE_SEARCH_TURN_DISTANCE_FORWARD/4, LINE_SEARCH_TURN_DISTANCE_FORWARD/4);
    process_move(1000000);
    position_control.stop();

    if (LINE_SEARCH_ONE_SIDE == false)
    {
        if (last_line_position < 0.0)
            position_control.set_position(0, LINE_SEARCH_TURN_DISTANCE_LEFT);
        else
            position_control.set_position(LINE_SEARCH_TURN_DISTANCE_RIGHT, 0);

        if (process_move(80) == 0)
            return LINE_FOUND;

        if (last_line_position < 0.0)
            position_control.set_position(0, -LINE_SEARCH_TURN_DISTANCE_BACK_LEFT);
        else
            position_control.set_position(-LINE_SEARCH_TURN_DISTANCE_BACK_RIGHT, 0);

        process_move(1000000);
        position_control.stop();
    }

    position_control.set_position(LINE_SEARCH_TURN_DISTANCE_FORWARD, LINE_SEARCH_TURN_DISTANCE_FORWARD);
    process_move(80);

    position_control.stop();

    return LINE_NO_FOUND;
}
*/

float LineSearch::get_speed()
{
    return 0;
}

int LineSearch::process_move(unsigned int sensor_inactive_time)
{
    unsigned int time_active = timer.get_time() + sensor_inactive_time;

    while (position_control.is_done() != true)
    {
        if (line_sensor.ready())
        {
            if (timer.get_time() > time_active)
                if (line_sensor.result.line_lost_type == LINE_LOST_NONE)
                    return 0;

            position_control.process();
            timer.delay_ms(4);
        }
    }

    return -1;
}
