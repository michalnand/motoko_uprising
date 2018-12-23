#ifndef _PARTICLE_FILTER_MAP_2D_H_
#define _PARTICLE_FILTER_MAP_2D_H_

#include <particle_filter/map_interface.h>
#include <array.h>


template<class T, unsigned int width_, unsigned int height_> class Map2D: public MapInterface<T>
{
    private:
        Array<Array<T, width_>, height_> mat;

    public:
        Map2D()
        {

        }

        virtual ~Map2D()
        {

        }

        void init(T *source)
        {
            unsigned int ptr = 0;

            for (unsigned int j = 0; j < height(); j++)
            {
                for (unsigned int i = 0; i < width(); i++)
                {
                    mat[j][i] = source[ptr];
                    ptr++;
                }
            }
        }

        void init(Array<Array<T, width_>, height_>  &source)
        {
            mat = source;
        }

        T& get(unsigned int position_x, unsigned int position_y)
        {
            return mat[position_y][position_x];
        }

        void set(T &value, unsigned int position_x, unsigned int position_y)
        {
            mat[position_y][position_x] = value;
        }

        void set(const T &value, unsigned int position_x, unsigned int position_y)
        {
            mat[position_y][position_x] = value;
        }

        unsigned int width()
        {
            return width_;
        }

        unsigned int height()
        {
            return height_;
        }
};

#endif
