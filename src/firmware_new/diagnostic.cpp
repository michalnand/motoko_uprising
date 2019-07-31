#include "diagnostic.h"

#include <drivers.h>

#include <ai/line_predictor.h>
#include <ai/LineNetwork/LineNetwork.h>



void diagnostic()
{
    LineNetwork nn;
    LinePredictor predictor(nn);

    while (1)
    {
        predictor.process(line_sensor.adc_result, 0, 0);

        terminal << "#JSON\n";

        terminal << "{\n";
        terminal << " \"debug\": {\n";

            terminal << "\"line_sensor\" : {\n";

                terminal << "\"line_lost_type\" : " << line_sensor.result.line_lost_type << ",\n";
                terminal << "\"line_type\" : " << line_sensor.result.line_type << ",\n";
                terminal << "\"on_line_count\" : " << line_sensor.result.on_line_count << ",\n";
                terminal << "\"center_line_position\" : " << line_sensor.result.center_line_position << ",\n";
                terminal << "\"left_line_position\" : " << line_sensor.result.left_line_position << ",\n";
                terminal << "\"right_line_position\" : " << line_sensor.result.right_line_position << ",\n";
                terminal << "\"average\" : " << line_sensor.result.average << ",\n";

                terminal << "\"adc_result\" : [ ";
                for (unsigned int i = 0; i < LINE_SENSOR_COUNT; i++)
                {
                    terminal << line_sensor.adc_result[i];
                    if (i < (LINE_SENSOR_COUNT-1))
                        terminal << ", ";
                }
                terminal << "]\n";

            terminal << "},\n";

            terminal << "\"distance_sensor\": {\n";

                terminal << "\"left\" :" << distance_sensor.result.left << ",\n";
                terminal << "\"front\" :" << distance_sensor.result.front << ",\n";
                terminal << "\"right\" :" << distance_sensor.result.right << ",\n";
                terminal << "\"front_obstacle_warning\" :" << distance_sensor.result.front_obstacle_warning << ",\n";
                terminal << "\"front_obstacle\" :" << distance_sensor.result.front_obstacle << "\n";

            terminal << "},\n";

            terminal << "\"imu_sensor\" : {\n";

                terminal << "\"angular_rate\" : [" << imu_sensor.angular_rate.x << ", " << imu_sensor.angular_rate.y << ", " << imu_sensor.angular_rate.z << "],\n";
                terminal << "\"angle\" : [" << imu_sensor.angle.x << ", " << imu_sensor.angle.y << ", " << imu_sensor.angle.z << "],\n";
                terminal << "\"acceleration\" : [" << imu_sensor.acceleration.x << ", " << imu_sensor.acceleration.y << ", " << imu_sensor.acceleration.z << "]\n";

            terminal << "},\n";


            terminal << "\"motor_controll\" : {\n";

                terminal << "\"left_encoder\" :" << encoder_sensor.get_left() << ",\n";
                terminal << "\"right_encoder\" :" << encoder_sensor.get_right() << ",\n";
                terminal << "\"left_speed\" :" <<  motor_controll.get_left_speed() << ",\n";
                terminal << "\"right_speed\" :" << motor_controll.get_right_speed() << "\n";

            terminal << "},\n";


            terminal << "\"neural_network\" : {\n";

                terminal << "\"input\" : [ ";
                for (unsigned int i = 0; i < NETWORK_INPUT_SIZE; i++)
                {
                    terminal << predictor.get_input(i);
                    if (i < (NETWORK_INPUT_SIZE-1))
                        terminal << ", ";
                }
                terminal << "],\n";

                terminal << "\"output\" :" << predictor.get_result() << "\n";

            terminal << "}\n";

        terminal << "}\n";
        terminal << "}\n";

        terminal << "#END\n";

        terminal << "\n\n";

        timer.delay_ms(100);
    }
}

/*
void brick_avoid_test()
{
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

            float error    = 0.92 - distance;

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
        }
    }
}
*/
