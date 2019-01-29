#include "line_search.h"

#include <drivers.h>
#include <robot_config.h>

LineSearch::LineSearch()
{
    position_control.init(LINE_SEARCH_MAX_SPEED);
}

LineSearch::~LineSearch()
{
 
}

void LineSearch::set_last_line_position(float last_line_position)
{
    this->last_line_position = last_line_position;
}

void LineSearch::main()
{
    int  turn_distance = LINE_SEARCH_TURN_DISTANCE;

    if (last_line_position < 0.0)
        position_control.set_position(turn_distance, 0);
    else
        position_control.set_position(0, turn_distance);

    if (process_move(0) == 0)
        return;

    if (last_line_position < 0.0)
        position_control.set_position(-turn_distance, 0);
    else
        position_control.set_position(0, -turn_distance);

    process_move(1000000);
    position_control.stop();


    if (last_line_position < 0.0)
        position_control.set_position(0, turn_distance);
    else
        position_control.set_position(turn_distance, 0);

    if (process_move(150) == 0)
        return;

    if (last_line_position < 0.0)
        position_control.set_position(0, -turn_distance);
    else
        position_control.set_position(-turn_distance, 0);

    process_move(1000000);
    position_control.stop();

    position_control.set_position(turn_distance/2, turn_distance/2);
    process_move(150);

    position_control.stop();
}

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
                if (line_sensor.result.on_line)
                    return 0;

            position_control.process();
            timer.delay_ms(4);
        }
    }

    return -1;
}
