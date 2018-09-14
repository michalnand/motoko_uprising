#ifndef _LAYER_layer_5_H_
#define _LAYER_layer_5_H_


#include <NetworkConfig.h>


#define layer_5_type "output"

const sLayerGeometry layer_5_input_geometry = {1, 1, 32};
const sLayerGeometry layer_5_output_geometry = {1, 1, 8};
const sLayerGeometry layer_5_kernel_geometry = {1, 1, 32};

#define layer_5_weights_size ((unsigned int)256) //array size
#define layer_5_weights_range ((nn_t)0) //multiply neuron result with range/1024

const nn_weight_t layer_5_weights[]={
1, 4, -2, -5, -2, -3, -34, -3, 3, -3, 67, 3, 3, 4, -7, -14, 
-5, -29, -12, -7, -3, -17, -20, -3, 5, -3, -19, -3, 3, 105, 3, 127, 
5, -5, 3, 3, -11, -3, 3, 3, -3, 3, 3, -3, -3, 30, 5, -12, 
3, 5, -6, -29, 3, -17, -8, 3, 40, 3, -2, -3, 3, -43, 51, 3, 
-8, 2, 1, -4, -9, -3, 21, -3, -3, -3, -67, 3, -3, -42, -33, 2, 
-83, -19, -37, -7, 3, -35, -34, 3, 3, -3, 60, 3, -3, -11, 1, -23, 
1, 3, -4, -4, 59, -3, -29, -3, -3, 3, -38, -3, -3, -8, -24, -17, 
51, -2, -11, -3, -3, 1, -6, -3, -4, 3, 55, -3, 3, -6, -14, -11, 
-5, 4, -3, 4, 2, -3, 2, -3, -3, -3, -1, -3, -3, -14, -17, 38, 
47, 5, -47, 5, -3, 75, -12, 3, -3, -3, -51, 3, -3, -19, -5, 0, 
-1, 4, 2, -4, -16, 3, -85, 3, -3, 3, -4, 3, -3, -23, 0, 36, 
-22, 64, 0, -91, -3, 0, 2, 3, -3, -3, -14, -3, 3, 12, -5, -39, 
-4, -4, -1, -2, 1, 3, -1, 3, -3, 3, -16, 3, -3, 0, 4, -11, 
1, 26, 18, 68, 3, -66, 50, 3, -7, 3, -8, 3, 3, 3, -8, -19, 
4, -5, -5, 4, -5, 3, 72, -3, -3, 3, -44, -3, -3, -2, 56, -6, 
-2, -48, 30, 21, 3, -4, -1, -3, -24, -3, -57, -3, -3, -29, -30, -24, 
};




#define layer_5_bias_size ((unsigned int)8) //array size
#define layer_5_bias_range ((nn_t)271) //multiply neuron result with range/1024

const nn_weight_t layer_5_bias[]={
53, 45, 127, 63, 62, 93, 45, 105, };


#endif
