#ifndef _LINE_SEARCH_H_
#define _LINE_SEARCH_H_

class LineSearch
{
    public:
        LineSearch();
        virtual ~LineSearch();

        void set_initial_turn(float initial_turn);
        void main();

    private:
        unsigned int state;

        float initial_turn;
        float turn_speed;
};

#endif
