#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <drivers/drivers.h>

#include <line_following/LineNetwork/LineNetwork.h>
#include <line_following/line_predictor.h>

#include <line_following/line_search.h>

#include <speed_ramp.h>

class Robot
{
    public:
        Robot();
        virtual ~Robot();

        void main();

    private:
        void line_following();

    private:
        PID steering_pid;

        LineNetwork   cnn;
        LinePredictor line_predictor;

        LineSearch line_search;

        SpeedRamp<float> speed_ramp;
};



#endif
