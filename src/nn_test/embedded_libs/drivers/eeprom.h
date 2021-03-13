#ifndef _EEPROM_H_
#define _EEPROM_H_

#include <i2c.h>


class EEPROM
{
    private:
        I2C_Interface *i2c;

        bool m_present;

    public:
        EEPROM();
        virtual ~EEPROM();

        void init(I2C_Interface &i2c_);

        unsigned int size();
        unsigned int block_size();

        void erase();

        bool present();

        int test(unsigned int address, unsigned int seed = 0);

        //write buffer with size block_size()
        void write(unsigned int address, unsigned char *buffer);

        //read to buffer with size block_size()
        void read(unsigned int address, unsigned char *buffer);

        //write buffer with size block_size()
        void write(unsigned int address, char *buffer);

        //read to buffer with size block_size()
        void read(unsigned int address, char *buffer);

        //write buffer with size block_size()/sizeof(int)
        void write(unsigned int address, unsigned int *buffer);

        //read to buffer with size block_size()/sizeof(int)
        void read(unsigned int address, unsigned int *buffer);

        //write buffer with size block_size()/sizeof(int)
        void write(unsigned int address, int *buffer);

        //read to buffer with size block_size()/sizeof(int)
        void read(unsigned int address, int *buffer);
};

#endif
