#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 4};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 4};

#define layer_0_weights_size ((unsigned int)36) //array size
#define layer_0_weights_range ((nn_t)4363) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
44, 127, 60, 64, -6, 68, 77, -7, 63, 74, -10, 20, 4, 7, -12, -19, 
-27, -9, -4, 16, };




#define layer_0_bias_size ((unsigned int)4) //array size
#define layer_0_bias_range ((nn_t)1011) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
0, -92, -127, -6, };


#endif
