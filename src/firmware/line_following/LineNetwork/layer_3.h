#ifndef _LAYER_layer_3_H_
#define _LAYER_layer_3_H_


#include <NetworkConfig.h>


#define layer_3_type "dense convolution"

const sLayerGeometry layer_3_input_geometry = {4, 4, 4};
const sLayerGeometry layer_3_output_geometry = {4, 4, 8};
const sLayerGeometry layer_3_kernel_geometry = {3, 3, 4};

#define layer_3_weights_size ((unsigned int)144) //array size
#define layer_3_weights_range ((nn_t)1923) //multiply neuron result with range/1024

const nn_weight_t layer_3_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
-1, -33, 3, -2, 6, -63, -13, -6, -1, 3, -27, 12, 5, -25, 2, 17, 
32, 10, 5, 17, 2, -3, 6, 11, 7, -8, 23, 34, 4, 37, 13, 7, 
-29, 65, -5, -9, 22, -26, 10, 0, -4, -6, 20, 6, -11, 8, -10, 5, 
-4, -4, -3, -43, -21, -5, 39, -19, -8, 10, 5, 0, 0, 23, 12, -26, 
24, 20, 18, 5, -22, 28, 14, 16, 1, -10, 12, 25, -23, -5, 24, 0, 
-19, -2, 6, -5, 1, 2, -13, 7, -46, 1, 59, -59, -1, 0, 3, -11, 
6, -127, -28, 7, 1, 0, 5, 0, -25, 15, -47, -72, -1, 16, 0, 1, 
9, -23, 11, -49, -8, 18, -23, 13, -22, -13, 10, 23, 14, 1, -18, 4, 
};




#define layer_3_bias_size ((unsigned int)4) //array size
#define layer_3_bias_range ((nn_t)710) //multiply neuron result with range/1024

const nn_weight_t layer_3_bias[]={
-127, -16, -82, -74, };


#endif
