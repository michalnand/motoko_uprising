#ifndef _RELU_H_
#define _RELU_H_

#include <stdint.h>

void ReLU(  int8_t *output_buffer, 
            int8_t *input_buffer, 
            unsigned int size);

#endif