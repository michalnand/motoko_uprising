#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <NetworkConfig.h>


#define layer_0_type "convolution"

const sLayerGeometry layer_0_input_geometry = {8, 8, 1};
const sLayerGeometry layer_0_output_geometry = {8, 8, 8};
const sLayerGeometry layer_0_kernel_geometry = {3, 3, 8};

#define layer_0_weights_size ((unsigned int)72) //array size
#define layer_0_weights_range ((nn_t)669) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
-2, 2, 2, -2, -2, -2, 2, 2, -2, -2, 2, -2, -2, -2, -2, -2, 
-111, -109, 59, -76, 22, 74, -1, 36, 81, -115, 61, -16, 22, -4, -43, 16, 
41, -88, 51, 69, 7, 24, 10, -11, 59, -20, 36, 108, -127, 21, -20, -54, 
-3, 51, 80, 78, 2, 92, 23, 12, 8, 27, 55, 26, -9, 105, 78, 84, 
-14, -25, 82, -16, -29, 35, 30, -11, };




#define layer_0_bias_size ((unsigned int)8) //array size
#define layer_0_bias_range ((nn_t)681) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
-2, 51, -82, -78, -83, -127, -119, -16, };


#endif
