#include "mem.h"
#include <terminal.h>

extern unsigned int __data_start__;
extern unsigned int __ram_size__;
extern unsigned int __heap_start__;


Mem mem;

Mem::Mem(unsigned int external_ram_adr)
{
  (void)external_ram_adr;
  mem_ptr = (unsigned char*)(&__heap_start__);
}

Mem::~Mem()
{

}

void Mem::print_info()
{
  /*
  terminal.printf("ram start 0x%x \n", &__data_start__);
  terminal.printf("mem size %u bytes\n", &__ram_size__);
  terminal.printf("heap start 0x%x, current 0x%x \n", &__heap_start__, mem_ptr);

  terminal.printf("\n");
  */
}

void *Mem::malloc(unsigned int size)
{
  unsigned char *mem_res = mem_ptr;
  mem_ptr+= size;
  return (void*)mem_res;
}

void Mem::free(void *p)
{ 
    (void)p;
}

void Mem::clean()
{
  mem_ptr = (unsigned char*)(&__heap_start__);
}

void * operator new(unsigned int size) noexcept
{
    return mem.malloc(size);
}

void operator delete(void *p) noexcept
{
  mem.free(p);
}

void* operator new[](unsigned int size) noexcept
{
    return operator new(size); // Same as regular new
}

void operator delete[](void *p) noexcept
{
    operator delete(p); // Same as regular delete
}
