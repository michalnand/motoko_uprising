#ifndef _ATOMIC_VAR_H_
#define _ATOMIC_VAR_H_

#include <interrupts.h>

template <class T> class AtomicVar
{
    public:
        AtomicVar()
        {

        }

        AtomicVar(AtomicVar &other)
        {
            copy(other);
        }

        AtomicVar(const AtomicVar &other)
        {
            copy(other);
        }

        AtomicVar& operator =(AtomicVar &other)
        {
            copy(other);
            return *this;
        }

        AtomicVar& operator =(const AtomicVar &other)
        {
            copy(other);
            return *this;
        }

        AtomicVar(T &new_value)
        {
            set(new_value);
        }

        AtomicVar(const T &new_value)
        {
            set(new_value);
        }



    public:
        T get()
        {
            T result;
            disable_interrupts();
            result = this->value;
            enable_interrupts();

            return result;
        }

        void set(const T& new_value)
        {
            disable_interrupts();
            this->value = new_value;
            enable_interrupts();
        }

        void set(T& new_value)
        {
            disable_interrupts();
            this->value = new_value;
            enable_interrupts();
        }

    private:
        void copy(T &other)
        {
            set(other);
        }

        void copy(const T &other)
        {
            set(other);
        }

    private:
        T value;
};

#endif
