#include <drivers.h>

Drivers drivers;

int main()
{
  drivers.init();

  drivers.test_imu();

  while (1)
  {

  }
}
