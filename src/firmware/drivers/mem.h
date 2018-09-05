#ifndef _MEM_H_
#define _MEM_H_


/*
class Mem
{
  private:
    unsigned char *mem_ptr;

  public:
    Mem(unsigned int external_ram_adr = 0);
    ~Mem();

    void *malloc(unsigned int size);
    void free(void *p);

  private:
    void clean();
};
*/

void * operator new(unsigned int size) noexcept;
void operator delete(void * p) noexcept;

void* operator new[](unsigned int size) noexcept;
void operator delete[](void *p) noexcept;
void operator delete(void *p, unsigned int size) noexcept;


#endif
