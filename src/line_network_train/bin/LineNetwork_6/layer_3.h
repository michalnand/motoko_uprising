#ifndef _LAYER_layer_3_H_
#define _LAYER_layer_3_H_


#include <NetworkConfig.h>


#define layer_3_type "dense convolution"

const sLayerGeometry layer_3_input_geometry = {4, 4, 4};
const sLayerGeometry layer_3_output_geometry = {4, 4, 8};
const sLayerGeometry layer_3_kernel_geometry = {3, 3, 4};

#define layer_3_weights_size ((unsigned int)144) //array size
#define layer_3_weights_range ((nn_t)716) //multiply neuron result with range/1024

const nn_weight_t layer_3_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
-7, 39, -30, 42, -37, -22, 67, -78, -14, 7, -56, -1, 13, 9, -11, 5, 
8, -82, 43, 15, 12, 15, -14, 4, 0, 2, -51, 9, 4, 33, -10, 20, 
53, 18, 12, -4, 8, -18, 0, 27, -65, -2, 44, -38, -14, -37, -19, -21, 
37, -45, -101, 77, -39, -6, 53, -21, 16, -8, -31, 22, 18, 16, 17, 4, 
11, -20, -30, 27, 11, -24, -33, 3, -45, -64, 33, 18, -84, -6, 4, -42, 
34, 28, -44, 7, 48, 8, -4, 23, 61, 51, -44, 50, 11, 26, 11, 14, 
28, 5, -3, 12, 6, -1, -61, -12, 12, -35, 38, 29, 34, 16, -55, 20, 
5, -22, 44, 0, -33, 53, -70, -15, -126, -27, -1, -127, 35, -34, -101, -17, 
};




#define layer_3_bias_size ((unsigned int)4) //array size
#define layer_3_bias_range ((nn_t)90) //multiply neuron result with range/1024

const nn_weight_t layer_3_bias[]={
-25, -23, -11, 127, };


#endif
