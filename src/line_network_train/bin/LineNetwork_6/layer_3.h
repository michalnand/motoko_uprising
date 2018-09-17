#ifndef _LAYER_layer_3_H_
#define _LAYER_layer_3_H_


#include <NetworkConfig.h>


#define layer_3_type "dense convolution"

const sLayerGeometry layer_3_input_geometry = {4, 4, 4};
const sLayerGeometry layer_3_output_geometry = {4, 4, 8};
const sLayerGeometry layer_3_kernel_geometry = {3, 3, 4};

#define layer_3_weights_size ((unsigned int)144) //array size
#define layer_3_weights_range ((nn_t)4276) //multiply neuron result with range/1024

const nn_weight_t layer_3_weights[]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
-4, 0, -1, -3, 2, -1, -8, 3, 0, -3, 0, 20, 13, -19, 21, 10, 
-24, 17, 13, -20, -13, 15, 0, -8, 10, -69, -36, 12, -72, -46, 0, -78, 
-50, -13, 82, 69, -37, 53, 101, -45, 26, 105, -43, -23, 107, -41, -60, -44, 
53, -95, -43, 27, -87, -51, 14, -84, 8, 24, 21, 8, 29, -49, -17, 27, 
-92, -18, 23, -106, -17, 29, -56, 101, 26, -46, 125, 34, -50, 127, 30, -50, 
120, 38, -56, -37, 35, -103, -35, 36, -103, -31, 35, -105, -3, -9, -5, 1, 
-2, 0, -1, 0, 26, 8, 2, 15, 10, 0, 1, 0, 0, -2, -1, 1, 
0, 0, 0, -3, -4, 4, 2, -6, -22, 16, -9, -34, 5, -11, -55, -26, 
};




#define layer_3_bias_size ((unsigned int)4) //array size
#define layer_3_bias_range ((nn_t)236) //multiply neuron result with range/1024

const nn_weight_t layer_3_bias[]={
-68, -34, 72, -127, };


#endif
