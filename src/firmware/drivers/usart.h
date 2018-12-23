#ifndef _USART_H_
#define _USART_H_

#define NO_CHAR       ((unsigned int)0xffff)

class Usart
{
  public:
    Usart();
    virtual ~Usart();

    void init(unsigned int baudrate = 115200);

    void put_char(char c);
    char get_char();

    unsigned int ischar();
};


#endif
