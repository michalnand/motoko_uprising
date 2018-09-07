#ifndef _MOTOR_CONTROLL_H_
#define _MOTOR_CONTROLL_H_


#include <thread.h>
#include <motor.h>


class MotorControll: public Thread
{
  protected:
    Motor motor;

  public:
    MotorControll();
    ~MotorControll();

    int init();

    void main();
};

#endif
