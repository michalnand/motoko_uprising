#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "dense convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 5};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 4};

#define layer_0_weights_size ((unsigned int)36) //array size
#define layer_0_weights_range ((nn_t)944) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
1, 1, -1, -1, -1, 1, 1, -1, 1, 1, 1, -1, 1, 1, -1, 1, 
55, -60, -55, 4, 42, 13, 32, 1, 68, 32, -14, 22, 31, -5, 27, 22, 
18, -127, 63, 55, };




#define layer_0_bias_size ((unsigned int)4) //array size
#define layer_0_bias_range ((nn_t)413) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
5, -18, -118, -127, };


#endif
