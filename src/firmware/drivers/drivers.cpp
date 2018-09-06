#include <drivers.h>


TI2C<TGPIOB, 7, 6, 10>    i2c;
Terminal                  terminal;
Timer                     timer;
IMU                       imu;

Drivers::Drivers()
{

}

Drivers::~Drivers()
{

}

int Drivers::init()
{
  SystemInit();

  led = 1;

  terminal.init();
  terminal << "#####\n\n\n";
  terminal << "terminal init done\n";

  timer.init();
  terminal << "timer init done\n";

  terminal << "delay 200 ms ";
  timer.delay_ms(200);
  terminal << "done\n";

  i2c.init();
  terminal << "i2c init done\n";

  imu.init(&i2c);
  terminal << "imu init done with " << imu.present() << "\n";

  terminal << "\nsystem init done\n";

  led = 0;

  return 0;
}

void Drivers::test_imu()
{
  while (1)
  {
    if (imu.ready())
    {
        led = 1;

        terminal << imu.angular_rate.x << " ";
        terminal << imu.angular_rate.y << " ";
        terminal << imu.angular_rate.z << " ";

        terminal << " : ";

        terminal << imu.acceleration.x << " ";
        terminal << imu.acceleration.y << " ";
        terminal << imu.acceleration.z << " ";

        terminal << " : ";

        terminal << imu.angle.x << " ";
        terminal << imu.angle.y << " ";
        terminal << imu.angle.z << " ";

        terminal << "\n";

        led = 0;

        timer.delay_ms(100); 
    }
  }
}
