#ifndef _MATH_CONSTS_H_
#define _MATH_CONSTS_H_

#define MATH_ZERO   ((float)0.0)
#define MATH_ONE    ((float)1.0)
#define MATH_PI     ((float)3.14159265358979324)
#define MATH_E      ((float)2.71828182845904524)
#define MATH_SQRT2  ((float)1.41421356237309505)



template<class T> T abs(T value)
{
    if (value < 0)
        value = -value;
    return value;
}

template<class T> T saturate(T value, T min, T max)
{
    if (value < min)
        value = min;

    if (value > max)
        value = max;

    return value;
}

template<class T> T max(T a, T b)
{
    if (a > b)
        return a;
    return b;
}

template<class T> T min(T a, T b)
{
    if (a < b)
        return a;
    return b;
}




constexpr long int power(long int base, long int exponent)
{
    return exponent <= 1 ? base : (base * power(base, exponent - 1));
}


#define CENTER ((lo + hi + 1) / 2)

constexpr unsigned long int sqrt_tmp(unsigned long int x, unsigned long int lo, unsigned long int hi)
{
  return lo == hi ? lo : ((x / CENTER < CENTER)
      ? sqrt_tmp(x, lo, CENTER - 1) : sqrt_tmp(x, CENTER, hi));
}

constexpr unsigned long int sqrt(unsigned long int x)
{
  return sqrt_tmp(x, 0, x / 2 + 1);
}



inline float sqrtf(float x)
{
    float result;
    __asm volatile ("vsqrt.f32 %0, %1" : "=w" (result) : "w" (x) );
    return(result);
}



#endif
