#ifndef _GPIO_INTERFACE_H_
#define _GPIO_INTERFACE_H_


#define GPIO_MODE_OUT             0       //push-pull output mode
#define GPIO_MODE_IN_FLOATING     1       //input mode
#define GPIO_MODE_IN_PULLUP       2       //input mode with pullup
#define GPIO_MODE_AN              4       //analog input
#define GPIO_MODE_AF              5       //alternate function


class GpioInterface
{
    public:
        GpioInterface() { }
        virtual ~GpioInterface() { }

    public:
        virtual void set_mode(const unsigned char pin_mode)
        {
            (void)pin_mode;
        }


       virtual void set_alternative_function(unsigned char af)
       {
           (void)af;
       }

       virtual void af_config(unsigned int af_config_mode)
       {
           (void)af_config_mode;
       }


       virtual void write(int value)
       {
           (void)value;
       }

       virtual int read()
       {
           return 0;
       }

   public:
       GpioInterface& operator= (int value)
       {
           write(value);
           return *this;
       }

       GpioInterface& operator= (GpioInterface& rhs)
       {
           write(rhs.read());
           return *this;
       };

       operator int()
       {
           return read();
       };

       operator unsigned int()
       {
           return read();
       };
};

#endif
