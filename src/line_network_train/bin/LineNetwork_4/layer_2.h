#ifndef _LAYER_layer_2_H_
#define _LAYER_layer_2_H_


#include <NetworkConfig.h>


#define layer_2_type "dense convolution"

const sLayerGeometry layer_2_input_geometry = {8, 8, 5};
const sLayerGeometry layer_2_output_geometry = {8, 8, 9};
const sLayerGeometry layer_2_kernel_geometry = {3, 3, 4};

#define layer_2_weights_size ((unsigned int)180) //array size
#define layer_2_weights_range ((nn_t)2356) //multiply neuron result with range/1024

const nn_weight_t layer_2_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
23, 0, -17, 38, -16, -10, 1, 6, -19, 11, -26, -13, -17, 7, -8, -6, 
17, -15, -6, 28, -7, -14, -4, -10, -14, 6, -2, 6, 2, 0, -6, 4, 
1, -4, 0, 0, 3, -3, 4, 10, 3, 18, -100, -28, -9, -37, -17, 7, 
5, -7, 6, 9, -1, -2, -35, -27, 4, 14, 1, 4, 8, -10, -39, -9, 
10, 4, 8, 0, 5, 6, 5, -5, -6, -12, 13, -12, 0, 8, -6, 0, 
7, -17, -3, 11, 13, 24, 5, 7, 29, 33, -127, -12, 3, -12, -123, 0, 
17, -18, 27, 1, -30, -3, 5, -37, 4, -21, -13, 8, -8, -9, 5, 15, 
-14, 11, -5, -1, -6, 0, -1, -3, 1, -11, -6, -2, -10, -8, 0, 0, 
7, -1, 1, 7, 23, 10, -7, 27, 15, -32, 2, 0, -16, -15, 3, -45, 
-12, 0, 4, 9, -57, 7, -8, 16, 26, 14, 28, 14, -8, -13, 5, 5, 
-14, 2, 4, -6, };




#define layer_2_bias_size ((unsigned int)4) //array size
#define layer_2_bias_range ((nn_t)417) //multiply neuron result with range/1024

const nn_weight_t layer_2_bias[]={
3, -36, -92, -127, };


#endif
