#ifndef _LINE_SEARCH_H_
#define _LINE_SEARCH_H_


#include <line_following/position_control.h>

class LineSearch
{
    public:
        LineSearch();
        virtual ~LineSearch();

        void set_last_line_position(float last_line_position);
        void main();

        float get_speed();
    private:
        int process_move();

    private:
        float last_line_position;
        PositionControll position_control;
};

#endif
