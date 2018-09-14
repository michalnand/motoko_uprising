#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 4};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 4};

#define layer_0_weights_size ((unsigned int)36) //array size
#define layer_0_weights_range ((nn_t)1645) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
-14, 101, -8, 21, 90, -11, 53, 127, -33, 42, 113, 40, -7, -8, 57, 11, 
32, 113, 17, 48, };




#define layer_0_bias_size ((unsigned int)4) //array size
#define layer_0_bias_range ((nn_t)557) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
0, 10, 63, -127, };


#endif
