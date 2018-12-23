#ifndef _PARTICLE_FILTER_MAP_1D_H_
#define _PARTICLE_FILTER_MAP_1D_H_

#include <particle_filter/map_interface.h>
#include <array.h>


template<class T, unsigned int width_> class Map1D: public MapInterface<T>
{
    private:
        Array<T, width_> arr;

    public:
        Map1D()
        {

        }

        virtual ~Map1D()
        {

        }

        void init(T *source)
        {
            arr = source;
        }

        void init(Array<T, width_> &source)
        {
            arr = source;
        }

        T& get(unsigned int position_x, unsigned int position_y = 0)
        {
            (void)position_y;
            return arr[position_x];
        }

        void set(T &value, unsigned int position_x, unsigned int position_y = 0)
        {
            (void)position_y;
            arr[position_x] = value;
        }

        void set(const T &value, unsigned int position_x, unsigned int position_y = 0)
        {
            (void)position_y;
            arr[position_x] = value;
        }

        unsigned int width()
        {
            return width_;
        }

        unsigned int height()
        {
            return 1;
        }
};

#endif
