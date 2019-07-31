#ifndef _IMU_H_
#define _IMU_H_

#include <i2c.h>
#include <thread.h>


struct sIMU_3VECT
{
    int32_t x, y, z;
};

class IMU: public Thread
{
  public:
    sIMU_3VECT acceleration;

    sIMU_3VECT angular_rate;
    sIMU_3VECT angle;


  private:
    sIMU_3VECT offset;

    bool m_present;

    bool m_ready;

    int sensitivity;

    uint64_t time_now, time_old;

  private:
    I2C_Interface *i2c;

  public:
    IMU();
    ~IMU();

    void init(I2C_Interface &i2c_);
    void read(bool calibration = false);

    void main();
    bool present();
    bool ready();

  private:
    void delay_loops(uint32_t loops);
};


#endif
