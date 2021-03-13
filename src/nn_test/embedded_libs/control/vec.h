#ifndef _VEC_H_
#define _VEC_H_

#include <array.h>
#include <math_func.h>

template <unsigned int size_, class T = float> class Vec: public Array<T, size_>
{
    public:
        Vec():  Array<T, size_>::Array()
        {
            for (unsigned int i = 0; i < size_; i++)
                Array<T, size_>::v[i] = 0;
        }

        virtual ~Vec()
        {

        }


        Vec<size_, T> operator +(Vec<size_, T> &rhs)
        {
            Vec<size_, T> result;
            for (unsigned int i = 0; i < size_; i++)
            {
                result[i] = Array<T, size_>::v[i] + rhs[i];
            }
            return result;
        }

        Vec<size_, T> operator +(const Vec<size_, T> &rhs)
        {
            Vec<size_, T> result;
            for (unsigned int i = 0; i < size_; i++)
            {
                result[i] = Array<T, size_>::v[i] + rhs[i];
            }
            return result;
        }


        Vec<size_, T> operator -(Vec<size_, T> &rhs)
        {
            Vec<size_, T> result;
            for (unsigned int i = 0; i < size_; i++)
            {
                result[i] = Array<T, size_>::v[i] - rhs[i];
            }
            return result;
        }

        Vec<size_, T> operator -(const Vec<size_, T> &rhs)
        {
            Vec<size_, T> result;
            for (unsigned int i = 0; i < size_; i++)
            {
                result[i] = Array<T, size_>::v[i] - rhs[i];
            }
            return result;
        }


        Vec<size_, T> operator *(T &rhs)
        {
            Vec<size_, T> result;
            for (unsigned int i = 0; i < size_; i++)
            {
                result[i] = Array<T, size_>::v[i]*rhs;
            }
            return result;
        }

        Vec<size_, T> operator *(const T &rhs)
        {
            Vec<size_, T> result;
            for (unsigned int i = 0; i < size_; i++)
            {
                result[i] = Array<T, size_>::v[i]*rhs;
            }
            return result;
        }


        T operator *(Vec<size_, T> &rhs)
        {
            T result = 0;
            for (unsigned int i = 0; i < size_; i++)
            {
                result+= Array<T, size_>::v[i]*rhs[i];
            }
            return result;
        }

        T operator *(const Vec<size_, T> &rhs)
        {
            T result = 0;
            for (unsigned int i = 0; i < size_; i++)
            {
                result+= Array<T, size_>::v[i]*rhs[i];
            }
            return result;
        }

    public:
        T max()
        {
            T result = Array<T, size_>::v[0];

            for (unsigned int i = 0; i < size_; i++)
            {
                if (Array<T, size_>::v[i] > result)
                    result = Array<T, size_>::v[i];
            }

            return result;
        }

        T min()
        {
            T result = Array<T, size_>::v[0];

            for (unsigned int i = 0; i < size_; i++)
            {
                if (Array<T, size_>::v[i] < result)
                    result = Array<T, size_>::v[i];
            }

            return result;
        }

        unsigned int argmax()
        {
            unsigned int result = 0;

            for (unsigned int i = 0; i < size_; i++)
            {
                if (Array<T, size_>::v[i] > Array<T, size_>::v[result])
                    result = i;
            }

            return result;
        }

        unsigned int argmin()
        {
            unsigned int result = 0;

            for (unsigned int i = 0; i < size_; i++)
            {
                if (Array<T, size_>::v[i] < Array<T, size_>::v[result])
                    result = i;
            }

            return result;
        }


        void normalise(T range_min = 0, T range_max = 1)
        {
            T max_ = max();
            T min_ = min();


            T k = 0, q = 0;

            if (max_ > min_)
            {
                k = (range_max - range_min)/(max_ - min_);
                q = range_max - k*max_;
            }

            for (unsigned int i = 0; i < size_; i++)
            {
                Array<T, size_>::v[i] = k*Array<T, size_>::v[i] + q;
            }
        }

        T length()
        {
            T result = 0;
            for (unsigned int i = 0; i < size_; i++)
                result+= Array<T, size_>::v[i]*Array<T, size_>::v[i];

            return sqrtf(result);
        }

        unsigned int size()
        {
            return size_;
        }
};


#endif
