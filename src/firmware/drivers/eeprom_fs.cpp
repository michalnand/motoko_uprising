#include <eeprom_fs.h>



EEPROMFS::EEPROMFS()
{
    this->eeprom = nullptr;
}

EEPROMFS::EEPROMFS(EEPROM *eeprom)
{
    init(eeprom);
}

EEPROMFS::~EEPROMFS()
{

}

void EEPROMFS::init(EEPROM *eeprom)
{
    this->eeprom = eeprom;
}

void EEPROMFS::format()
{

}

void EEPROMFS::create_file(unsigned int id, unsigned int size)
{

}

void EEPROMFS::write_file(unsigned int id, unsigned int offset, unsigned char *buffer)
{

}

void EEPROMFS::read_file(unsigned int id, unsigned int offset, unsigned char *buffer)
{

}
