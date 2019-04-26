#ifndef _EEPROM_FS_H_
#define _EEPROM_FS_H_

#include <eeprom.h>

class EEPROMFS
{
    public:
        EEPROMFS();
        EEPROMFS(EEPROM *eeprom);
        virtual ~EEPROMFS();

        void init(EEPROM *eeprom);
        void format();


        void create_file(unsigned int id, unsigned int size);
        void write_file(unsigned int id, unsigned int offset, unsigned char *buffer);
        void read_file(unsigned int id, unsigned int offset, unsigned char *buffer);

    private:
        EEPROM *eeprom;
};

#endif
