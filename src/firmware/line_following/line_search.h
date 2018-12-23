#ifndef _LINE_SEARCH_H_
#define _LINE_SEARCH_H_

#include <integrator.h>
#include <ruler.h>

class LineSearch
{
    public:
        LineSearch();
        virtual ~LineSearch();

        void set_initial_conditions(float initial_line_position, float speed);
        void main();


        float get_speed();

    private:
        long int line_search_distance;

        unsigned int state, motion_state;
        float initial_line_position;
        float turn_speed;

        Integrator<float> integrator;

        Ruler<long int> ruler;

    private:
        void set_motors(bool right, bool forward);
        void motors_brake(bool forward);


};

#endif
