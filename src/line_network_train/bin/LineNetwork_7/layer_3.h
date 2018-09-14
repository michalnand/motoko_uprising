#ifndef _LAYER_layer_3_H_
#define _LAYER_layer_3_H_


#include <NetworkConfig.h>


#define layer_3_type "dense convolution"

const sLayerGeometry layer_3_input_geometry = {4, 4, 4};
const sLayerGeometry layer_3_output_geometry = {4, 4, 8};
const sLayerGeometry layer_3_kernel_geometry = {3, 3, 4};

#define layer_3_weights_size ((unsigned int)144) //array size
#define layer_3_weights_range ((nn_t)1082) //multiply neuron result with range/1024

const nn_weight_t layer_3_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
28, 30, 43, 3, -95, -7, 45, -32, -22, -9, 19, 22, -36, -105, 21, -37, 
-66, -92, 33, 85, -9, -21, -18, 13, -33, -40, 11, 0, -61, -11, 1, 7, 
10, 9, 44, -22, 27, 13, -26, 15, -21, 11, -15, 63, 28, 22, 40, 2, 
-97, 5, 41, -95, 19, 54, -116, 67, -14, -21, 1, -35, 0, 12, 3, 8, 
-5, -2, -11, 9, -12, -4, 4, 6, 0, 12, 7, 15, 0, 34, 50, 2, 
0, 0, 55, 6, -8, -42, -19, -83, -3, -11, -104, -127, 13, 16, 11, 15, 
9, -18, -18, -12, -8, 1, 2, 6, -11, -13, -63, -83, -73, -91, 9, -20, 
-29, 38, 7, -30, -8, -50, -22, -2, -11, -31, -25, 16, -32, -65, 17, 108, 
};




#define layer_3_bias_size ((unsigned int)4) //array size
#define layer_3_bias_range ((nn_t)360) //multiply neuron result with range/1024

const nn_weight_t layer_3_bias[]={
-56, -61, -127, 50, };


#endif
