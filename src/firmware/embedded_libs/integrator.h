#ifndef _INTEGRATOR_H_
#define _INTEGRATOR_H_


template <class T> class Integrator
{
    public:
        Integrator()
        {
            init(0, 0);
        }

        Integrator(Integrator<T> &other)
        {
            this->value     = other.value;
            this->k_rise    = other.k_rise;
            this->k_fall    = other.k_fall;
        }

        Integrator(const Integrator<T> &other)
        {
            this->value     = other.value;
            this->k_rise    = other.k_rise;
            this->k_fall    = other.k_fall;
        }


        Integrator(T k_rise, T k_fall)
        {
            this->value     = 0;
            this->k_rise    = k_rise;
            this->k_fall    = k_fall;
        }

        virtual ~Integrator()
        {

        }

    public:
        Integrator& operator=(Integrator &other)
        {
            this->value     = other.value;
            this->k_rise    = other.k_rise;
            this->k_fall    = other.k_fall;

            return *this;
        }
        Integrator& operator=(const Integrator &other)
        {
            this->value     = other.value;
            this->k_rise    = other.k_rise;
            this->k_fall    = other.k_fall;

            return *this;
        }

    public:
        void init(T k_rise, T k_fall)
        {
            this->k_rise    = k_rise;
            this->k_fall    = k_fall;
            this->value     = 0;
        }


        T process(T input)
        {
            if (value < input)
                value+= k_rise;
            else
            if (value > input)
                value-= k_fall;

            return value;
        }

        void set_value(T value)
        {
            this->value = value;
        }

        T get()
        {
            return value;
        }

        void reset()
        {
            value = 0;
        }

    private:
        T value, k_rise, k_fall;
};

#endif
