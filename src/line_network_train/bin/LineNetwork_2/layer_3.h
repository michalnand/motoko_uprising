#ifndef _LAYER_layer_3_H_
#define _LAYER_layer_3_H_


#include <NetworkConfig.h>


#define layer_3_type "dense convolution"

const sLayerGeometry layer_3_input_geometry = {4, 4, 4};
const sLayerGeometry layer_3_output_geometry = {4, 4, 8};
const sLayerGeometry layer_3_kernel_geometry = {3, 3, 4};

#define layer_3_weights_size ((unsigned int)144) //array size
#define layer_3_weights_range ((nn_t)3405) //multiply neuron result with range/1024

const nn_weight_t layer_3_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
58, 17, -16, 39, -11, -29, 26, -18, -54, 36, -25, -72, 13, -18, -93, 18, 
1, -108, 13, -22, 2, -4, 0, -3, 0, 17, 28, 16, 28, 24, 13, 25, 
-12, -29, 36, 0, -22, 0, 17, 19, 17, -41, -38, -2, -17, 1, 8, 18, 
25, 3, -23, -27, 4, -6, -89, -75, -2, 3, -3, -5, 9, -25, -3, 32, 
-49, 1, 19, -37, -20, 38, -45, 20, 24, -13, -28, 36, 27, -47, 14, 24, 
24, 19, -46, -45, 14, -28, -114, 10, -8, -127, 6, -56, 6, -1, 3, 0, 
-1, -15, 0, 27, -40, 19, -15, -13, 34, -23, -7, 4, 2, -19, -16, 6, 
6, 1, 13, 0, -9, 8, 0, -28, 10, -8, 3, -5, -11, 16, 5, 3, 
};




#define layer_3_bias_size ((unsigned int)4) //array size
#define layer_3_bias_range ((nn_t)440) //multiply neuron result with range/1024

const nn_weight_t layer_3_bias[]={
-85, -127, -33, -100, };


#endif
