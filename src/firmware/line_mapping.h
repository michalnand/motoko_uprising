#ifndef _LINE_MAPPING_H_
#define _LINE_MAPPING_H_


#include <drivers.h>
#include <array.h>


struct sLineMapItem
{
    int16_t position, position_left, position_right;
    int16_t value;
};

#define LINE_BUFFER_SIZE    ((unsigned int)(64/sizeof(sLineMapItem)))
#define LINE_MAP_SIZE       ((unsigned int)LINE_BUFFER_SIZE*40)



class LineMapping
{
    public:
        LineMapping();
        virtual ~LineMapping();

        void init();

        int add(int position_left, int position_right, int value);
        int add(sLineMapItem item);

        void load();
        void print();
        void print_json();

        int get_closest(int position);

    private:
        unsigned int item_ptr, address;
        Array<sLineMapItem, LINE_BUFFER_SIZE> buffer;

        Array<sLineMapItem, LINE_MAP_SIZE> map;
};

#endif
