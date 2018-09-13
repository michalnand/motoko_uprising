#include <drivers.h>

Drivers drivers;

#include <line_following/line_predictor.h>
#include <line_following/LineTypeNetwork/LineTypeNetwork.h>

int main()
{
  drivers.init();

  //drivers.test_imu_sensor(10);
  //drivers.test_line_sensor();
  //drivers.test_encoder_sensor();
  //drivers.test_motor_controll_servo();
  //drivers.test_motor_gyro_feedback();
  //
  //drivers.test_line_follower();

  //LinePredictor line_predictor;


  LineTypeNetwork nn;
  LinePredictor line_predictor(nn);


  key.read();


  unsigned int cnt = 0;
  while (1)
  {
    if (line_sensor.ready())
    {
      line_predictor.process(line_sensor.adc_result);
      if ((cnt%10) == 0)
        line_predictor.print();
      cnt++;
    }
  }


  while (1)
  {

  }
}
