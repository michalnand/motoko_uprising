#include "usart.h"
#include <avr/io.h>


#define TERMINAL_BAUDRATE   9600 //57600
#define UBRR_VALUE ((((uint32_t)16000000 / (TERMINAL_BAUDRATE * 16UL))) - 1)

USART::USART()
{
  //set baud rate
  UBRR0H = (uint8_t)(UBRR_VALUE>>8);
  UBRR0L = (uint8_t)UBRR_VALUE;

  //set frame format to 8 data bits, no parity, 1 stop bit
  UCSR0C |= (1<<UCSZ01)|(1<<UCSZ00);

  //enable transmission and reception
  UCSR0B |= (1<<RXEN0)|(1<<TXEN0);
}


USART::~USART()
{


}

void USART::put_char(char c)
{
  //transmit data
  UDR0 = c;

  //wait while previous byte is completed
  while(!(UCSR0A&(1<<UDRE0)))
    __asm("nop");
}

char USART::getchar()
{
  unsigned int c;
  while ( (c = ischar()) == NO_CHAR)
    __asm("nop");

  return c;
}

unsigned int USART::ischar()
{
  if ((UCSR0A&(1<<RXC0)) == 0)
    return NO_CHAR;

  return UDR0;
}
