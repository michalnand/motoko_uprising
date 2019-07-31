#include <pid.h>

PID::PID()
{
    init(0, 0, 0, 0);
}

PID::PID(float kp, float ki, float kd, float limit)
{
    init(kp, ki, kd, limit);
}

PID::PID(PID &other)
{
    copy(other);
}

PID::PID(const PID &other)
{
    copy(other);
}

PID& PID::operator= (PID &other)
{
    copy(other);
    return *this;
}

PID& PID::operator= (const PID &other)
{
    copy(other);
    return *this;
}

PID::~PID()
{

}


void PID::init(float kp, float ki, float kd, float limit)
{
    k0 = kp + ki;
    k1 = -kp;
    this->kd = kd;
    this->limit = limit;

    reset();
}


void PID::reset(float inital_plant_output)
{
    e0 = 0;
    e1 = 0;

    x0 = inital_plant_output;
    x1 = inital_plant_output;
    x2 = inital_plant_output;

    u = 0;
}



float PID::get()
{
    return u;
}

float PID::process(float error, float plant_output)
{
    e1 = e0;
    e0 = error;

    x2 = x1;
    x1 = x0;
    x0 = plant_output;

    u+= k0*e0 + k1*e1 - kd*(x0 - 2*x1 + x2);

    if (u > limit)
      u = limit;

    if (u < -limit)
      u = -limit;

    return u;
}

float PID::process(float error)
{
    return process(error, -error);
}


void PID::copy(PID &other)
{
    kd  = other.kd;

    e0  = other.e0;
    e1  = other.e1;

    x0  = other.x0;
    x1  = other.x1;
    x2  = other.x2;

    k0  = other.k0;
    k1  = other.k1;

    u       = other.u;
    limit   = other.limit;
}

void PID::copy(const PID &other)
{
    kd  = other.kd;

    e0  = other.e0;
    e1  = other.e1;

    x0  = other.x0;
    x1  = other.x1;
    x2  = other.x2;

    k0  = other.k0;
    k1  = other.k1;

    u       = other.u;
    limit   = other.limit;
}
