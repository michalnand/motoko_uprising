#ifndef _ENCODER_SENSOR_H_
#define _ENCODER_SENSOR_H_

#include <gpio.h>

#include <config_drivers.h>

class EncoderSensor
{
  private:
    Gpio<TGPIOC, 6, GPIO_MODE_IN_PULLUP> left_encoder;
    Gpio<TGPIOC, 7, GPIO_MODE_IN_PULLUP> left_encoder_b;

    Gpio<TGPIOC, 12, GPIO_MODE_IN_PULLUP> right_encoder;
    Gpio<TGPIOC, 11, GPIO_MODE_IN_PULLUP> right_encoder_b;

  public:
    EncoderSensor();
    virtual ~EncoderSensor();

    void init();

    int get_left();
    int get_right();
    int get_distance();

    int get_left_no_atomic();
    int get_right_no_atomic();
};


#endif
