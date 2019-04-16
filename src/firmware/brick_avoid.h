#ifndef _BRICK_AVOID_H_
#define _BRICK_AVOID_H_

#include <position_control.h>

#define BRICK_AVOID_SIDE_RIGHT      ((int)-1)
#define BRICK_AVOID_SIDE_LEFT       ((int)1)

class BrickAvoid
{
    public:
        BrickAvoid();
        virtual ~BrickAvoid();

        void avoid(int side);

    private:
        void process_move(long int d_left, long int d_right);
        void move_forward(int sensor_distance);


    private:
        PositionControll position_control;
};

#endif
