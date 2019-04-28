#ifndef _LINE_MAPPING_H_
#define _LINE_MAPPING_H_


#include <drivers.h>
#include <array.h>


struct sLineMapItem
{
    unsigned char position;
    unsigned char value;
};

#define LINE_BUFFER_SIZE    ((unsigned int)(64/sizeof(sLineMapItem)))
#define LINE_MAP_SIZE       ((unsigned int)LINE_BUFFER_SIZE*100)



class LineMapping
{
    public:
        LineMapping();
        virtual ~LineMapping();

        void init();

        int add(unsigned char position, unsigned char value);
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
