#include <delay.h>

void delay_loops(unsigned int loops)
{
    while (loops--)
        __asm("nop");
}
