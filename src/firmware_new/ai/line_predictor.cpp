#include "line_predictor.h"

#include <drivers.h>

LinePredictor::LinePredictor()
{
    for (unsigned int i = 0; i < NETWORK_INPUT_SIZE; i++)
      network_input[i] = 0;

    result = 0;

    distance = -1000000000;

    this->nn = nullptr;
}

LinePredictor::LinePredictor(EmbeddedNet &nn)
{
    for (unsigned int i = 0; i < NETWORK_INPUT_SIZE; i++)
        network_input[i] = 0;

    result = 0;

    distance = -1000000000;

    this->nn = &nn;
}

LinePredictor::~LinePredictor()
{

}

void LinePredictor::init(EmbeddedNet &nn)
{
    for (unsigned int i = 0; i < NETWORK_INPUT_SIZE; i++)
        network_input[i] = 0;

    result = 0;

    distance = -1000000000;

    this->nn = &nn;
}


unsigned int LinePredictor::process(Array<int, LINE_SENSOR_COUNT> &adc_result, long int distance_now, int sampling_distance_step)
{
    long int dif = distance_now - distance;

    if (dif < 0)
        dif = -dif;

    if (dif >= sampling_distance_step)
    {
        distance = distance_now;

        //shift old value
        for (unsigned int j = (LINE_SENSOR_COUNT-1); j != 0; j--)
            for (unsigned int i = 0; i < LINE_SENSOR_COUNT; i++)
                network_input[j*LINE_SENSOR_COUNT + i] = network_input[(j-1)*LINE_SENSOR_COUNT + i];

        //add normalised new values
        int max = -1000000; 
        int min = -max;
        for (unsigned int i = 0; i < LINE_SENSOR_COUNT; i++)
        {
            if (adc_result[i] > max)
                max = adc_result[i];
            if (adc_result[i] < min)
                min = adc_result[i];
        }

        float k = 0.0, q = 0.0;

        if (max > min)
        {
            k = 255.0/(max - min);
            q = 255.0 - k*max;
        }

        //add
        for (unsigned int i = 0; i < LINE_SENSOR_COUNT; i++)
            network_input[i] = k*adc_result[i] + q;

        nn->set_input(network_input);
        nn->forward();

        result = nn->class_result();
    }

    return 0;
}

void LinePredictor::print()
{
    terminal << "\n\n";
    terminal << " class result " << result << "\n\n";

    unsigned int ptr = 0;
    for (unsigned int j = 0; j < LINE_SENSOR_COUNT; j++)
    {
        for (unsigned int i = 0; i < LINE_SENSOR_COUNT; i++)
        {
            terminal << network_input[ptr] << " ";
            ptr++;
        }

        terminal << "\n";
    }

    terminal << "\n\n";
}
