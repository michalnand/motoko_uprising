#ifndef _LAYER_layer_3_H_
#define _LAYER_layer_3_H_


#include <NetworkConfig.h>


#define layer_3_type "dense convolution"

const sLayerGeometry layer_3_input_geometry = {4, 4, 6};
const sLayerGeometry layer_3_output_geometry = {4, 4, 12};
const sLayerGeometry layer_3_kernel_geometry = {3, 3, 6};

#define layer_3_weights_size ((unsigned int)324) //array size
#define layer_3_weights_range ((nn_t)2469) //multiply neuron result with range/1024

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
23, -51, 127, 18, -81, 37, -29, -81, 72, -68, -52, 68, -47, -65, -3, 0, 
-7, 0, 1, -22, 32, 27, -11, 14, 17, 6, 8, 22, 42, 10, 24, 87, 
-38, -88, 35, -33, -36, 19, 22, 32, -24, -18, -31, -38, -19, -21, -20, 6, 
5, 2, -22, -23, 11, -36, -8, 37, 8, 7, 56, 19, -58, -6, 17, -57, 
12, 3, -8, -2, };




#define layer_3_bias_size ((unsigned int)6) //array size
#define layer_3_bias_range ((nn_t)237) //multiply neuron result with range/1024

const nn_weight_t layer_3_bias[]={
3, -1, 0, 0, 127, -11, };


#endif
