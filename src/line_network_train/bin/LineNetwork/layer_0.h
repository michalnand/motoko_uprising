#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 4};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 4};

#define layer_0_weights_size ((unsigned int)36) //array size
#define layer_0_weights_range ((nn_t)649) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
-36, 28, 103, -5, 17, -3, 6, -39, -30, 37, 76, -39, 6, -5, 21, 3, 
14, 4, -26, 26, 127, -50, -39, 39, -25, -17, -27, -84, 6, 38, -17, 20, 
8, 31, 39, -19, };




#define layer_0_bias_size ((unsigned int)4) //array size
#define layer_0_bias_range ((nn_t)167) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
-53, -66, -77, 127, };


#endif
