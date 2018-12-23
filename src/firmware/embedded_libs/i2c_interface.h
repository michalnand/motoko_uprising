#ifndef _I2C_INTERFACE_H_
#define _I2C_INTERFACE_H_

class I2C_Interface
{
    protected:
        unsigned int bus_speed_;

    public:
      I2C_Interface();
      ~I2C_Interface();

      virtual void start() { }
      virtual void stop() { }
      virtual void init() { bus_speed_ = 20;}
      virtual unsigned char write(unsigned char b) { (void)b; return 0;};
      virtual unsigned char read(unsigned char ack = 0) { (void)ack; return 0;};


    public:
        void write_reg(unsigned char dev_adr, unsigned char reg_adr, unsigned char value);
        void write_reg_16bit(unsigned char dev_adr, unsigned char reg_adr, unsigned int value);
        void write_reg_multi(unsigned char dev_adr, unsigned char reg_adr, unsigned char *data, unsigned int count);
        unsigned char read_reg(unsigned char dev_adr, unsigned char reg_adr);
        unsigned int read_reg_16bit(unsigned char dev_adr, unsigned char reg_adr);
        void read_reg_multi(unsigned char dev_adr, unsigned char reg_adr, unsigned char *data, unsigned int count);
        void delay();

};



#endif
