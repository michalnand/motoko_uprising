#include "pid.h"

PID::PID()
{
  init(0, 0, 0, 0);
}

PID::PID(int kp, int ki, int kd, int range)
{
  init(kp, ki, kd, range);
}

PID::PID(PID &other)
{
  k0 = other.k0;
  k1 = other.k1;
  k2 = other.k2;
  range = other.range;

  result = 0;

  e0 = 0;
  e1 = 0;
  e2 = 0;

  error = 0;
}

PID::~PID()
{

}

PID& PID::operator =(int *init_values)
{
  init(init_values[0], init_values[1], init_values[2], init_values[3]);
  return *this;
}

void PID::init(int kp, int ki, int kd, int range)
{
  k0 = kp + ki + kd;
  k1 = -kp - 2*kd;
  k2 = kd;

  this->range = range;
  result = 0;

  e0 = 0;
  e1 = 0;
  e2 = 0;

  error = 0;
}


void PID::main()
{
  e2 = e1;
  e1 = e0;
  e0 = error;

  result+= (k0*e0 + k1*e1 + k2*e2)/256;

  if (result > range)
    result = range;

  if (result < -range)
    result = -range;
}

void PID::set(int error)
{
  this->error = error;
}

void PID::set(int required_value, int plant_output)
{
  this->error = required_value - plant_output;
}

int PID::get()
{
  return result;
}
