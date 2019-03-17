#ifndef _SPEED_RAMP_H_
#define _SPEED_RAMP_H_


template <class T> class SpeedRamp
{
    public:
        SpeedRamp()
        {
            this->speed       = 0;
            this->speed_rise  = 0;
        }

        SpeedRamp(SpeedRamp<T> &other)
        {
            this->speed         = other.speed;
            this->speed_rise    = other.speed_rise;
        }

        SpeedRamp(const SpeedRamp<T> &other)
        {
            this->speed         = other.speed;
            this->speed_rise    = other.speed_rise;
        }


        SpeedRamp(T speed_rise)
        {
            this->speed       = 0;
            this->speed_rise  = speed_rise;
        }

        virtual ~SpeedRamp()
        {

        }

    public:
        SpeedRamp& operator=(SpeedRamp &other)
        {
            this->speed         = other.speed;
            this->speed_rise    = other.speed_rise;

            return *this;
        }
        
        SpeedRamp& operator=(const SpeedRamp &other)
        {
            this->speed         = other.speed;
            this->speed_rise    = other.speed_rise;

            return *this;
        }

    public:
        void init(T speed_rise)
        {
            this->speed       = 0;
            this->speed_rise  = speed_rise;
        }


        T process(T speed_limit)
        {
            if (speed < speed_limit)
                speed+= speed_rise;
            else
                speed = speed_limit;

            return speed;
        }

        void set_speed(T speed)
        {
            this->speed = speed;
        }

        T get()
        {
            return speed;
        }

    private:
        T speed, speed_rise;
};

#endif
