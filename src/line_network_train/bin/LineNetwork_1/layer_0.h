#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 6};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 6};

#define layer_0_weights_size ((unsigned int)54) //array size
#define layer_0_weights_range ((nn_t)2184) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
55, -4, 3, -25, 5, 0, 0, 27, 33, -7, 30, 74, 4, -62, 58, 65, 
-25, -18, 62, 1, 1, 78, -14, -41, 89, 33, -127, 51, 29, -34, 7, 63, 
-14, 38, 72, -4, 4, 50, };




#define layer_0_bias_size ((unsigned int)6) //array size
#define layer_0_bias_range ((nn_t)1034) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
0, -24, -81, -116, -127, -63, };


#endif
