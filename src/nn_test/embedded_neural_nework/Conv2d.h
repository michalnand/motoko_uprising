#ifndef _Conv2d_H_
#define _Conv2d_H_

#include <stdint.h>

#include "dot_microkernel.h"

template<   unsigned int height, unsigned int width, 
            unsigned int input_channels, unsigned int output_channels, 
            unsigned int kernel_size, unsigned int stride,
            class IO_t, class WEIGHT_t, class ACC_t>
void Conv2d(IO_t *output_buffer, IO_t *input_buffer, const WEIGHT_t *kernel, const WEIGHT_t *bias, int32_t scale)
{
    unsigned int k_half         = (kernel_size - 1)/2;
    unsigned int input_size_y   = height    - 2*k_half;
    unsigned int input_size_x   = width     - 2*k_half;
    
    for (unsigned int filter = 0; filter < output_channels; filter++)
        for (unsigned int y = 0; y < input_size_y-stride/2; y+= stride)
            for (unsigned int x = 0; x < input_size_x-stride/2; x+= stride)
            {
                unsigned int kernel_idx = filter*kernel_size*kernel_size*input_channels;

                const WEIGHT_t *kernel_ =  &(kernel[kernel_idx]);

                ACC_t result = 0;

                for (unsigned int ky = 0; ky < kernel_size; ky++)
                { 
                    unsigned int input_idx  = ((y + ky)*width + x)*input_channels;     

                    IO_t *input_buffer_ = &(input_buffer[input_idx]);              
                    
                    result+= dot_microkernel<kernel_size*input_channels, IO_t, WEIGHT_t, ACC_t>(input_buffer_, kernel_);
 
                    kernel_+= kernel_size*input_channels;
                }
                
                result = ((result + bias[kernel_idx])*scale)/(128*128);
               
                if (result > 127) 
                    result = 127;
                 
                if (result < -127)
                    result = -127;
 
                unsigned int x_output = x/stride + k_half - stride/2;
                unsigned int y_output = y/stride + k_half - stride/2;

                unsigned int output_idx     = ((y_output)*(width/stride) + x_output)*output_channels + filter;
                output_buffer[output_idx]   = result; 
            }
}




#endif