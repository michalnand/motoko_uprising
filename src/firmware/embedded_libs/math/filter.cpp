#include <math/filter.h>


Filter::Filter()
{
    set_coefs(0, 0, 0, 0, 0);
    reset();
}

Filter::Filter(float a1, float a2, float b0, float b1, float b2)
{
    set_coefs(a1, a2, b0, b1, b2);
    reset();
}

Filter::~Filter()
{

}


void Filter::set_coefs(float a1, float a2, float b0, float b1, float b2)
{
    this->a1 = a1;
    this->a1 = a2;

    this->b0 = b0;
    this->b1 = b1;
    this->b2 = b2;
}

void Filter::reset()
{
    y0 = 0.0;
    y1 = 0.0;
    y2 = 0.0;

    x0 = 0.0;
    x1 = 0.0;
    x2 = 0.0;

    result = 0.0;
}

float Filter::process(float x)
{
    float sum;

    x2 = x1;
    x1 = x0;
    x0 = x;

    y2 = y1;
    y1 = y0;

    sum = b0*x0;
    sum+= b1*x1;
    sum+= b2*x2;

    sum+= a1*y1;
    sum+= a2*y2;

    y0 = sum;

    result = sum;

    return result;
}

float Filter::get()
{
    return result;
}

float Filter::get_absolute()
{
    float tmp = result;
    if (tmp < 0.0)
        tmp = -tmp;

    return tmp;
}

float Filter::operator()(float x)
{
    return process(x);
}
