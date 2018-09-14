#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 8};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 8};

#define layer_0_weights_size ((unsigned int)72) //array size
#define layer_0_weights_range ((nn_t)1232) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
2, 33, 7, -56, -36, 27, -9, -27, 24, 7, -33, -2, -24, -16, 10, -38, 
-36, -2, -1, -6, -46, -20, 40, -39, 11, 45, -58, 24, 45, 106, 11, -34, 
109, 69, -5, 127, 47, -26, -6, 11, -15, -5, 48, -40, 22, 72, -111, -10, 
60, 32, 7, 40, 9, -35, 66, 35, };




#define layer_0_bias_size ((unsigned int)8) //array size
#define layer_0_bias_range ((nn_t)601) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
0, 43, 27, 92, 10, -26, 21, 127, };


#endif
