#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 4};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 4};

#define layer_0_weights_size ((unsigned int)36) //array size
#define layer_0_weights_range ((nn_t)505) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
-119, 47, 88, -17, 52, 73, -118, -32, 26, -6, -60, 15, -36, -39, 46, 48, 
-17, 73, 83, -25, 27, 62, 38, 14, 28, -22, 28, -127, -34, 99, -39, 3, 
109, -45, -3, 76, };




#define layer_0_bias_size ((unsigned int)4) //array size
#define layer_0_bias_range ((nn_t)208) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
-45, -11, -98, 127, };


#endif
