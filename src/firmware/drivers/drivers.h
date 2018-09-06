#ifndef _DRIVERS_H_
#define _DRIVERS_H_


#include <distance_sensor.h>
#include <fram.h>
#include <i2c.h>
#include <imu.h>
#include <key.h>

#include <line_sensor.h>
#include <mem.h>
#include <terminal.h>
#include <thread.h>

#include <timer.h>

class Drivers
{
  private:
      TGpio<LED_GPIO, LED_PIN, GPIO_MODE_OUT> led;

  public:
    Drivers();
    virtual ~Drivers();

    int init();

    void test_imu();
};

extern Terminal                  terminal;
extern Timer                     timer;
extern TI2C<TGPIOB, 7, 6, 10>    i2c;
extern IMU                       imu;


#endif
