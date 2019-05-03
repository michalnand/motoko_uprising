#ifndef _ARRAY_INTERFACE_H_
#define _ARRAY_INTERFACE_H_


template<class t_type> class IArray
{
  private:
    t_type dummy;

  public:
    IArray()
    {

    }

    virtual ~IArray()
    {

    }


    virtual t_type & operator [](unsigned int rhs)
    {
      (void)rhs;
      return dummy;
    }

    virtual unsigned int size()
    {
      return 0;
    }
};


#endif
