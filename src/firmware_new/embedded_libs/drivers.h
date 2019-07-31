#ifndef _DRIVERS_H_
#define _DRIVERS_H_

#include <embedded_libs.h>

#define I2C_TIMING          5

extern Terminal                                 terminal;
extern Timer                                    timer;
extern I2C<TGPIOB, 7, 6, I2C_TIMING>            i2c;
extern Gpio<TGPIOB, 15>                         led;

extern ADC                          adc;
extern IMU                          imu_sensor;
extern LineSensor                   line_sensor;
extern DistanceSensor               distance_sensor;
extern EncoderSensor                encoder_sensor;
extern MotorControll                motor_controll;
extern EEPROM                       eeprom;
extern Key                          key;



class Drivers
{
    public:
        Drivers();
        virtual ~Drivers();

        int init();
};


extern Drivers                      drivers;


#endif
