#ifndef _LAYER_layer_3_H_
#define _LAYER_layer_3_H_


#include <NetworkConfig.h>


#define layer_3_type "dense convolution"

const sLayerGeometry layer_3_input_geometry = {4, 4, 4};
const sLayerGeometry layer_3_output_geometry = {4, 4, 8};
const sLayerGeometry layer_3_kernel_geometry = {3, 3, 4};

#define layer_3_weights_size ((unsigned int)144) //array size
#define layer_3_weights_range ((nn_t)769) //multiply neuron result with range/1024

const nn_weight_t layer_3_weights[]={
43, -8, -5, 10, -9, 9, 0, -2, 2, -28, 26, 21, -19, -9, 0, -6, 
-24, -1, 7, 16, 29, 0, 3, -2, -11, -11, 11, 85, -7, 3, 2, 8, 
8, 0, -3, 0, 127, 41, -103, 18, 23, -12, -20, -18, 16, -26, 54, -1, 
-17, 15, 4, -35, -14, -12, 87, 17, -96, 0, 34, -7, -24, -23, 37, 113, 
20, -53, 15, -3, -24, -22, -13, 7, -12, -16, -101, -11, 7, -21, -11, 10, 
6, 37, 9, -22, 24, 0, 21, 9, 9, 0, -7, -10, -82, 8, -8, 14, 
24, 25, 14, -47, -42, -64, -13, -42, 3, -1, -1, 13, -99, 60, -102, -8, 
25, -9, 18, -26, 9, -24, 36, 22, -26, 0, 0, 6, -8, 30, -62, 67, 
-36, -14, 2, 11, 1, -10, -4, -44, 60, -120, 34, 35, -6, 11, -13, 6, 
};




#define layer_3_bias_size ((unsigned int)4) //array size
#define layer_3_bias_range ((nn_t)439) //multiply neuron result with range/1024

const nn_weight_t layer_3_bias[]={
-10, -11, 127, -6, };


#endif
