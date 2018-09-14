#ifndef _LAYER_layer_5_H_
#define _LAYER_layer_5_H_


#include <NetworkConfig.h>


#define layer_5_type "output"

const sLayerGeometry layer_5_input_geometry = {4, 4, 4};
const sLayerGeometry layer_5_output_geometry = {1, 1, 8};
const sLayerGeometry layer_5_kernel_geometry = {4, 4, 4};

#define layer_5_weights_size ((unsigned int)512) //array size
#define layer_5_weights_range ((nn_t)1114) //multiply neuron result with range/1024

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
5, -5, 6, 0, 4, -4, -4, -3, 0, -3, -4, -3, -6, -3, 7, 0, 
-4, 6, -2, 1, 2, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 
1, -6, 5, 4, -2, 33, 0, 0, -4, 18, -18, -1, 6, 61, 5, 0, 
-4, 3, 2, 1, -6, 0, 0, 0, -5, 0, 0, 0, -4, 0, 0, 0, 
-2, -5, -2, -2, 0, -2, -11, -7, 0, -7, -6, 1, -5, 2, 3, -6, 
-4, 6, -1, 1, -1, 0, 0, 0, -6, 0, 0, 0, 6, 0, 0, 0, 
-1, -4, -3, -5, -3, -19, 21, -1, 5, -3, 34, -4, -1, -46, -78, 2, 
-4, -5, -2, -6, -4, 0, 0, 0, -2, 0, 0, 0, -3, 0, 0, 0, 
5, 0, -3, -6, -5, 16, 28, -5, 0, 1, -21, 48, 4, -5, -4, 1, 
-1, -6, 1, 0, -4, 0, 0, 0, -6, 0, 0, 0, 0, 0, 0, 0, 
-6, 0, 5, 0, -4, 1, -1, 3, 3, 0, 16, 5, -4, -10, 127, -17, 
0, 1, 1, -5, -6, 0, 0, 0, -5, 0, 0, 0, -5, 0, 0, 0, 
-5, -3, -3, -2, -5, -4, -2, -5, 1, 7, 42, -12, 5, -8, -5, 16, 
4, -3, -4, 4, 2, 0, 0, 0, -1, 0, 0, 0, 4, 0, 0, 0, 
-6, -4, 4, 3, 2, -3, -12, 4, 7, -1, -20, 6, 0, -7, -91, 37, 
-3, 0, 3, -5, 0, 0, 0, 0, -1, 0, 0, 0, 5, 0, 0, 0, 
};




#define layer_5_bias_size ((unsigned int)8) //array size
#define layer_5_bias_range ((nn_t)274) //multiply neuron result with range/1024

const nn_weight_t layer_5_bias[]={
127, 121, 80, 75, 6, 93, 14, 45, };


#endif
