#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 8};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 8};

#define layer_0_weights_size ((unsigned int)72) //array size
#define layer_0_weights_range ((nn_t)8568) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
115, 114, 14, 27, 96, -1, 68, 127, -19, 67, 113, 10, 50, 76, 9, 95, 
107, -18, 97, 97, 61, 55, -7, 91, 107, 26, 59, 120, 30, 61, 60, -3, 
86, 108, 25, 49, 118, 32, 14, 52, 52, 19, 102, 89, -17, 109, 85, 75, 
59, -52, 108, 103, -33, 88, 117, -20, };




#define layer_0_bias_size ((unsigned int)8) //array size
#define layer_0_bias_range ((nn_t)106) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
127, -29, 0, 42, 46, 44, 35, 51, };


#endif
