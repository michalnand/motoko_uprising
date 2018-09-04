#ifndef _ENCODER_H_
#define _ENCODER_H_

#include <tgpio.h>

#define PULSES_PER_ROTATION     ((int32_t)90)

//#define WHEEL_CIRCUMFERENCE     ((int32_t)100)
#define WHEEL_CIRCUMFERENCE     ((int32_t)88)


class Encoder
{
  private:
    TGpio<TGPIOC, 6, GPIO_MODE_IN_PULLUP> left_encoder;
    TGpio<TGPIOC, 7, GPIO_MODE_IN_PULLUP> left_encoder_b;

    TGpio<TGPIOC, 12, GPIO_MODE_IN_PULLUP> right_encoder;
    TGpio<TGPIOC, 11, GPIO_MODE_IN_PULLUP> right_encoder_b;

  public:
    Encoder();
    ~Encoder();

    int get_left();
    int get_right();
    int get_distance();

    struct sPosition get_position();

};


#endif
