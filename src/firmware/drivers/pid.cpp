#include "pid.h"


PID::PID(pid_t kp , pid_t ki , pid_t kd , pid_t limit )
{
  init(kp, ki, kd, limit);
}

PID::~PID()
{

}

void PID::init(pid_t kp, pid_t ki, pid_t kd, pid_t limit)
{
  e0 = 0;
  e1 = 0;

  x0 = 0;
  x1 = 0;
  x2 = 0;

  k0 = kp + ki;
  k1 = -kp;


  this->kd = kd;

  u = 0;

  this->limit = limit;
}


pid_t PID::process(pid_t error, pid_t plant_output)
{
  e1 = e0;
  e0 = error;

  x2 = x1;
  x1 = x0;
  x0 = plant_output;

  u+= (k0*e0 + k1*e1 - kd*(x0 - 2*x1 + x2));

  if (u > limit)
    u = limit;

  if (u < -limit)
    u = -limit;

  return u;
}


pid_t PID::process(pid_t error)
{
  return process(error, -error);
}
