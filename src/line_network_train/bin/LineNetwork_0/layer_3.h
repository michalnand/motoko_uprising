#ifndef _LAYER_layer_3_H_
#define _LAYER_layer_3_H_


#include <NetworkConfig.h>


#define layer_3_type "dense convolution"

const sLayerGeometry layer_3_input_geometry = {4, 4, 4};
const sLayerGeometry layer_3_output_geometry = {4, 4, 8};
const sLayerGeometry layer_3_kernel_geometry = {3, 3, 4};

#define layer_3_weights_size ((unsigned int)144) //array size
#define layer_3_weights_range ((nn_t)2913) //multiply neuron result with range/1024

const nn_weight_t layer_3_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
35, -29, -73, 26, 38, -96, 20, 55, -104, 48, 127, -12, -4, 1, 15, -21, 
28, 57, -12, 81, 7, -5, 6, 0, 0, 15, -36, 11, 4, 12, 16, -15, 
3, 11, 2, -23, -21, 15, -6, -32, -1, 13, -45, 13, -10, -68, 28, -1, 
-4, 15, 4, 12, -5, 28, 24, -37, 5, 9, 10, 0, 0, 60, 13, -2, 
17, -13, 6, 13, 4, 11, -33, 21, 13, -6, -16, -36, 24, -42, -4, 26, 
-87, 5, 33, 35, 40, 0, -3, 10, 52, 51, -1, 59, 8, -2, 11, 8, 
-5, 69, 24, -74, -7, 4, -73, 6, 12, -72, 28, 4, -1, 18, -13, 9, 
-4, -7, -6, 11, -59, -38, 13, 44, 34, 0, 32, 46, -23, 16, 50, -52, 
};




#define layer_3_bias_size ((unsigned int)4) //array size
#define layer_3_bias_range ((nn_t)561) //multiply neuron result with range/1024

const nn_weight_t layer_3_bias[]={
-42, -50, 12, 127, };


#endif
