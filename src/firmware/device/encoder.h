#ifndef _ENCODER_H_
#define _ENCODER_H_

#include <tgpio.h>

#include <config.h>

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
};


#endif
