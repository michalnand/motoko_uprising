#ifndef _FRAM_H_
#define _FRAM_H_

#include "i2c.h"


class Fram
{
  private:
    I2C_Interface *i2c;
    unsigned int current_address;

  public:
    Fram();
    ~Fram();

    void init(I2C_Interface *i2c_);
    unsigned int size();

    void write(unsigned int address, char *buffer, unsigned int size);
    void read(unsigned int address, char *buffer, unsigned int size);

    void set_current_address(unsigned int address);

    Fram& operator << (int &rhs);
    Fram& operator << (unsigned int &rhs);
    Fram& operator << (char &rhs);
    Fram& operator << (unsigned char &rhs);
    Fram& operator << (float &rhs);

    Fram& operator >> (int &rhs);
    Fram& operator >> (unsigned int &rhs);
    Fram& operator >> (char &rhs);
    Fram& operator >> (unsigned char &rhs);
    Fram& operator >> (float &rhs);
};

#endif
