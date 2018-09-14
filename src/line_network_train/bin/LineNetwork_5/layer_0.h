#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "dense convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 5};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 4};

#define layer_0_weights_size ((unsigned int)36) //array size
#define layer_0_weights_range ((nn_t)735) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
2, -2, -2, 2, 2, -2, 2, -2, 2, 2, 2, 2, -2, 2, 2, 2, 
-91, -127, -20, 45, 7, 10, 43, -61, 48, 61, -60, 71, -23, -65, 53, 54, 
-46, 34, 32, -13, };




#define layer_0_bias_size ((unsigned int)4) //array size
#define layer_0_bias_range ((nn_t)352) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
0, 95, -92, -127, };


#endif
