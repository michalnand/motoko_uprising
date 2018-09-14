#ifndef _LAYER_layer_3_H_
#define _LAYER_layer_3_H_


#include <NetworkConfig.h>


#define layer_3_type "convolution"

const sLayerGeometry layer_3_input_geometry = {4, 4, 4};
const sLayerGeometry layer_3_output_geometry = {4, 4, 4};
const sLayerGeometry layer_3_kernel_geometry = {3, 3, 4};

#define layer_3_weights_size ((unsigned int)144) //array size
#define layer_3_weights_range ((nn_t)5389) //multiply neuron result with range/1024

const nn_weight_t layer_3_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, -1, 1, -5, 8, -5, 0, -8, 6, 2, 4, 0, 9, 10, 
-5, -8, -2, 12, 2, -4, 0, 5, 0, -38, 18, -11, -15, 71, -34, -106, 
90, 12, -101, 78, 37, -27, 84, -19, -93, 107, -8, -115, 97, 72, -127, 53, 
75, -110, 36, 107, -82, 20, 125, -21, 0, -7, 7, -3, -7, -1, -3, 0, 
2, 2, 8, 0, -2, 16, 3, -7, -1, 0, -2, 2, 3, -1, 4, 5, 
0, 9, -1, 0, 0, -8, 0, 0, -15, -3, 5, -13, 0, 1, 2, 0, 
2, -14, -26, 17, -27, 11, 94, -44, -15, 98, 2, -55, 31, 5, -19, 71, 
-35, -27, 98, 13, -38, 62, 61, -42, 19, 94, -77, 6, 117, -73, -21, 105, 
};




#define layer_3_bias_size ((unsigned int)4) //array size
#define layer_3_bias_range ((nn_t)1357) //multiply neuron result with range/1024

const nn_weight_t layer_3_bias[]={
-99, 9, -127, -7, };


#endif
