#ifndef _PID_H_
#define _PID_H_

#include <stdint.h>

class PID
{
  private:
    int e0, e1, e2;
    int k0, k1, k2;
    int limit;
    int u;

  public:
    PID();
    virtual ~PID();

    void init(int kp, int ki, int kd, int limit);

    int process(int error);
};

#endif
