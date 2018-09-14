#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 8};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 8};

#define layer_0_weights_size ((unsigned int)72) //array size
#define layer_0_weights_range ((nn_t)618) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
-2, 2, 2, 2, -2, 2, -2, -2, -2, 2, -2, -2, 2, -2, -2, -2, 
99, -28, 50, 23, -68, 26, 63, -3, -36, 57, 15, -15, 33, 62, -16, 44, 
84, 14, 44, -65, 2, 8, 41, -31, -15, -2, -50, -104, 82, -14, -18, -5, 
-4, 21, 46, 127, 10, 80, 12, 22, 10, -35, 12, 24, -63, 40, 68, 62, 
-23, -3, 60, 40, -8, 61, 46, -19, };




#define layer_0_bias_size ((unsigned int)8) //array size
#define layer_0_bias_range ((nn_t)715) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
1, -9, -62, -68, -8, -127, -59, -64, };


#endif
