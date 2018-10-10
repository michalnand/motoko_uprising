#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 6};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 6};

#define layer_0_weights_size ((unsigned int)54) //array size
#define layer_0_weights_range ((nn_t)3817) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
6, 54, 22, -12, -23, 22, 13, -14, 15, 19, -3, 35, 11, -3, 39, -42, 
-49, 19, -36, -127, 45, 0, -19, 55, 38, 0, 37, 49, 2, 19, 34, -7, 
-15, 49, 10, -58, 51, -44, };




#define layer_0_bias_size ((unsigned int)6) //array size
#define layer_0_bias_range ((nn_t)1077) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
0, -58, -116, -61, -116, -127, };


#endif
