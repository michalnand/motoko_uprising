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
    predictor.process(line_sensor.adc_result);

    if (line_sensor.result.on_line)
      terminal << "1 ";
    else
      terminal << "0 ";

    terminal << line_sensor.result.left_line_position << " ";

    for (unsigned int i = 0; i < LINE_SENSOR_COUNT; i++)
    terminal << line_sensor.adc_result[i] << " ";

    terminal << imu_sensor.angle.x << " ";
    terminal << imu_sensor.angle.y << " ";
    terminal << imu_sensor.angle.z << " ";


    terminal << encoder_sensor.get_left() << " ";
    terminal << encoder_sensor.get_right() << " ";


    terminal << motor_controll.get_speed_left() << " ";
    terminal << motor_controll.get_speed_right() << " ";
 

    for (unsigned int i = 0; i < NETWORK_INPUT_SIZE; i++)
      terminal << predictor.get_input(i) << " ";
    terminal << predictor.get_result() << " ";

    terminal << "\n";

    timer.delay_ms(50);
  }
}
