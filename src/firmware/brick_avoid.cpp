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
    int angle1 = 1.7*WHEEL_CIRCUMFERENCE/4;
    int angle2 = 2.8*WHEEL_CIRCUMFERENCE/4;
    int angle3 = 1.7*WHEEL_CIRCUMFERENCE/4;

    process_move(-angle1, angle1);
    process_move(200, 200);

    process_move(angle2, -angle2);
    process_move(300, 300);

    process_move(angle3, -angle3);


    /*
    SpeedRamp<float> speed_ramp;
    float speed_limit =  0.4;

    //speed rise limit
    speed_ramp.init(0.02);

    while (1)
    {
        float speed     = speed_ramp.process(speed_limit);

        float steering  = -0.06;

        float speed_left  = -steering  + speed;
        float speed_right = steering + speed;

        motor_controll.set_left_speed(speed_left);
        motor_controll.set_right_speed(speed_right);
    }
    */

    while (1)
    {

    }
    /*
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
    */
}

void BrickAvoid::avoid(unsigned int side)
{
    int right_angle_distance = WHEEL_CIRCUMFERENCE;

    process_move(-right_angle_distance/4, -right_angle_distance/4);
    process_move(0, right_angle_distance);


    float steering_max = 0.3;
    float speed_limit =  0.25;

    PID steering_pid;
    SpeedRamp<float> speed_ramp;

    steering_pid.init(0.18, 0.0, 0.3, 10.0);
    steering_pid.reset(distance_sensor.result.right/1000.0);


    speed_ramp.init(0.01);

    while (1)
    {
        if (distance_sensor.ready())
        {
            //compute distance error
            float distance = distance_sensor.result.right/1000.0;

            float error    = 3.8 - distance;

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


            if (line_sensor.result.on_line)
                break;
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
