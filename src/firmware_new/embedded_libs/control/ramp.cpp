#include <ramp.h>



Ramp::Ramp()
{
    ramp_up         = 0.0;
    ramp_down       = 0.0;
    value           = 0.0;
}

Ramp::Ramp(float ramp_up, float ramp_down)
{
    this->ramp_up   = ramp_up;
    this->ramp_down = ramp_down;
    value           = 0.0;
}

Ramp::Ramp(Ramp &other)
{
    copy(other);
}

Ramp::Ramp(const Ramp &other)
{
    copy(other);
}

Ramp& Ramp::operator = (Ramp &other)
{
    copy(other);
    return *this;
}

Ramp& Ramp::operator = (const Ramp &other)
{
    copy(other);
    return *this;
}

Ramp::~Ramp()
{

}

void Ramp::copy(Ramp &other)
{
    ramp_up     = other.ramp_up;
    ramp_down   = other.ramp_down;
    value       = other.value;
}

void Ramp::copy(const Ramp &other)
{
    ramp_up     = other.ramp_up;
    ramp_down   = other.ramp_down;
    value       = other.value;
}


void Ramp::set(float value)
{
    this->value = value;
}

float Ramp::get()
{
    return value;
}

void Ramp::reset()
{
    set(0);
}

float Ramp::process(float target_value)
{
    if (target_value > value)
        value+= ramp_up;
    else if (target_value < value)
        value-= ramp_down;


    return value;
};
