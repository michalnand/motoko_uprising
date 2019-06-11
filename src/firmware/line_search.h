#ifndef _LINE_SEARCH_H_
#define _LINE_SEARCH_H_


#include <position_control.h>

#define LINE_FOUND_IMMEDIATELY ((int)0)
#define LINE_FOUND             ((int)1)
#define LINE_NO_FOUND          ((int)2)

class LineSearch
{
    public:
        LineSearch();
        virtual ~LineSearch();

        void keep_speed_enable();
        void keep_speed_disable();


        void set_last_line_position(float last_line_position);
        int main();

        float get_speed();

    private:
        int process_move(unsigned int sensor_inactive_time = 0);

    private:
        float last_line_position;
        PositionControll position_control;
        bool keep_speed;
};

#endif
