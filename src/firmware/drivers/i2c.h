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
    protected:
        unsigned int bus_speed_;

    public:
      I2C_Interface();
      virtual ~I2C_Interface();

      virtual void start() = 0;
      virtual void stop() = 0;
      virtual void init() { bus_speed_ = 20;}
      virtual unsigned char write(unsigned char b) = 0;
      virtual unsigned char read(unsigned char ack = 0) = 0;


    public:
        void write_reg(unsigned char dev_adr, unsigned char reg_adr, unsigned char value);
        void write_reg_16bit(unsigned char dev_adr, unsigned char reg_adr, unsigned int value);
        void write_reg_multi(unsigned char dev_adr, unsigned char reg_adr, unsigned char *data, unsigned int count);
        unsigned char read_reg(unsigned char dev_adr, unsigned char reg_adr);
        unsigned int read_reg_16bit(unsigned char dev_adr, unsigned char reg_adr);
        void read_reg_multi(unsigned char dev_adr, unsigned char reg_adr, unsigned char *data, unsigned int count);
        void delay();

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
      bus_speed_ = bus_speed;

      sda.init();
      scl.init();
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

};



#endif
