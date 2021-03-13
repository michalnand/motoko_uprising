#ifndef _MOTOR_H_
#define _MOTOR_H_

#include <gpio.h>

#define MOTOR_SPEED_MAX         ((int)255)

class Motor
{
    private:
        Gpio<TGPIOB, 4> mode;      //braking mode = 0 or free run = 1

        Gpio<TGPIOB, 5> a_way;   //way controll RIGHT motor
        Gpio<TGPIOA, 15> b_way;   //way controll LEFT motor
        Gpio<TGPIOB, 13> a_pwm;   //OC1A pwm  RIGHT motor, aenbl
        Gpio<TGPIOB, 14> b_pwm;   //OC1B pwm  LEFT motor, benbl

    public:
        Motor();
        virtual ~Motor();
        void init();

        void run_left(int pwm);
        void run_right(int pwm);

    private:
        void pwm_init();
};

#endif
