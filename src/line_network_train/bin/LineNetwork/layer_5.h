#ifndef _LAYER_layer_5_H_
#define _LAYER_layer_5_H_


#include <NetworkConfig.h>


#define layer_5_type "dense convolution"

const sLayerGeometry layer_5_input_geometry = {4, 4, 8};
const sLayerGeometry layer_5_output_geometry = {4, 4, 12};
const sLayerGeometry layer_5_kernel_geometry = {3, 3, 4};

#define layer_5_weights_size ((unsigned int)288) //array size
#define layer_5_weights_range ((nn_t)1177) //multiply neuron result with range/1024

const nn_weight_t layer_5_weights[]={
-33, 2, -11, 8, 0, -8, -2, -15, -9, -101, -91, -2, 10, -59, -6, -20, 
-32, -13, 34, -6, -14, -12, -32, -13, -26, -54, -19, -8, -2, 54, 13, -12, 
30, -23, -2, 0, -17, -1, 8, 4, 0, -7, 8, -6, -2, 0, -19, 11, 
0, 0, -2, 3, 0, -3, 13, 3, -7, 5, 0, -1, 7, 0, 0, -20, 
17, 13, 12, 3, 0, 20, 2, 9, -21, 0, -3, 0, 0, 6, 0, 1, 
-18, -72, 0, 2, 28, 0, 7, 0, 15, -3, 46, 2, -16, -3, -9, -4, 
0, 6, 0, -39, 88, -75, -6, -68, 37, -10, -1, -15, 11, 23, -1, -8, 
7, -4, 0, 3, 2, -4, -7, 2, 0, 0, 0, 0, -1, -2, 14, 8, 
-16, 0, 4, -2, 0, 3, 11, -15, 29, 9, -24, 1, -14, 3, 1, 3, 
-99, 5, 7, -78, -7, 0, -15, -16, 0, -87, -36, 25, -50, -22, 25, -1, 
2, 3, 63, 8, 1, 37, 12, 10, 0, 0, -4, 2, 22, -127, -5, -1, 
-5, 10, -4, -28, -16, 3, -15, 3, 0, -4, 9, 0, 0, -2, 0, 0, 
2, 0, 0, 6, 0, -2, -16, 8, -10, 0, 0, 0, 2, 11, 0, -13, 
-2, -3, 0, 0, 0, 0, 0, -2, 23, -29, -1, 0, -2, -5, 6, 17, 
-23, 72, 0, -34, 6, -47, 0, -7, -4, -20, 7, 10, 8, -18, -24, 37, 
13, -64, -28, -58, -72, -30, 9, -39, 43, -1, 6, 0, 0, -1, 16, -5, 
-2, -5, -7, 0, -10, 0, -26, 20, -7, -3, 9, 11, 0, -15, 9, 6, 
-20, 3, 5, 4, 4, 6, 2, 5, -2, 26, -5, 7, -12, 17, 9, 4, 
};




#define layer_5_bias_size ((unsigned int)4) //array size
#define layer_5_bias_range ((nn_t)193) //multiply neuron result with range/1024

const nn_weight_t layer_5_bias[]={
127, 38, 76, 73, };


#endif
