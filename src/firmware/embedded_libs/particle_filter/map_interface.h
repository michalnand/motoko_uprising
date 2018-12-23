#ifndef _MAP_INTERFACE_H_
#define _MAP_INTERFACE_H_

template<class T> class MapInterface
{
    private:
        T dummy;

    public:
        MapInterface()
        {

        }

        virtual ~MapInterface()
        {

        }

        virtual void init(T *source)
        {
            dummy = *source;
        }


        virtual T& get(unsigned int position_x, unsigned int position_y = 0)
        {
            (void)position_x;
            (void)position_y;
            return dummy;
        }

        virtual void set(T &value, unsigned int position_x, unsigned int position_y = 0)
        {
            (void)value;
            (void)position_x;
            (void)position_y;
        }

        virtual void set(const T &value, unsigned int position_x, unsigned int position_y = 0)
        {
            (void)value;
            (void)position_x;
            (void)position_y;
        }

        virtual unsigned int width()
        {
            return 0;
        }

        virtual unsigned int height()
        {
            return 0;
        }
};


#endif
