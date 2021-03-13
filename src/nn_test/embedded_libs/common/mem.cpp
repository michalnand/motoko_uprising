#include "mem.h"

typedef unsigned int size_t;

extern unsigned int __data_start__;
extern unsigned int __ram_size__;
extern unsigned int __heap_start__;

unsigned char *mem_ptr;


unsigned int mem_init()
{
    mem_ptr = (unsigned char*)(&__heap_start__);
    return (unsigned int)mem_ptr;
}

unsigned int mem_get_ptr()
{
    return (unsigned int)mem_ptr;
}

void *malloc(size_t size)
{
    unsigned char *mem_res = mem_ptr;
    mem_ptr+= size;

    return (void*)mem_res;
}

void free(void *p)
{
    (void)p;
}

void * operator new(size_t size) noexcept
{
    return malloc(size);
}

void operator delete(void *p) noexcept
{
    free(p);
}

void operator delete(void *p, size_t size) noexcept
{
    (void)size;
    operator delete(p);
}

void* operator new[](size_t size) noexcept
{
    return operator new(size); // Same as regular new
}

void operator delete[](void *p) noexcept
{
    operator delete(p); // Same as regular delete
}

void operator delete[](void *p, unsigned int size) noexcept
{
    (void)size;
    operator delete(p); // Same as regular delete
}
