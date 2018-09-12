#ifndef _MEM_H_
#define _MEM_H_

void * operator new(unsigned int size) noexcept;
void operator delete(void * p) noexcept;

void* operator new[](unsigned int size) noexcept;
void operator delete[](void *p) noexcept;
void operator delete(void *p, unsigned int size) noexcept;

#endif
