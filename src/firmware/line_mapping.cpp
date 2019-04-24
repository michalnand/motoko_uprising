#include <line_mapping.h>

LineMapping::LineMapping()
{
    this->item_ptr  = 0;
    this->address   = 0;
}

LineMapping::~LineMapping()
{

}

void LineMapping::init()
{
    sLineMapItem init_item;

    init_item.position  = 0;
    init_item.value     = 0;

    this->buffer.fill(init_item);

    this->item_ptr  = 0;
    this->address   = 0;

    //load();
}



int LineMapping::add(int position, int value)
{
    sLineMapItem item;
    item.position  = position;
    item.value     = value;

    return add(item);
}


int LineMapping::add(sLineMapItem item)
{
    buffer[item_ptr%buffer.size()] = item;

    this->item_ptr++;

    if (this->item_ptr > map.size())
        return -1;
        
    if ((this->item_ptr%buffer.size()) == 0)
    {
        unsigned char *ch_ptr = (unsigned char*)(&(this->buffer[0]));

        eeprom.write(this->address, ch_ptr);

        this->address+= buffer.size()*sizeof(sLineMapItem);
    }

    return 0;
}

void LineMapping::load()
{
    unsigned int address = 0;

    unsigned char *ch_ptr = (unsigned char*)(&(this->buffer[0]));

    for (unsigned int i = 0; i < map.size(); i++)
    {
        if ((i%buffer.size()) == 0)
        {
            eeprom.read(address, ch_ptr);
            address+= buffer.size()*sizeof(sLineMapItem);
        }

        map[i] = buffer[i%buffer.size()];
    }
}

void LineMapping::print()
{
    terminal << "sizeof(sLineMapItem) " << sizeof(sLineMapItem) << "\n";
    terminal << "LINE_BUFFER_SIZE " << LINE_BUFFER_SIZE << "\n";
    terminal << "LINE_MAP_SIZE " << LINE_MAP_SIZE << "\n";

    for (unsigned int i = 0; i < map.size(); i++)
        terminal << i << " " << map[i].position << " " << map[i].value << "\n";

    terminal<< "\n\n";
}
