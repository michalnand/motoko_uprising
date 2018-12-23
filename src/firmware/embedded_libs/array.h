#ifndef _ARRAY_H_
#define _ARRAY_H_

template<class T, unsigned int size_> class Array
{
    protected:
        T v[size_];

    public:
        Array()
        {

        }

        Array(Array<T, size_> &other)
        {
            copy(other);
        }

        Array(const Array<T, size_> &other)
        {
            copy(other);
        }

        Array<T, size_>& operator=(Array<T, size_> &other)
        {
            copy(other);
            return *this;
        }

        Array<T, size_>& operator=(const Array<T, size_> &other)
        {
            copy(other);
            return *this;
        }

        Array<T, size_>& operator=(T *other)
        {
            copy(other);
            return *this;
        }

        Array<T, size_>& operator=(const T *other)
        {
            copy(other);
            return *this;
        }

        virtual ~Array()
        {

        }

    public:
        unsigned int size()
        {
            return size_;
        }


        void fill(T &value)
        {
            for (unsigned int i = 0; i < size_; i++)
                v[i] = value;
        }

        void fill(const T &value)
        {
            for (unsigned int i = 0; i < size_; i++)
                v[i] = value;
        }

        T& operator [](unsigned int idx)
        {
            return v[idx];
        }

        unsigned int begin()
        {
            return 0;
        }

        unsigned int end()
        {
            return size_;
        }

    private:

        void copy(Array<T, size_> &other)
        {
            for (unsigned int i = 0; i < size_; i++)
                v[i] = other.v[i];
        }

        void copy(const Array<T, size_> &other)
        {
            for (unsigned int i = 0; i < size_; i++)
                v[i] = other.v[i];
        }

        void copy(T *src)
        {
            for (unsigned int i = 0; i < size_; i++)
                v[i] = src[i];
        }

        void copy(const T *src)
        {
            for (unsigned int i = 0; i < size_; i++)
                v[i] = src[i];
        }
};


#endif
