#ifndef _MOTOR_H_
#define _MOTOR_H_

#include <tgpio.h>

#define MOTOR_SPEED_MAX         ((int)255)

class Motor
{
  private:
    TGpio<TGPIOB, 4> mode;      //braking mode = 0 or free run = 1

    TGpio<TGPIOB, 5> a_way;   //way controll RIGHT motor
    TGpio<TGPIOA, 15> b_way;   //way controll LEFT motor
    TGpio<TGPIOB, 13> a_pwm;   //OC1A pwm  RIGHT motor, aenbl
    TGpio<TGPIOB, 14> b_pwm;   //OC1B pwm  LEFT motor, benbl

  public:
    Motor();
    ~Motor();
    void init();

    void run_left(int pwm);
    void run_right(int pwm);

  private:
    void pwm_init();
};

#endif
