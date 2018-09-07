#include "fram.h"

#define FRAM_ADDRESS              ((unsigned char)0xA0)
#define FRAM_CAPACITY             ((unsigned int)8192)

Fram::Fram()
{

}

Fram::~Fram()
{

}

void Fram::init(I2C_Interface *i2c_)
{
  i2c = i2c_;
  current_address = 0;
}

unsigned int Fram::size()
{
  return FRAM_CAPACITY;
}

void Fram::set_current_address(unsigned int address)
{
  current_address = address;
}

void Fram::write(unsigned int address, char *buffer, unsigned int size)
{
  i2c->start();
  i2c->write(FRAM_ADDRESS);

  i2c->write(address>>8);
  i2c->write(address&0xff);

  for (unsigned int i = 0; i < size; i++)
    i2c->write(buffer[i]);

  i2c->stop();

  set_current_address(address + size);
}

void Fram::read(unsigned int address, char *buffer, unsigned int size)
{
  i2c->start();
  i2c->write(FRAM_ADDRESS);

  i2c->write(address>>8);
  i2c->write(address&0xff);
  i2c->stop();

  i2c->start();
  i2c->write(FRAM_ADDRESS | 1);

  for (unsigned int i = 0; i < (size-1); i++)
   buffer[i] = i2c->read(1);
  buffer[size - 1] = i2c->read(0);

  i2c->stop();

  set_current_address(address + size);
}



Fram& Fram::operator<< (int &rhs)
{
  write(current_address, (char*)(&rhs), sizeof(rhs));
  current_address+= sizeof(rhs);

  return *this;
}

Fram& Fram::operator << (unsigned int &rhs)
{
  write(current_address, (char*)(&rhs), sizeof(rhs));
  current_address+= sizeof(rhs);

  return *this;
}

Fram& Fram::operator << (char &rhs)
{
  write(current_address, (char*)(&rhs), sizeof(rhs));
  current_address+= sizeof(rhs);

  return *this;
}

Fram& Fram::operator << (unsigned char &rhs)
{
  write(current_address, (char*)(&rhs), sizeof(rhs));
  current_address+= sizeof(rhs);

  return *this;
}

Fram& Fram::operator << (float &rhs)
{
  write(current_address, (char*)(&rhs), sizeof(rhs));
  current_address+= sizeof(rhs);

  return *this;
}

Fram& Fram::operator >> (int &rhs)
{
  read(current_address, (char*)(&rhs), sizeof(rhs));
  current_address+= sizeof(rhs);

  return *this;
}

Fram& Fram::operator >> (unsigned int &rhs)
{
  read(current_address, (char*)(&rhs), sizeof(rhs));
  current_address+= sizeof(rhs);

  return *this;
}

Fram& Fram::operator >> (char &rhs)
{
  read(current_address, (char*)(&rhs), sizeof(rhs));
  current_address+= sizeof(rhs);

  return *this;
}
 
Fram& Fram::operator >> (unsigned char &rhs)
{
  read(current_address, (char*)(&rhs), sizeof(rhs));
  current_address+= sizeof(rhs);

  return *this;
}

Fram& Fram::operator >> (float &rhs)
{
  write(current_address, (char*)(&rhs), sizeof(rhs));
  current_address+= sizeof(rhs);

  return *this;
}
