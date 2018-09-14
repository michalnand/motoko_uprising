#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 4};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 4};

#define layer_0_weights_size ((unsigned int)36) //array size
#define layer_0_weights_range ((nn_t)1265) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
1, -1, 1, 1, -1, 1, -1, -1, 1, -1, -1, 1, -1, -1, 1, 1, 
42, -57, 40, -15, -10, 18, 53, 31, 35, 84, 59, -40, -2, 58, -39, -9, 
127, 2, 64, 106, };




#define layer_0_bias_size ((unsigned int)4) //array size
#define layer_0_bias_range ((nn_t)978) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
-2, -10, -127, -73, };


#endif
