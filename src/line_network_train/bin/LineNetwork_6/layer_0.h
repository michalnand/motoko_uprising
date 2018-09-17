#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 4};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 4};

#define layer_0_weights_size ((unsigned int)36) //array size
#define layer_0_weights_range ((nn_t)2965) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
6, 36, 4, 121, -1, 14, 123, -13, -3, 127, -11, -6, -26, 13, 0, -18, 
15, -2, -35, 17, };




#define layer_0_bias_size ((unsigned int)4) //array size
#define layer_0_bias_range ((nn_t)740) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
0, -90, -127, -16, };


#endif
