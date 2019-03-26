#ifndef _LAYER_layer_3_H_
#define _LAYER_layer_3_H_


#include <NetworkConfig.h>


#define layer_3_type "dense convolution"

const sLayerGeometry layer_3_input_geometry = {4, 4, 4};
const sLayerGeometry layer_3_output_geometry = {4, 4, 8};
const sLayerGeometry layer_3_kernel_geometry = {3, 3, 4};

#define layer_3_weights_size ((unsigned int)144) //array size
#define layer_3_weights_range ((nn_t)726) //multiply neuron result with range/1024

const nn_weight_t layer_3_weights[]={
-5, -6, -4, -9, 0, -9, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 
-17, 2, -1, -2, 15, -2, 13, 6, 8, -8, -6, 12, -7, -4, -19, -12, 
-15, 1, -6, 15, 11, -48, 17, -9, 5, 1, 23, 9, -15, -105, 62, 38, 
9, -32, 18, 24, 26, -1, 54, 10, -18, 32, -8, 21, -28, 21, 12, -73, 
-74, 50, 1, -12, 10, 12, 22, -2, 24, -59, 0, 4, -2, 35, 0, 10, 
-4, 45, -43, 120, 16, 5, 0, 0, 23, -1, 7, 36, -76, -33, 4, -14, 
-2, 1, -8, 18, 44, 107, 18, 4, -16, -22, 3, 20, 48, -13, -56, 27, 
-4, -11, -8, -3, 20, -48, -39, -57, 10, 14, 6, -3, 21, 14, 19, 22, 
-60, 19, -17, 14, -29, -19, 23, -49, 52, -127, -1, 15, 24, 6, 32, 23, 
};




#define layer_3_bias_size ((unsigned int)4) //array size
#define layer_3_bias_range ((nn_t)339) //multiply neuron result with range/1024

const nn_weight_t layer_3_bias[]={
0, 72, -39, 127, };


#endif
