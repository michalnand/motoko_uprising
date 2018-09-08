#include <drivers.h>

Drivers drivers;

int main()
{
  drivers.init();

  //drivers.test_imu_sensor(10);
  //drivers.test_line_sensor();
  //drivers.test_encoder_sensor();
  //drivers.test_motor_controll_servo();
  drivers.test_motor_gyro_feedback();

  while (1)
  {

  }
}
