#include "eeprom.h"

#define EEPROM_ADDRESS              ((unsigned char)0xA0)
#define EEPROM_CAPACITY             ((unsigned int)32768)
#define BLOCK_SIZE                  ((unsigned int)64)

#include <drivers.h>

EEPROM::EEPROM()
{
    m_present = false;
}

EEPROM::~EEPROM()
{

}

void EEPROM::init(I2C_Interface &i2c_)
{
    i2c = &i2c_;
    m_present = true;

    __disable_irq();

    i2c->start();

    unsigned int ack0 = i2c->write(EEPROM_ADDRESS);
    unsigned int ack1 = i2c->write(0);
    unsigned int ack2 = i2c->write(0);

    i2c->stop();

    __enable_irq();

    if (ack0 != OK_I2C_ACK)
        m_present = false;

    if (ack1 != OK_I2C_ACK)
        m_present = false;

    if (ack2 != OK_I2C_ACK)
        m_present = false;
}

unsigned int EEPROM::size()
{
    return EEPROM_CAPACITY;
}

unsigned int EEPROM::block_size()
{
    return BLOCK_SIZE;
}


void EEPROM::erase()
{
    unsigned char buffer[BLOCK_SIZE];

    for (unsigned int i = 0; i < BLOCK_SIZE; i++)
        buffer[i] = 0;

    for (unsigned int address = 0; address < size(); address+= block_size())
        write(address, buffer);
}

bool EEPROM::present()
{
    return m_present;
}

int EEPROM::test(unsigned int address, unsigned int seed)
{
    unsigned char buffer[BLOCK_SIZE];
    for (unsigned int i = 0; i < BLOCK_SIZE; i++)
    {
        unsigned char b = 55*i + 21 + seed;
        buffer[i] = b;
    }

    write(address, buffer);

    unsigned int loops = 72*1000*5;
    while (loops--)
        __asm("nop");

    for (unsigned int i = 0; i < BLOCK_SIZE; i++)
        buffer[i] = 0;

    read(address, buffer);


    for (unsigned int i = 0; i < BLOCK_SIZE; i++)
    {
        unsigned char b = 55*i + 21 + seed;
        if (buffer[i] != b)
        {
            return -1;
        }
    }

    return 0;
}

void EEPROM::write(unsigned int address, unsigned char *buffer)
{
    if ((address + block_size()) > size())
        return;

    __disable_irq();

    i2c->start();
    i2c->write(EEPROM_ADDRESS);

    i2c->write(address>>8);
    i2c->write(address&0xff);

    for (unsigned int i = 0; i < block_size(); i++)
        i2c->write(buffer[i]);

    i2c->stop();

    __enable_irq();
}

void EEPROM::read(unsigned int address, unsigned char *buffer)
{
    if ((address + block_size()) > size())
        return;

    __disable_irq();

    i2c->start();
    i2c->write(EEPROM_ADDRESS);

    i2c->write(address>>8);
    i2c->write(address&0xff);

    i2c->start();
    i2c->write(EEPROM_ADDRESS|0x01);

    for (unsigned int i = 0; i < (block_size() - 1); i++)
        buffer[i] = i2c->read(1);
    buffer[block_size() - 1] = i2c->read(0);


    i2c->stop();

    __enable_irq();
}


void EEPROM::write(unsigned int address, char *buffer)
{
    write(address, (unsigned char*)buffer);
}

void EEPROM::read(unsigned int address, char *buffer)
{
    read(address, (unsigned char*)buffer);
}

void EEPROM::write(unsigned int address, int *buffer)
{
    write(address, (unsigned char*)buffer);
}

void EEPROM::read(unsigned int address, int *buffer)
{
    read(address, (unsigned char*)buffer);
}

void EEPROM::write(unsigned int address, unsigned int *buffer)
{
    write(address, (unsigned char*)buffer);
}

void EEPROM::read(unsigned int address, unsigned int *buffer)
{
    read(address, (unsigned char*)buffer);
}
