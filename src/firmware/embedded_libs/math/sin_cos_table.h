#ifndef _SIN_COS_TABLE_H_
#define _SIN_COS_TABLE_H_


class SinCosTable
{
    private:
        static unsigned char sin_table[256];
    public:
        SinCosTable();
        virtual ~SinCosTable();

        unsigned char sin(unsigned int x);
        unsigned char cos(unsigned int x);
};

#endif
