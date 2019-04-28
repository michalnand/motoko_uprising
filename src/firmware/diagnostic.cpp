#include "diagnostic.h"

#include <drivers.h>

#include <line_following/line_predictor.h>
#include <line_following/LineNetwork/LineNetwork.h>

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

                terminal << "\"on_line\" : " << line_sensor.result.on_line << ",\n";
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
                terminal << "\"left_speed\" :" <<  motor_controll.get_speed_left() << ",\n";
                terminal << "\"right_speed\" :" << motor_controll.get_speed_right() << "\n";

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
