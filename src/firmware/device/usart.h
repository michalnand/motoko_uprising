#ifndef _USART_H_
#define _USART_H_

#define NO_CHAR       0xffff

class Usart
{
  public:
    Usart();
    ~Usart();

    void init();

    void put_char(char c);
    char get_char();

    unsigned int ischar();

};


#endif
