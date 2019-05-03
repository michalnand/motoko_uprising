#ifndef _ARRAY_H_
#define _ARRAY_H_

#include "array_interface.h"

template<class t_type, unsigned int array_size> class Array: public IArray<t_type>
{
  private:
    t_type arr[array_size];

  public:
    Array()
    {

    }

    Array(t_type &init_value)
    {
      for (unsigned int i = 0; i < array_size; i++)
        arr[i] = init_value;
    }

    Array(Array<t_type, array_size> &rhs)
    {
      for (unsigned int i = 0; i < array_size; i++)
        arr[i] = rhs[i];
    }

    virtual ~Array()
    {

    }

    void set(t_type &value)
    {
      for (unsigned int i = 0; i < array_size; i++)
        arr[i] = value;
    }

    void set(const t_type &value)
    {
      for (unsigned int i = 0; i < array_size; i++)
        arr[i] = value;
    }

    Array<t_type, array_size> operator =(Array<t_type, array_size> &rhs)
    {
      for (unsigned int i = 0; i < array_size; i++)
        arr[i] = rhs[i];

      return *this;
    }

    t_type& operator [](unsigned int rhs)
    {
      return arr[rhs];
    }

    bool operator !=(Array<t_type, array_size> &rhs)
    {
      for (unsigned int i = 0; i < array_size; i++)
        if (arr[i] != rhs[i])
          return true;

      return false;
    }

    bool operator ==(Array<t_type, array_size> &rhs)
    {
      for (unsigned int i = 0; i < array_size; i++)
        if (arr[i] != rhs[i])
          return false;

      return true;
    }

    unsigned int size()
    {
      return array_size;
    }
};



#endif
