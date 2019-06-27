#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <EmbeddedNetConfig.h>


#define layer_0_type "convolution"

const sEmbeddedNetShape layer_0_input_shape = {8, 8, 1};
const sEmbeddedNetShape layer_0_output_shape = {8, 8, 8};
const sEmbeddedNetShape layer_0_shape = {3, 3, 8};

#define layer_0_weights_size ((unsigned int)72) //array size
#define layer_0_weights_range ((nn_t)678) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
-112, -34, 124, -11, -10, 17, 44, 10, -26, 110, -21, -104, 4, -2, -6, -25, 
3, 41, 15, -30, -17, -30, -31, -12, -14, -11, -31, -59, 127, 13, 16, 28, 
-10, 12, -39, -14, 86, -67, 14, 32, -20, 0, 24, -19, -46, 77, 25, -50, 
24, -26, 24, -3, 2, 27, -36, 6, 0, -28, 23, -16, -23, -5, -16, 29, 
-15, -51, 31, -13, -15, -31, 8, 55, };




#define layer_0_bias_size ((unsigned int)8) //array size
#define layer_0_bias_range ((nn_t)237) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
127, 105, 0, -47, -43, -18, -3, -24, };


#endif
