#include "brick_avoid.h"


#include <drivers.h>
#include <robot_config.h>

BrickAvoid::BrickAvoid()
{
    position_control.init(BRICK_AVOID_MAX_SPEED);
}

BrickAvoid::~BrickAvoid()
{

}


void BrickAvoid::avoid_hard(unsigned int side)
{
    int right_angle_distance = 2.1*WHEEL_CIRCUMFERENCE/4;

    timer.delay_ms(50);


    process_move(-right_angle_distance, right_angle_distance);
    process_move(200, 200);
    process_move(right_angle_distance, -right_angle_distance);
    process_move(180, 180);
    process_move(right_angle_distance, -right_angle_distance);
    process_move(120, 120);
    process_move(-right_angle_distance, right_angle_distance);

    timer.delay_ms(50);
}

void BrickAvoid::process_move(long int d_left, long int d_right)
{
    position_control.set_position(d_left, d_right);

    while (position_control.is_done() != true)
    {
        position_control.process();
        timer.delay_ms(4);
    }

    position_control.stop();
}
