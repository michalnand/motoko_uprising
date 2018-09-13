#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "dense convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 9};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 8};

#define layer_0_weights_size ((unsigned int)72) //array size
#define layer_0_weights_range ((nn_t)358) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
82, -98, 32, 26, 76, -34, 19, 22, 13, 34, -7, 111, 64, 64, 6, 45, 
-3, -66, 0, 17, 95, -48, 75, 84, 18, -6, 50, 59, 15, -16, -12, -95, 
53, 5, -17, 119, -55, -62, -51, -6, 15, -110, 41, 17, -127, 27, 56, -25, 
15, -13, 17, 44, -101, 78, 75, -23, };




#define layer_0_bias_size ((unsigned int)8) //array size
#define layer_0_bias_range ((nn_t)76) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
96, 22, -35, 127, -64, 106, 86, -36, };


#endif
