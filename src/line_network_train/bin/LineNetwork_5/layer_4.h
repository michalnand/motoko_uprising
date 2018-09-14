#ifndef _LAYER_layer_4_H_
#define _LAYER_layer_4_H_


#include <NetworkConfig.h>


#define layer_4_type "dense convolution"

const sLayerGeometry layer_4_input_geometry = {8, 8, 9};
const sLayerGeometry layer_4_output_geometry = {8, 8, 13};
const sLayerGeometry layer_4_kernel_geometry = {3, 3, 4};

#define layer_4_weights_size ((unsigned int)324) //array size
#define layer_4_weights_range ((nn_t)1017) //multiply neuron result with range/1024

const nn_weight_t layer_4_weights[]={
1, 1, 1, 1, -1, -1, 1, -1, 1, -1, 1, -1, 1, -1, -1, -1, 
-1, -1, -1, 1, -1, 1, -1, 1, -1, 1, -1, -1, 1, 1, 1, -1, 
1, 1, -1, 1, 1, -1, 1, -1, 1, -1, -1, -1, -1, 1, -1, 1, 
1, 1, 1, 1, -1, -1, -1, -1, -1, 1, 1, -1, 1, -1, -1, 1, 
1, -1, 1, 1, 1, -1, -1, -1, -1, -1, -1, 1, -1, 1, -1, -1, 
1, 1, -1, -1, 1, -1, 1, -1, -1, -1, -1, 1, -1, -1, 1, 1, 
1, 1, -1, 1, -1, 1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 
1, -1, -1, -1, 1, 1, 1, 1, 1, -1, -1, -1, 1, -1, 1, -1, 
1, 1, 1, -1, -1, 1, 1, -1, 1, 1, 1, -1, 1, 1, 1, -1, 
1, 1, -1, 1, 1, 1, 1, 1, 1, -1, 1, 1, 1, -1, 1, -1, 
-1, 1, -1, -1, -1, -1, 1, 1, 1, 1, -1, -1, -1, -1, 1, -1, 
1, 1, 1, 1, -1, -1, -1, 1, -1, -1, -1, 1, 1, 1, 1, 1, 
1, 1, 1, -1, -1, -1, -1, -1, -1, -1, 1, -1, -1, 1, 1, -1, 
1, -1, 1, 1, 1, -1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1, 
1, -1, -1, 1, 1, 1, -1, 1, -1, -1, -1, -1, -1, 1, -1, -1, 
1, 1, 1, -1, 1, -1, -1, -1, 1, -1, -1, 1, 1, -1, 1, 1, 
22, 7, -59, 21, -29, -26, 7, -127, -44, 8, 14, -39, 15, 20, 44, -21, 
-96, 52, -108, -1, 56, 34, 83, 0, 7, -14, -4, 4, -10, -5, 13, -11, 
-44, -76, -35, -17, -14, -43, -16, 27, -18, -4, 58, -58, -23, 18, 18, 60, 
-51, -13, -64, 66, 38, -63, 17, 7, -46, -12, 36, 5, 5, 14, -20, -23, 
23, -11, -27, -30, };




#define layer_4_bias_size ((unsigned int)4) //array size
#define layer_4_bias_range ((nn_t)83) //multiply neuron result with range/1024

const nn_weight_t layer_4_bias[]={
-10, -14, 0, -127, };


#endif
