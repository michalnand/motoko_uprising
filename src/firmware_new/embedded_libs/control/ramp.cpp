#include <ramp.h>


Ramp::Ramp(float ramp_up, float ramp_down, float value)
{
    init(ramp_up, ramp_down, value);
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

void Ramp::init(float ramp_up, float ramp_down, float value)
{
    this->ramp_up   = ramp_up;
    this->ramp_down = ramp_down;
    this->value     = value;
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
