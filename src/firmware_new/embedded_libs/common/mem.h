#ifndef _MEM_H_
#define _MEM_H_



unsigned int mem_init();
unsigned int mem_get_ptr();

void * operator new(unsigned int size) noexcept;
void operator delete(void * p) noexcept;

void* operator new[](unsigned int size) noexcept;
void operator delete[](void *p) noexcept;
void operator delete(void *p, unsigned int size) noexcept;


#endif
