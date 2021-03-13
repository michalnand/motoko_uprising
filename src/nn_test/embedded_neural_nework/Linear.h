#ifndef _LINEAR_H_
#define _LINEAR_H_

#include <stdint.h>
#include <dot_microkernel.h>


template<   unsigned int in_features, unsigned int out_features, 
            class IO_t, class WEIGHT_t, class ACC_t >
void Linear(IO_t *output_buffer, IO_t *input_buffer, const WEIGHT_t *weights, const WEIGHT_t *bias, int32_t scale)
{ 
    for (unsigned int j = 0; j < out_features; j++)
    {
        ACC_t result = dot_microkernel<in_features, IO_t, WEIGHT_t, ACC_t>(input_buffer, weights + j*in_features);

        result = ((result + bias[j])*scale)/(128*128);

        if (result > 127)
            result = 127;

        if (result < -127)
            result = -127;

        output_buffer[j] = result;
    }
}


#endif