#ifndef _LAYER_layer_4_H_
#define _LAYER_layer_4_H_


#include <EmbeddedNetConfig.h>


#define layer_4_type "output"

const sEmbeddedNetShape layer_4_input_shape = {2, 2, 8};
const sEmbeddedNetShape layer_4_output_shape = {1, 1, 5};
const sEmbeddedNetShape layer_4_shape = {2, 2, 8};

#define layer_4_weights_size ((unsigned int)160) //array size
#define layer_4_weights_range ((nn_t)1247) //multiply neuron result with range/1024

const nn_weight_t layer_4_weights[]={
-6, -16, 1, -10, 127, 2, 20, -3, 2, 0, 0, 2, -26, -16, -3, -4, 
-24, -20, -1, -2, -9, 5, 6, 8, 25, 0, 10, 2, -7, -10, -7, -2, 
-16, -33, -14, -17, -58, 41, 5, 11, -48, -13, -1, -1, 67, -8, 13, 1, 
10, -8, -5, -13, 3, -25, -23, -8, -42, 18, -1, 7, -30, -17, 3, -6, 
10, -9, -8, -9, -26, -22, -3, 1, 96, -15, 22, 1, -15, 12, 0, 0, 
-13, -28, 2, 0, 20, -13, 15, 0, 0, 0, 0, -2, 65, -29, 8, 0, 
10, -29, 17, 2, -16, -2, -6, 0, -37, 86, -8, -2, -9, 37, -4, 2, 
-3, -14, 0, 0, -6, -25, -21, -27, 2, -27, -7, 0, -26, 82, -3, -10, 
0, 89, 2, 27, -26, -20, -17, -9, -10, -54, -10, 1, -15, -24, -6, 0, 
32, 72, 5, 22, -13, -15, -14, -21, 15, 11, 0, -9, -2, -27, -4, 19, 
};




#define layer_4_bias_size ((unsigned int)5) //array size
#define layer_4_bias_range ((nn_t)287) //multiply neuron result with range/1024

const nn_weight_t layer_4_bias[]={
80, 127, 80, 75, 86, };


#endif
