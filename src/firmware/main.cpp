#include <embedded_libs.h>
#include <drivers/drivers.h>
#include <robot.h>
#include <diagnostic.h>


void brick_avoid_test()
{
    int right_angle_distance = WHEEL_CIRCUMFERENCE;

    float steering_max = 0.3;
    float speed_limit =  0.25;

    PID steering_pid;
    SpeedRamp<float> speed_ramp;

    steering_pid.init(0.6, 0.0, 0.3, 10.0);
    steering_pid.reset(distance_sensor.result.right/1000.0);


    speed_ramp.init(0.01);

    while (1)
    {
        if (distance_sensor.ready())
        {
            //compute distance error
            float distance = distance_sensor.result.right;

            float error    = 0.9 - distance;

            //compute steering using PID
            float steering  = steering_pid.process(error);
            float speed = speed_ramp.process(speed_limit);

            float steering_saturated = saturate(steering, -steering_max, steering_max);

            terminal << distance << " " << steering << " " << saturate(distance, -2.0, 2.0) << "\n";

            //compute outputs for motors
            float speed_right = steering_saturated + speed;
            float speed_left  = -steering_saturated  + speed;


            //input into PID controllers for motors
            motor_controll.set_right_speed(speed_right);
            motor_controll.set_left_speed(speed_left);
        }
    }
}


int main()
{
    drivers.init();
    key.read();

    //brick_avoid_test();
    //drivers.test_imu_sensor();
    //drivers.test_line_sensor();
    drivers.test_distance_sensor();
    //drivers.test_encoder_sensor();
    //drivers.test_motor_speed_feedback();


    //diagnostic();

    //brick_avoid_test();

    Robot robot;
    robot.main();
}
