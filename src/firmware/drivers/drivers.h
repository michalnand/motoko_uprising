#ifndef _DRIVERS_H_
#define _DRIVERS_H_

#include <mem.h>
#include <terminal.h>
#include <thread.h>
#include <timer.h>
#include <fram.h>
#include <i2c.h>
#include <key.h>

#include <distance_sensor.h>
#include <line_sensor.h>
#include <imu.h>
#include <encoder.h>
#include <motor_controll.h>



class Drivers
{
  private:
      TGpio<LED_GPIO, LED_PIN, GPIO_MODE_OUT> led;

  public:
    Drivers();
    virtual ~Drivers();

    int init();

    void test_imu_sensor(int count = -1);
    void test_distance_sensor(int count = -1);
    void test_line_sensor(int count = -1);
    void test_encoder_sensor(int count = -1);
};

extern Terminal                  terminal;
extern Timer                     timer;
extern TI2C<TGPIOB, 7, 6, 10>    i2c;
extern IMU                       imu_sensor;
extern DistanceSensor            distance_sensor;
extern LineSensor                line_sensor;
extern Encoder                   encoder_sensor;
extern MotorControll             motor_controll;


#endif
