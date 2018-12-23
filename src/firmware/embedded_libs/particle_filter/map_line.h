#ifndef _PARTICLE_FILTER_MAP_LINE_H_
#define _PARTICLE_FILTER_MAP_LINE_H_

#include <particle_filter/map_interface.h>
#include <array.h>


template<class T, unsigned int width_> class MapLine: public MapInterface<T>
{
    private:
        unsigned int current_ptr;

        Array<unsigned int, width_> positions;

        Array<T, width_> values;

    public:
        MapLine()
        {
            current_ptr = 0;
        }

        virtual ~MapLine()
        {

        }

        void init(unsigned int *positions, T *values)
        {
            this->positions   = positions;
            this->values      = values;
            current_ptr = width_;
        }

        void init(Array<unsigned int, width_> &positions, Array<T, width_> &values)
        {
            this->positions   = positions;
            this->values      = values;
            current_ptr = width_;
        }

        T& get(unsigned int position_x, unsigned int position_y = 0)
        {
            (void)position_y;

            unsigned int idx = find_nearest(position_x);
            return values[idx];
        }

        void set(T &value, unsigned int position_x, unsigned int position_y = 0)
        {
            (void)position_y;

            if (current_ptr < width_)
            {
                positions[current_ptr]  = position_x;
                values[current_ptr]     = value;
                current_ptr++;
            }
            else
            {
                unsigned int idx    = find_nearest(position_x);
                values[idx]         = value;
            }
        }

        void set(const T &value, unsigned int position_x, unsigned int position_y = 0)
        {
            (void)position_y;

            if (current_ptr < width_)
            {
                positions[current_ptr]  = position_x;
                values[current_ptr]     = value;
                current_ptr++;
            }
            else
            {
                unsigned int idx    = find_nearest(position_x);
                values[idx]         = value;
            }
        }

        unsigned int width()
        {
            return width_;
        }

        unsigned int height()
        {
            return 1;
        }

        unsigned int stored_items_count()
        {
            return current_ptr;
        }

    private:
        unsigned int find_nearest(unsigned int position)
        {
            unsigned int left   = 0;
            unsigned int right  = current_ptr-1;

            unsigned int center = 0;

            while (left < right)
            {
                center = (left + right)/2;

                if (position > positions[center])
                    left  = center;
                else
                    right = center;
            }

            return center;
        }
};

#endif
