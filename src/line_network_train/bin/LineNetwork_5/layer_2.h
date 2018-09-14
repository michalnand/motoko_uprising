#ifndef _LAYER_layer_2_H_
#define _LAYER_layer_2_H_


#include <NetworkConfig.h>


#define layer_2_type "dense convolution"

const sLayerGeometry layer_2_input_geometry = {8, 8, 5};
const sLayerGeometry layer_2_output_geometry = {8, 8, 9};
const sLayerGeometry layer_2_kernel_geometry = {3, 3, 4};

#define layer_2_weights_size ((unsigned int)180) //array size
#define layer_2_weights_range ((nn_t)1599) //multiply neuron result with range/1024

const nn_weight_t layer_2_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
-20, -22, 6, 19, 22, -1, -5, -4, -6, -8, -109, -10, -18, 2, -1, -39, 
-22, 15, 0, -16, 9, 5, -4, 6, 9, 7, 24, 24, 13, 0, 12, -6, 
-16, -9, 3, -1, -8, 3, -56, -100, -7, -37, -9, -48, -6, -15, -11, 13, 
-1, -15, -16, 20, 16, -78, -3, 10, 26, 14, -1, -85, -72, 10, 9, -5, 
3, 7, 13, -6, -3, 11, 4, -59, 0, 14, -2, -9, -5, 5, -8, -6, 
0, -1, -1, -55, 0, 9, -18, -20, -4, 28, -14, 16, -7, 16, -2, 19, 
18, -24, 35, -11, -82, -67, -30, 37, -30, 2, 14, 22, -28, -43, 5, 12, 
0, -8, -4, 0, 0, -18, -9, -9, -1, -11, -9, -14, -11, -12, -16, -16, 
-21, -95, 7, -4, -51, 20, -20, -17, 43, 43, 1, 19, 17, 12, 18, -127, 
10, 13, -4, 38, -3, -94, 21, -5, -33, -2, 19, -10, 0, -4, -1, -13, 
-6, -8, 0, -13, };




#define layer_2_bias_size ((unsigned int)4) //array size
#define layer_2_bias_range ((nn_t)282) //multiply neuron result with range/1024

const nn_weight_t layer_2_bias[]={
-127, -3, -19, 40, };


#endif
