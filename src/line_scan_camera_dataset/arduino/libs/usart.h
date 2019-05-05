#ifndef _USART_H_
#define _USART_H_


#define NO_CHAR       0xffff

class USART
{
  public:
    USART();
    ~USART();

    void put_char(char c);
    char getchar();

    unsigned int ischar();
};


#endif
