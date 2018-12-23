#include "pid.h"


PID::PID(float kp , float ki , float kd , float limit )
{
  init(kp, ki, kd, limit);
}

PID::~PID()
{

}

void PID::init(float kp, float ki, float kd, float limit)
{
  reset();

  k0 = kp + ki;
  k1 = -kp;


  this->kd = kd;
  this->limit = limit;
}


float PID::process(float error, float plant_output)
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

void PID::reset()
{
  e0 = 0; 
  e1 = 0;

  x0 = 0;
  x1 = 0;
  x2 = 0;

  u = 0;
}


float PID::process(float error)
{
  return process(error, -error);
}
