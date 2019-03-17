#ifndef _LINE_PREDICTOR_H_
#define _LINE_PREDICTOR_H_

#include <line_sensor.h>
#include <NeuralNetwork.h>

#define NETWORK_INPUT_SIZE  (LINE_SENSOR_COUNT*LINE_SENSOR_COUNT)

class LinePredictor
{
    private:
        int8_t network_input[NETWORK_INPUT_SIZE];

        NeuralNetwork *nn;

        unsigned int result;
        long int distance;

    public:
        LinePredictor();
        LinePredictor(NeuralNetwork &nn);
        virtual ~LinePredictor();

        void init(NeuralNetwork &nn);

        unsigned int process(Array<int, LINE_SENSOR_COUNT> &adc_result, long int distance_now, int sampling_distance_step = 10);
        void print();

        unsigned int get_result()
        {
            return result;
        }

        int8_t get_input(unsigned int idx)
        {
            return network_input[idx];
        }
};

#endif
