#include <drivers.h>

Drivers drivers;

int main()
{
  drivers.init();

  drivers.test_imu_sensor(10);
  drivers.test_line_sensor();
  //drivers.test_encoder_sensor();

  while (1)
  {

  }
}
