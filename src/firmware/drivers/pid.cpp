#include "pid.h"


PID::PID()
{

}

PID::~PID()
{

}

void PID::init(int kp, int ki, int kd, int limit)
{
  e0 = 0;
  e1 = 0;
  e2 = 0;

  k0 = kp + ki + kd;
  k1 = -kp -2*kd;
  k2 = kd;

  u = 0;

  this->limit = limit;
}

int PID::process(int error)
{
  e2 = e1;
  e1 = e0;
  e0 = error;


  u+= (k0*e0 + k1*e1 + k2*e2)/256;

  if (u > limit)
    u = limit;

  if (u < -limit)
    u = -limit;

  return u;
}
