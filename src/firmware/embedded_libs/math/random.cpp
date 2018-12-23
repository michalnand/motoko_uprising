#include <math/random.h>

unsigned long int Random::result = 0;

Random::Random()
{

}

Random::Random(unsigned int seed)
{
    result = seed;
}

Random::~Random()
{

}

unsigned int Random::get()
{
    result = result*(unsigned long int)25214903917 + (unsigned long int)11;

    return result;
}

unsigned int Random::operator()()
{
    return get();
}


float Random::getf(float min, float max)
{
    float tmp = (get()%100000000)/100000000.0; 
    float res = tmp*(max - min) + min;
    return res;
}
