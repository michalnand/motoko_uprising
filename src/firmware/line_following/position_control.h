#ifndef _POSITION_CONTROL_H_
#define _POSITION_CONTROL_H_

#include <drivers.h>
#include <integrator.h>


#define POSITION_CONTROLL_DEFAULT_DISTANCE_LIMIT    ((int)5)

class PositionControll
{

    public:
        PositionControll();
        virtual ~PositionControll();

        void init(float max_speed);

    public:
        void set_position(long int d_left, long int d_right, int distance_limit = POSITION_CONTROLL_DEFAULT_DISTANCE_LIMIT);
        bool process();

        bool is_done(int limit = POSITION_CONTROLL_DEFAULT_DISTANCE_LIMIT);
        bool is_done_left(int limit = POSITION_CONTROLL_DEFAULT_DISTANCE_LIMIT);
        bool is_done_right(int limit = POSITION_CONTROLL_DEFAULT_DISTANCE_LIMIT);

        void stop();

    private:
        float max_speed;
        long int left_end;
        long int right_end;

        int distance_limit;

    private:
        Integrator<float> integrator_left_forward, integrator_left_backward;
        Integrator<float> integrator_right_forward, integrator_right_backward;
};

#endif
