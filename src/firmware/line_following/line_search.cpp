#include "line_search.h"

#include <drivers.h>

LineSearch::LineSearch()
{
    initial_turn = 0;
    state        = 0;

    turn_speed   = 0.5;
}

LineSearch::~LineSearch()
{

}

void LineSearch::set_initial_turn(float initial_turn)
{
    this->initial_turn = initial_turn;
}

void LineSearch::main()
{
    switch (state)
    {
        case 0:
                if (initial_turn > 0)
                {
                    motor_controll.set_left_speed(turn_speed);
                    motor_controll.set_right_speed(0.0);
                }
                else
                {
                    motor_controll.set_left_speed(0.0);
                    motor_controll.set_right_speed(turn_speed);
                }

                state = 1;
                break;

        case 1:

                break;

        default:
                state = 0;
                break;
    }
}
