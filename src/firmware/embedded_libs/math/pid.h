#ifndef _PID_H_
#define _PID_H_



class PID
{
  private:
    float e0, e1, x0, x1, x2;
    float k0, k1, kd;
    float limit;
    float u;

  public:
    PID(float kp = 0.0, float ki = 0.0, float kd = 0.0, float limit = 1.0);
    virtual ~PID();

    void init(float kp, float ki, float kd, float limit);

    float process(float error, float plant_output);
    float process(float error);

    void reset(float inital_plant_output = 0.0);
};

#endif
