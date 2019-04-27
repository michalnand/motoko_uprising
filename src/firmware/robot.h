#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <drivers/drivers.h>

#include <line_following/LineNetwork/LineNetwork.h>
#include <line_following/line_predictor.h>

#include <line_following/line_search.h>
#include <brick_avoid.h>

#include <speed_ramp.h>

#include <brick_detection.h>

#include <line_mapping.h>

class Robot
{
    public:
        Robot();
        virtual ~Robot();

        void main();
        void mapping_enable();
        void mapping_disable();
        void fast_run_enable();
        void fast_run_disable();
    private:
        void line_following();
        void allign_to_line(unsigned int cycles);
        void spot_move();



    private:
        PID steering_pid;

        LineNetwork   cnn;
        LinePredictor line_predictor;

        LineSearch line_search;
        BrickAvoid brick_avoid;

        SpeedRamp<float> speed_ramp;

        BrickDetection brick_detection;

        LineMapping line_mapping;

        int mapping_distance_next, fast_run_max_distance;
        bool mapping_enabled, fast_run_enabled;
        bool bridge_active;
};



#endif
