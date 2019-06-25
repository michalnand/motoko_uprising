#ifndef _LAYER_layer_5_H_
#define _LAYER_layer_5_H_


#include <NetworkConfig.h>


#define layer_5_type "dense convolution"

const sLayerGeometry layer_5_input_geometry = {4, 4, 8};
const sLayerGeometry layer_5_output_geometry = {4, 4, 12};
const sLayerGeometry layer_5_kernel_geometry = {3, 3, 4};

#define layer_5_weights_size ((unsigned int)288) //array size
#define layer_5_weights_range ((nn_t)1431) //multiply neuron result with range/1024

const nn_weight_t layer_5_weights[]={
0, -1, 0, -2, 0, 2, -2, 0, 0, -24, 53, 18, -38, 8, -11, -1, 
-4, -17, -30, 1, -13, 13, -32, 0, -5, 14, -6, -32, 16, -24, -36, 19, 
0, 6, 13, -1, 0, 0, -5, 6, -2, -1, 0, 0, 5, -35, 24, -24, 
11, 0, -4, 0, 2, 0, -11, -4, 7, 2, 3, 5, -8, 1, -2, -7, 
-13, -48, 6, 9, 0, 5, 0, -11, 0, 0, 0, 1, 0, 0, 2, 0, 
0, -2, 35, -49, -19, 14, -26, -8, -6, -21, 7, -32, 15, 0, -14, 5, 
-4, 0, 13, 0, -61, 28, -5, -23, 3, 17, 2, -11, -17, 3, 16, 1, 
0, 0, 3, 2, -5, -29, 15, 17, 0, -1, 0, 1, 7, -4, -7, -40, 
-1, 1, 7, 0, 5, 3, -1, -24, -8, 0, 16, 4, -5, 5, 0, -3, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 19, -8, -45, 5, -20, 4, -12, 
-8, 0, -20, -43, 12, -13, -36, -4, -14, -5, -11, -30, 20, 24, -15, 0, 
5, -8, 0, 0, 0, 12, 1, -3, 0, 0, 0, -3, -3, 28, 10, -32, 
0, 3, 7, 1, 0, 0, -28, -5, -12, 4, 0, -3, 2, -11, 0, 32, 
-8, 1, -2, 3, 22, -12, 2, 7, 0, 0, -1, 0, 0, 0, -1, 0, 
0, -25, 30, -52, 10, 7, -2, 9, -13, -6, 0, 39, -127, 8, 0, -4, 
6, 3, 7, -38, -112, 9, 12, 1, 3, 18, 19, 3, 0, 0, 2, 0, 
1, -7, 7, 0, 0, -39, 13, -4, 9, 0, 1, -3, 6, 11, -27, 0, 
1, 0, -7, 2, -10, -3, -10, -39, -21, -19, -9, 10, -9, 7, -5, 0, 
};




#define layer_5_bias_size ((unsigned int)4) //array size
#define layer_5_bias_range ((nn_t)277) //multiply neuron result with range/1024

const nn_weight_t layer_5_bias[]={
127, 78, 126, 60, };


#endif
