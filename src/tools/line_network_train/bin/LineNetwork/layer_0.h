#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 4};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 4};

#define layer_0_weights_size ((unsigned int)36) //array size
#define layer_0_weights_range ((nn_t)620) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
39, 127, 70, 38, 33, 1, -8, -21, -25, -76, -56, 125, -19, -14, 23, 29, 
4, -22, 65, -34, -31, 16, 0, 2, -19, 16, 11, -83, 85, 92, -14, 14, 
-27, 2, -17, -42, };




#define layer_0_bias_size ((unsigned int)4) //array size
#define layer_0_bias_range ((nn_t)351) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
-12, 127, -10, -39, };


#endif
