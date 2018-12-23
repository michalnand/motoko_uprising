#include <math/filter.h>


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
    y1 = 0.0;
    y2 = 0.0;

    x0 = 0.0;
    x1 = 0.0;
    x2 = 0.0;
}

float Filter::get(float x)
{
    float y;

    y = b0*x;
    y+= b1*x1;
    y+= b2*x2;

    y-= a1*y1;
    y-= a2*y2;

    x2 = x1;
    x1 = x;
    y2 = y1;
    y1 = y;

    return (y);
}


float Filter::operator()(float x)
{
    return get(x);
}
