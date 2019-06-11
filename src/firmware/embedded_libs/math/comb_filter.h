#ifndef _COMB_FILTER_H_
#define _COMB_FILTER_H_

#include <array.h>

template <class T, const unsigned int size_> class CombFilter
{
    private:
        unsigned int ptr;
        Array<T, size_> filter;
        T result;

    public:
        CombFilter()
        {
            ptr     = 0;
            result  = 0;
        }

        virtual ~CombFilter()
        {

        }

        void fill(T &value)
        {
            for (unsigned int i = 0; i < size_; i++)
                process(value);
        }

        void clear()
        {
            for (unsigned int i = 0; i < size_; i++)
                process(0);
        }

        unsigned int size()
        {
            return size_;
        }

        T process(T input)
        {
            filter[ptr] = input;
            ptr = (ptr+1)%size_;

            result = 0;
            for (unsigned int i = 0; i < size_; i++)
                result+= filter[i];
            result/= size_;

            return result;
        }

        T get()
        {
            return result;
        }

};

#endif
