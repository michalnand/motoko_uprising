#include "vs1053.h"


VS1053::VS1053()
{
  x_reset = 1;
  x_dcs = 1;
  x_cs = 1;

  x_reset = 0;
  delay_loops(100000);
  x_reset = 1;
  delay_loops(100000);


  write_register(0x00, 1<<2); //software reset
  delay_loops(100000);

  write_register(0x00, (1<<1) | (1<<11) | (1<<3)); //allow mpeg1 2 layer, vs1002 new mode

  while (buffer_empty() != true)
    __asm("nop");

//  write_register(0x03, 0x9800);

  delay_loops(100000);

  set_volume(10);

}

VS1053::~VS1053()
{

}


void VS1053::set_volume(unsigned char volume)
{
  volume = 255 - volume;
  uint16_t tmp;

  tmp = volume | (((uint16_t)volume) << 8);
  write_register(0x0B, tmp);
}

bool VS1053::buffer_empty()
{
  if (dreq != 0)
    return true;
  return false;
}

void VS1053::send_data(unsigned char *buffer)
{
  x_dcs = 0;

  for (unsigned int i = 0; i < 32; i++)
    spi_byte(buffer[i]);

  x_dcs = 1;
}


void VS1053::write_register(unsigned char address, uint16_t data)
{
  x_cs = 0;

  spi_byte(0x02);       //write
  spi_byte(address);    //register address
  spi_byte(data>>8);    //high byte first
  spi_byte(data&0xff);  //low byte second

  x_cs = 1;
}


uint16_t VS1053::read_register(unsigned char address)
{
  uint16_t result = 0;
  x_cs = 0;

  spi_byte(0x03);       //read
  spi_byte(address);    //register address
  result|= ((uint16_t)spi_byte(0xff)) << 8;    //high byte first
  result|= (uint16_t)spi_byte(0xff);  //low byte second

  x_cs = 1;

  return result;
}

unsigned char VS1053::spi_byte(unsigned char b)
{
  unsigned char res = 0;

  for (unsigned int i = 0; i < 8; i++)
  {
    if (b&(1<<7))
      mosi = 1;
    else
      mosi = 0;
    b<<=1;

    sck = 1;

    __asm volatile("nop");

    res<<= 1;
    if (miso)
      res|= (1<<0);

    sck = 0;
  }

  return res;
}

void VS1053::delay_loops(uint32_t loops)
{
  while (loops--)
    __asm("nop");
}
