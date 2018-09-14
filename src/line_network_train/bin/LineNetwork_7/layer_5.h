#ifndef _LAYER_layer_5_H_
#define _LAYER_layer_5_H_


#include <NetworkConfig.h>


#define layer_5_type "dense convolution"

const sLayerGeometry layer_5_input_geometry = {4, 4, 8};
const sLayerGeometry layer_5_output_geometry = {4, 4, 12};
const sLayerGeometry layer_5_kernel_geometry = {3, 3, 4};

#define layer_5_weights_size ((unsigned int)288) //array size
#define layer_5_weights_range ((nn_t)803) //multiply neuron result with range/1024

const nn_weight_t layer_5_weights[]={
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
-26, 0, 11, -3, -39, -1, 3, -7, -3, 0, -37, 28, 36, -41, 1, -15, 
2, 6, -84, 43, -52, 69, -9, 13, -2, -75, -19, 13, -35, -26, -30, 127, 
};




#define layer_5_bias_size ((unsigned int)4) //array size
#define layer_5_bias_range ((nn_t)116) //multiply neuron result with range/1024

const nn_weight_t layer_5_bias[]={
0, 5, 0, -127, };


#endif
