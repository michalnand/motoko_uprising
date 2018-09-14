#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 4};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 4};

#define layer_0_weights_size ((unsigned int)36) //array size
#define layer_0_weights_range ((nn_t)9433) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
113, 126, 65, 84, 15, 86, 121, 38, 52, 127, 31, 21, 73, 85, 22, 114, 
110, -13, 107, 102, };




#define layer_0_bias_size ((unsigned int)4) //array size
#define layer_0_bias_range ((nn_t)207) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
127, 14, 57, 62, };


#endif
