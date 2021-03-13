#ifndef _MODEL_INTERFACE_H_
#define _MODEL_INTERFACE_H_

#include <stdint.h>

#include <Linear.h>
#include <Conv1d.h>
#include <Conv2d.h>

#include <ReLU.h>

#include <GlobalAveragePooling.h>


class ModelInterface
{
    public:
        ModelInterface();
        virtual ~ModelInterface();

        virtual void forward();

    public:
        int8_t* input_buffer();
        int8_t* output_buffer();

    public:
        unsigned int input_channels, input_height, input_width;
        unsigned int output_channels, output_height, output_width;
        unsigned int total_macs;

    protected:
        void init_buffer(unsigned int size);
        void swap_buffer();

    protected:
        bool swapped;
        int8_t *buffer_a, *buffer_b;
};


#endif

