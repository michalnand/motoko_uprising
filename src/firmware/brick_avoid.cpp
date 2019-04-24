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


void BrickAvoid::avoid(int side)
{
    int right_angle_distance = WHEEL_CIRCUMFERENCE;

    float steering_max = 0.3;
    float speed_limit =  0.25;

    PID steering_pid;
    SpeedRamp<float> speed_ramp;

    //steering_pid.init(0.18, 0.0, 0.3, 10.0);
    steering_pid.init(0.6, 0.0, 0.3, 10.0);
    steering_pid.reset(distance_sensor.result.right);

    speed_ramp.init(0.01);

    process_move(-BRICK_AVOID_TURN_BACK_DISTANCE, -BRICK_AVOID_TURN_BACK_DISTANCE);

    if (side == BRICK_AVOID_SIDE_LEFT)
    {
        process_move(0, right_angle_distance);
    }

    if (side == BRICK_AVOID_SIDE_RIGHT)
    {
        process_move(right_angle_distance, 0);
    }


    int ignore_distance = encoder_sensor.get_distance() + BRICK_AVOID_IGNORE_DISTANCE;
    
    while (1)
    {
        if (distance_sensor.ready())
        {
            float distance, error;
            //compute distance error
            if (side == BRICK_AVOID_SIDE_LEFT)
            {
                distance = distance_sensor.result.right;
                //error    = 3.8 - distance;
                error    = 0.92 - distance;
            }

            if (side == BRICK_AVOID_SIDE_RIGHT)
            {
                distance = distance_sensor.result.left;
                //error    = -(3.7 - distance);
                error    = -(0.92 - distance); //0.89
            }

            //compute steering using PID
            float steering  = steering_pid.process(error);
            float speed = speed_ramp.process(speed_limit);

            float steering_saturated = saturate(steering, -steering_max, steering_max);

            //terminal << distance << " " << steering << " " << saturate(distance, -2.0, 2.0) << "\n";

            //compute outputs for motors
            float speed_right = steering_saturated + speed;
            float speed_left  = -steering_saturated  + speed;


            //input into PID controllers for motors
            motor_controll.set_right_speed(speed_right);
            motor_controll.set_left_speed(speed_left);

            if (encoder_sensor.get_distance() > ignore_distance)
            if (line_sensor.result.on_line)
                break;
        }
    }


    if (side == BRICK_AVOID_SIDE_LEFT)
    {
        process_move(0, (90*right_angle_distance)/100);
    }

    if (side == BRICK_AVOID_SIDE_RIGHT)
    {
        process_move((90*right_angle_distance)/100, 0);
    }
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


void BrickAvoid::move_forward(int sensor_distance)
{
    position_control.set_position(1000, 1000);

    while (position_control.is_done() != true)
    {
        if (distance_sensor.ready() && distance_sensor.result.front < sensor_distance)
            break;
        position_control.process();
        timer.delay_ms(4);
    }

    position_control.stop();
}
