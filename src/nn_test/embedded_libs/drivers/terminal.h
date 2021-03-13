#ifndef _TERMINAL_H_
#define _TERMINAL_H_

#include <usart.h>
#include <stdint.h>

class Terminal: public Usart
{
  public:
    Terminal();
    virtual ~Terminal();

    void puts(const char *s);
    void puts(char *s);
    void puti(int32_t n);
    void putui(uint32_t n);
    void putx(uint32_t n);
    void putf(float n, unsigned char decimal_places);
    void printf(const char *str, ...);

    Terminal& operator<< (char op)
    {
      put_char(op);
      return *this;
    }

    Terminal& operator<< (const char *op)
    {
      puts(op);
      return *this;
    }

    Terminal& operator<< (char *op)
    {
      puts(op);
      return *this;
    }

    Terminal& operator<< (int op)
    {
      puti(op);
      return *this;
    }

    Terminal& operator<< (unsigned int op)
    {
      putui(op);
      return *this;
    }

    Terminal& operator<< (int32_t op)
    {
      puti(op);
      return *this;
    }

    Terminal& operator<< (uint32_t op)
    {
      putui(op);
      return *this;
    }

    Terminal& operator<< (float op)
    {
      putf(op, 3);
      return *this;
    }


    Terminal& operator<< (bool op)
    {
      if (op == true)
        puts("true");
      else
        puts("false");
      return *this;
    }
};

#endif
