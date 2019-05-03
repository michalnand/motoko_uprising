#ifndef _PID_H_
#define _PID_H_

class PID
{
  private:
    int k0, k1, k2, range;
    int result;

    int error, e0, e1, e2;

  public:
    PID();
    PID(int kp, int ki, int kd, int range);
    PID(PID &other);
    ~PID();

    PID& operator =(int *init_values);

  public:
    void init(int kp, int ki, int kd, int range);

    void main();

    void set(int error);
    void set(int required_value, int plant_output);

    int get();

};


#endif
