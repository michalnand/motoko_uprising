#ifndef _SIN_COS_TABLE_H_
#define _SIN_COS_TABLE_H_

#define COS_TABLE_SIZE          ((unsigned int)256)

class SinCosTable
{
    private:
        static unsigned char sin_table[COS_TABLE_SIZE];

    public:
        SinCosTable();
        virtual ~SinCosTable();

        unsigned char sin(unsigned int x);
        unsigned char cos(unsigned int x);
        unsigned int size();
};

#endif
