#ifndef _LAYER_layer_3_H_
#define _LAYER_layer_3_H_


#include <NetworkConfig.h>


#define layer_3_type "dense convolution"

const sLayerGeometry layer_3_input_geometry = {4, 4, 6};
const sLayerGeometry layer_3_output_geometry = {4, 4, 12};
const sLayerGeometry layer_3_kernel_geometry = {3, 3, 6};

#define layer_3_weights_size ((unsigned int)324) //array size
#define layer_3_weights_range ((nn_t)2138) //multiply neuron result with range/1024

const nn_weight_t layer_3_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
-82, 28, -85, -98, 38, -29, -92, -2, 28, -127, 12, 7, -17, 25, 6, 0, 
4, 2, 1, -28, 19, -25, 36, 4, -33, 62, 44, -14, 118, -11, -3, 106, 
44, -53, -76, 64, -13, -31, 46, -52, -18, 30, -17, -30, 47, -8, -34, 53, 
-30, 19, 30, -36, -24, 50, -8, 12, 34, -60, 63, -12, -89, 19, 41, -49, 
44, 10, -59, 114, };




#define layer_3_bias_size ((unsigned int)6) //array size
#define layer_3_bias_range ((nn_t)418) //multiply neuron result with range/1024

const nn_weight_t layer_3_bias[]={
16, 0, 48, 48, -64, 127, };


#endif
