#ifndef _I2C_H_
#define _I2C_H_

#include "tgpio.h"

#define NO_I2C_ACK 0
#define OK_I2C_ACK 1


#define SetHighSCL()  {scl.set_mode(GPIO_MODE_IN_FLOATING);}
#define SetLowSCL()   {scl.set_mode(GPIO_MODE_OUT);}
#define SetHighSDA()  {sda.set_mode(GPIO_MODE_IN_FLOATING);}
#define SetLowSDA()   {sda.set_mode(GPIO_MODE_OUT);}


class I2C_Interface
{
  public:
    virtual void start() {};
    virtual void stop() {};
    virtual void init() {};
    virtual unsigned char write(unsigned char b)  {(void)b; return 0;};
    virtual unsigned char read(unsigned char ack = 0) {(void)ack; return 0;};
    virtual void write_reg(unsigned char dev_adr, unsigned char reg_adr, unsigned char value)  {(void)dev_adr; (void)reg_adr; (void)value;};
    virtual void write_reg_16bit(unsigned char dev_adr, unsigned char reg_adr, unsigned int value)  {(void)dev_adr; (void)reg_adr; (void)value;};
    virtual void write_reg_multi(unsigned char dev_adr, unsigned char reg_adr, unsigned char *data, unsigned int count)  {(void)dev_adr; (void)reg_adr; (void)data, (void)count;};
    virtual unsigned char read_reg(unsigned char dev_adr, unsigned char reg_adr)  {(void)dev_adr; (void)reg_adr; return 0;};
    virtual unsigned int read_reg_16bit(unsigned char dev_adr, unsigned char reg_adr)  {(void)dev_adr; (void)reg_adr; return 0;};
    virtual void read_reg_multi(unsigned char dev_adr, unsigned char reg_adr, unsigned char *data, unsigned int count)  {(void)dev_adr; (void)reg_adr; (void)data; (void)count;};
};

template <unsigned char port_name, unsigned char sda_pin, unsigned char scl_pin, unsigned char bus_speed = 5, unsigned char scl_port_name = port_name> class TI2C  : public I2C_Interface
{
  private:
    TGpio<port_name, sda_pin, GPIO_MODE_IN_FLOATING> sda;
    TGpio<scl_port_name, scl_pin, GPIO_MODE_IN_FLOATING> scl;

  public:
    TI2C()
    {

    }

    void init()
    {
      sda = 0;
      scl = 0;
    }

    void start()
    {
      SetHighSCL();
      SetHighSDA();

      SetHighSCL();
      SetLowSDA();

      SetLowSCL();
      SetHighSDA();

      delay();
    }

    void stop()
    {
      SetLowSCL();
      SetLowSDA();

      SetHighSCL();
      SetLowSDA();

      SetHighSCL();
      SetHighSDA();

      delay();
    }


    unsigned char write(unsigned char b)
    {
        unsigned char  i;
        unsigned char  return_ack;

        for (i = 0; i < 8; i++)
        {
            SetLowSCL();
            delay();

            if (b & (1<<7))
            {
                SetHighSDA();
            }
            else
            {
                SetLowSDA();
            }

            delay();
            SetHighSCL();

            delay();
            b <<= 1;
        }

        SetLowSCL();
        delay();

        SetHighSDA();
        delay();

        SetHighSCL();
        delay();

        if (sda)
            return_ack = NO_I2C_ACK;
        else
            return_ack = OK_I2C_ACK;

        SetLowSCL();
        delay();

        return(return_ack);
    }


    unsigned char read(unsigned char ack = 0)
    {
        unsigned char  i;
        unsigned char  c = 0x00;

        SetHighSDA();
        SetLowSCL();
        delay();

        for (i = 0; i < 8; i++)
        {
            c = c << 1;
            SetHighSCL();
            delay();

            if (sda)
              c = c | 0x01;

            SetLowSCL();
            delay();
        }


      	if(ack)
      	{
          SetLowSDA();
      	}
      	else
      	{
          SetHighSDA();
      	}

        delay();
        SetHighSCL();
        delay();
        SetLowSCL();
        delay();
        SetHighSDA();
        delay();

        return (c);
    }



    void write_reg(unsigned char dev_adr, unsigned char reg_adr, unsigned char value)
    {
        start();
        write(dev_adr);  //slave address, write command
        write(reg_adr);  //send reg address
        write(value);
        stop();
    }

    void write_reg_16bit(unsigned char dev_adr, unsigned char reg_adr, unsigned int value)
    {
      start();
      write(dev_adr);  //slave address, write command
      write(reg_adr);  //send reg address
      write((value >> 8) & 0xFF);
      write(value  & 0xFF);
      stop();
    }

    void write_reg_multi(unsigned char dev_adr, unsigned char reg_adr, unsigned char *data, unsigned int count)
    {
      unsigned int i;
      start();
      write(dev_adr);  //slave address, write command
      write(reg_adr);  //send reg address
      for (i = 0; i < count; i++)
        write(data[i]);
      stop();
    }


    unsigned char read_reg(unsigned char dev_adr, unsigned char reg_adr)
    {
        unsigned char res;

        start();
        write(dev_adr);  // slave address, write command
        write(reg_adr);  // send reg address

        start();
        write(dev_adr|0x01); // slave address, read command
        res = read(0);   // read data
        stop();

        return res;
    }

    unsigned int read_reg_16bit(unsigned char dev_adr, unsigned char reg_adr)
    {
      unsigned int result;

      start();
      write(dev_adr);  // slave address, write command
      write(reg_adr);  // send reg address

      start();
      write(dev_adr|0x01); // slave address, read command
      result = ((unsigned int)read(1))<<8;   // read data
      result|= ((unsigned int)read(0));
      stop();

      return result;
    }

    void read_reg_multi(unsigned char dev_adr, unsigned char reg_adr, unsigned char *data, unsigned int count)
    {
      unsigned int i;

      start();
      write(dev_adr);  // slave address, write command
      write(reg_adr);  // send reg address

      start();
      write(dev_adr|0x01); // slave address, read command
      for (i = 0; i < count; i++)
        data[i] = read(1);   // read data
      stop();
    }

    void delay()
    {
      for (unsigned char loops = 0; loops < bus_speed; loops++)
        __asm("nop");
    }

};



#endif
