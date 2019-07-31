#ifndef _PID_H_
#define _PID_H_


class PID
{
    public:
        PID();
        PID(float kp, float ki, float kd, float limit = 1.0);
        PID(PID &other);
        PID(const PID &other);

        PID& operator = (PID &other);
        PID& operator = (const PID &other);

        virtual ~PID();
        void init(float kp, float ki, float kd, float limit = 1.0);

        void reset(float inital_plant_output = 0.0);

        float get();
        float process(float error, float plant_output);
        float process(float error);

    private:
        void copy(PID &other);
        void copy(const PID &other);

    private:
        float kd;
        float e0, e1, x0, x1, x2;
        float k0, k1;
        float u;
        float limit;
};

#endif
