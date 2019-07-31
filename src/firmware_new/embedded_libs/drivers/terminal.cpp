#include <terminal.h>
#include <stdarg.h>


Terminal::Terminal()
          :Usart()
{

}

Terminal::~Terminal()
{

}

void Terminal::puts(const char *s)
{
  while (*s)
    put_char(*s++);
}

void Terminal::puts(char *s)
{
  while (*s)
    put_char(*s++);
}

void Terminal::puti(int32_t n)
{
  char flag = 0, s[12];
	unsigned char ptr;

	if (n < 0)
 	{
  		n = -n;
		flag = 1;
	}

	s[11] = '\0';
	ptr = 10;

	do
	{
    	s[ptr] = '0' + (n%10);
    	n/= 10;
    	ptr--;
	}
    while (n != 0);

	if (flag)
		s[ptr] = '-';
	else
		ptr++;

	puts(s + ptr);
}

void Terminal::putui(uint32_t n)
{
	char s[12];
	unsigned char ptr;

	s[11] = '\0';
	ptr = 10;

	do
	{
    	s[ptr] = '0' + (n%10);
    	n/= 10;
    	ptr--;
	}
    while (n != 0);

	ptr++;
	puts(s + ptr);
}

void Terminal::putx(uint32_t n)
{
	char s[12];
	char tmp;
	unsigned char ptr;

	s[11] = '\0';
	ptr = 10;

	do
	{
    	tmp=n&0x0F;		/*modulo 16*/
    	if (tmp < 10)
     		s[ptr] = '0' + tmp;
    	else
     		s[ptr] = 'a' + tmp - 10;

    	n>>= 4;		/*div 16*/
    	ptr--;
   	}
    while (n != 0);

	ptr++;
 	puts(s + ptr);
}


void Terminal::putf(float n, unsigned char decimal_places)
{
  unsigned int i, power = 1;

  char sgn = ' ';
  if (n < 0)
  {
    sgn = '-';
    n = -n;
  }

  for (i = 0; i < decimal_places; i++)
    power*= 10;

  int32_t int_part = (int32_t)n;
  int32_t frac_part = (int32_t)((n - int_part)*power);
  if (frac_part < 0)
    frac_part = -frac_part;

  put_char(sgn);
  puti(int_part);
  put_char('.');

  int tmp = 1;
  unsigned char cnt = 0;

  do
  {
    tmp*= 10;
    cnt++;
  }
  while (tmp < frac_part);


  cnt = decimal_places - cnt;

  for (i = 0; i < cnt; i++)
    put_char('0');
  puti(frac_part);
}



void Terminal::printf(const char *str, ...)
{
	va_list args;
	va_start(args, str);

  unsigned int s_ptr = 0;

	while (str[s_ptr] != '\0')			/*scan string*/
 	{
		if (str[s_ptr] != '%')
		{
			put_char(str[s_ptr]);			/*if no % print char*/
			s_ptr++;
   	}
		else
		{		/*switch %? argumet*/
	    	s_ptr++;

	    	switch (str[s_ptr])
	    	{
	     		case 'i': puti(va_arg(args, int)); break;
	     		case 'u': putui(va_arg(args, int)); break;
	     		case 'x': putx(va_arg(args, int)); break;
	     		case 'c': put_char(va_arg(args, int)); break;
	     		case 's': puts((char*)va_arg(args, int)); break;
	     		case '%': put_char('%'); break;

          case 'f': putf(va_arg(args, double), 3); break;
	    	}

			  s_ptr++;
	   }
	}

  va_end(args);
}
