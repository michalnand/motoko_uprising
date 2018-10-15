#ifndef _LAYER_layer_3_H_
#define _LAYER_layer_3_H_


#include <NetworkConfig.h>


#define layer_3_type "dense convolution"

const sLayerGeometry layer_3_input_geometry = {4, 4, 4};
const sLayerGeometry layer_3_output_geometry = {4, 4, 8};
const sLayerGeometry layer_3_kernel_geometry = {3, 3, 4};

#define layer_3_weights_size ((unsigned int)144) //array size
#define layer_3_weights_range ((nn_t)458) //multiply neuron result with range/1024

const nn_weight_t layer_3_weights[]={
39, -40, 46, -22, -46, 3, 4, 28, 5, 37, 19, -8, 29, -10, 1, 5, 
10, -31, 50, 33, -39, -21, 40, -100, 34, 48, -6, 26, -19, 61, -2, -24, 
1, -29, 42, -32, -46, 5, -52, 8, -16, -17, 5, -41, 24, -51, 8, -61, 
-45, -5, 13, 31, 48, -35, 60, 32, -55, 83, 34, -59, 91, 10, 5, -127, 
43, -50, -68, 34, 16, -72, 13, 14, -44, 105, -71, -12, 79, -62, 23, 13, 
3, -4, -43, -11, 15, -4, -36, 3, 61, -25, 11, 46, -43, -16, 16, -22, 
61, 6, -27, -6, 69, -76, -24, 27, 12, 21, -3, 49, 10, 27, -14, 8, 
7, 20, -1, -24, 7, -29, 10, -22, 28, 13, 11, 7, -1, -36, -17, -19, 
-19, -20, -13, -21, -35, 4, -2, 23, -7, -23, -13, -14, -10, -25, -30, 4, 
};




#define layer_3_bias_size ((unsigned int)4) //array size
#define layer_3_bias_range ((nn_t)134) //multiply neuron result with range/1024

const nn_weight_t layer_3_bias[]={
99, 127, 40, 0, };


#endif
