#include <drivers.h>


TI2C<TGPIOB, 7, 6, 10>    i2c;
Terminal                  terminal;
Timer                     timer;
IMU                       imu;


void i2c_test(I2C_Interface *i2c)
{
  TGpio<LED_GPIO, LED_PIN, GPIO_MODE_OUT> led;
  led = 1;

  char i = 0;
  while (1)
  {
    i2c->write(i);
    led = 0;
    timer.delay_ms(2);

    i2c->write(i);
    led = 1;
    timer.delay_ms(2);


    i++;
  }
}


void drivers_init()
{
  SystemInit();

  TGpio<LED_GPIO, LED_PIN, GPIO_MODE_OUT> led;
  led = 1;


  terminal.init();
  terminal << "\n\n\n";

  timer.init();
  terminal << "timer init done\n";
  terminal << "delay 100 ms ";
  timer.delay_ms(100);
  terminal << "done\n";

  i2c.init();
  terminal << "i2c init done\n";

  imu.init(&i2c);
  terminal << "imu init done with " << imu.present << "\n";


  terminal << "\ninit done\n";

  while (1)
  {
    led = 1;
    timer.delay_ms(100);
    led = 0;
    timer.delay_ms(400);
  }
}
