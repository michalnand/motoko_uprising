#include "mem.h"
#include <stdlib.h>


void * operator new(unsigned int size)
{
    return malloc(size);
}

void operator delete(void *p)
{
  free(p);
}

void* operator new[](unsigned int size)
{
    return operator new(size);
}

void operator delete[](void *p)
{
    operator delete(p);
}
