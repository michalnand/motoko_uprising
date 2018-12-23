#ifndef _MOTOR_CONTROLL_H_
#define _MOTOR_CONTROLL_H_


#include <motor.h>
#include <math/pid.h>

class MotorControll: public Thread
{
  protected:

    int ml_encoder_prev;
    int mr_encoder_prev;
    int ml_encoder_now;
    int mr_encoder_now;

    float ml_speed, mr_speed;

    float left_speed, right_speed;

  protected:
    Motor motor;

    PID pid_left, pid_right;

  public:
    MotorControll();
    virtual ~MotorControll();

    int init();

    void main();

    void set_left_speed(float left_speed);
    void set_right_speed(float right_speed);


    float get_speed_left();
    float get_speed_right();

    unsigned int get_dt();
};

#endif
