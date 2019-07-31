#ifndef _MOTOR_RAMP_H_
#define _MOTOR_RAMP_H_


class Ramp
{
    public:
        Ramp();
        Ramp(float ramp_up, float ramp_down);

        Ramp(Ramp &other);
        Ramp(const Ramp &other);

        Ramp& operator = (Ramp &other);
        Ramp& operator = (const Ramp &other);

        virtual ~Ramp();

        void set(float value);
        float get();
        void reset();
        float process(float target_value);

    private:
        void copy(Ramp &other);
        void copy(const Ramp &other);

    private:
        float ramp_up, ramp_down, value;
};


#endif
