#include "brick_avoid.h"


#include <drivers.h>
#include <robot_config.h>
#include <speed_ramp.h>


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

void BrickAvoid::avoid(unsigned int side)
{
    float avoid_distance = 2.2;
    int right_angle_distance = WHEEL_CIRCUMFERENCE;

    process_move(-right_angle_distance/2, -right_angle_distance/2);
    process_move(0, right_angle_distance);


    PID steering_pid;
    SpeedRamp<float> speed_ramp;

    steering_pid.init(0.4, 0.0, 0.2, 10.0);
    steering_pid.reset(distance_sensor.result.right/100.0);


    float speed_limit =  0.4;

    //speed rise limit
    speed_ramp.init(0.02);

    while (1)
    {
        if (distance_sensor.ready())
        {
            //compute next speed, using ramp
            float speed = speed_ramp.process(speed_limit);

            //compute distance error
            float distance = distance_sensor.result.right/100.0;
            float error    = 2.200 - distance;

            //compute steering using PID
            float steering = steering_pid.process(error, distance);

            //compute outputs for motors
            float speed_left  = -steering  + speed;
            float speed_right = steering + speed;

            //input into PID controllers for motors
            motor_controll.set_left_speed(speed_left);
            motor_controll.set_right_speed(speed_right);

            if (line_sensor.result.on_line)
            {
                break;
            }
        }
    }

    process_move(0, (130*right_angle_distance)/100);
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
