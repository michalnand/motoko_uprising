#ifndef _DRIVERS_H_
#define _DRIVERS_H_

#include <config.h>
#include <mem.h>
#include <gpio.h>
#include <terminal.h>
#include <timer.h>
#include <i2c.h>
#include <imu.h>

#include <adc.h>
#include <line_sensor.h>
#include <distance_sensor.h>

#include <encoder_sensor.h>
#include <motor_controll.h>

#include <key.h>


class Drivers
{
    private:
        Gpio<LED_GPIO, LED_PIN, GPIO_MODE_OUT> led;

    public:
        Drivers();
        virtual ~Drivers();

        int init();

        void test_imu_sensor(int count = -1);
        void test_line_sensor(int count = -1);
        void test_distance_sensor(int count = -1);
        void test_encoder_sensor(int count = -1);

        void test_motor_speed_feedback();
        void test_motor_gyro_feedback();

        void test_line_follower();
};

extern Drivers drivers;

extern Terminal                  terminal;
extern Timer                     timer;
extern TI2C<TGPIOB, 7, 6, 10>    i2c;
extern IMU                       imu_sensor;
extern ADC                       adc;
extern LineSensor                line_sensor;
extern DistanceSensor            distance_sensor;
extern EncoderSensor             encoder_sensor;
extern MotorControll             motor_controll;
extern Key                       key;

#endif
