#include <drivers.h>

Terminal                  terminal;
Timer                     timer;
TI2C<TGPIOB, 7, 6, 10>    i2c;
IMU                       imu;

void drivers_init()
{
  TGpio<LED_GPIO, LED_PIN, GPIO_MODE_OUT> led;
  led = 1;

  SystemInit();


  terminal.init();
  terminal << "\n\n\n";

  timer.init();
  terminal << "timer init done\n";
  terminal << "delay 1000 ms ";
  timer.delay_ms(1000);
  terminal << "done\n";

  i2c.init();
  terminal << "i2c init done\n";

  i2c.write_reg(1, 2, 3);

  while (1)
  {
    led = 1;
    timer.delay_ms(100);
    led = 0;
    timer.delay_ms(900);
  }

  imu.init(&i2c);
  terminal << "imu init done with " << imu.present << "\n";

  terminal << "\ninit done\n";
}
