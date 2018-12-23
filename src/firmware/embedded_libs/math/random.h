#ifndef _RANDOM_H_
#define _RANDOM_H_


class Random
{
    private:
        static unsigned long int result;

    public:
        Random();
        Random(unsigned int seed);
        virtual ~Random();

        unsigned int get();
        unsigned int operator()();

        float getf(float min = 0.0, float max = 1.0);
};



#endif
