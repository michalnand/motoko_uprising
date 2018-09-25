#include <drivers.h>

Drivers drivers;

#include <line_following/line_predictor.h>
#include <line_following/LineNetwork/LineNetwork.h>



void cnn_line_follower(LinePredictor &line_predictor)
{
  terminal << "\ntest_line_follower\n";

  PID pid(0.4, 0.0, 1.8, 10.0);

  float speed      = 0.0;
  float speed_max  = 0.4;
  float speed_rise = 0.002;

  while (1)
  {
    if (line_sensor.ready())
    {
      if (line_sensor.result.on_line)
      {
        line_predictor.process(line_sensor.adc_result);

        switch (line_predictor.get_result())
        {
          case 2: speed_max = 0.8; break;
          default : speed_max = 0.4; break;
        }

        float line_position = line_sensor.result.right_line_position*1.0/line_sensor.get_max();
        float error = 0.0 - line_position;

        float turn = pid.process(error, line_position);


        float speed_left  = turn  + speed;
        float speed_right = -turn + speed;

        if (speed < speed_max)
          speed+= speed_rise;
        else
          speed = speed_max;

        motor_controll.set_left_speed(speed_left);
        motor_controll.set_right_speed(speed_right);
      }
      else
      {
        motor_controll.set_left_speed(0);
        motor_controll.set_right_speed(0);
        speed = 0.0;
        pid.reset();
      }
    }
  }
}

int main()
{
  drivers.init();

  //drivers.test_imu_sensor(10);
  //drivers.test_line_sensor();
  //drivers.test_encoder_sensor();
  //drivers.test_motor_controll_servo();
  //drivers.test_motor_gyro_feedback();

  drivers.test_diagnostic();

  //drivers.test_line_follower();

  //LinePredictor line_predictor;


  LineNetwork nn;
  LinePredictor line_predictor(nn);


  key.read();

  cnn_line_follower(line_predictor);

/*
  timer.reset();

  for (unsigned int i = 0; i < 100; i++)
    line_predictor.process(line_sensor.adc_result);

  unsigned int computing_time = timer.elapsed_time();

  terminal << "computing time x100 : " << computing_time << "[ms]\n";


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
  */

  while (1)
  {

  }
}
