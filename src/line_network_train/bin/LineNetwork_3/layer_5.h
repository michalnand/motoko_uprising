#ifndef _LAYER_layer_5_H_
#define _LAYER_layer_5_H_


#include <NetworkConfig.h>


#define layer_5_type "output"

const sLayerGeometry layer_5_input_geometry = {1, 1, 32};
const sLayerGeometry layer_5_output_geometry = {1, 1, 8};
const sLayerGeometry layer_5_kernel_geometry = {1, 1, 32};

#define layer_5_weights_size ((unsigned int)256) //array size
#define layer_5_weights_range ((nn_t)0) //multiply neuron result with range/1024

const nn_weight_t layer_5_weights[]={
5, -6, 3, -3, 100, -19, 10, 12, 3, -5, -8, -3, -3, -8, -3, -26, 
-3, 1, 3, 87, 3, 3, -22, -3, -41, -3, 14, 3, 2, 127, -3, -3, 
3, 6, 3, -14, -44, 0, 10, 50, -3, -30, 3, -3, -3, 62, -3, -11, 
3, -18, 70, 4, -3, -3, -21, 3, -30, 3, 20, 3, -48, -42, 3, -3, 
-2, -4, 3, 4, 2, 91, -4, -81, -3, 75, -46, -3, -3, 23, -3, -2, 
3, 0, -2, -32, -3, -3, -11, -3, -33, -3, -69, 3, 61, 2, 3, 3, 
-4, -5, -3, -21, -64, -15, 5, 5, 3, -43, 56, -3, 3, -32, 3, -16, 
3, 4, -9, -4, -3, -3, -43, 3, -14, -3, -5, 3, 34, 1, 3, 3, 
2, 2, 3, 3, 123, 0, -42, -61, 3, 6, 39, -3, 3, -4, -3, 58, 
-3, -1, -1, -52, -3, 3, 4, -3, -22, 3, 1, 3, -19, -33, -3, 3, 
-3, -5, 3, -81, -89, -22, -30, 8, 3, -53, -36, -3, 3, -28, -3, 23, 
-3, 83, -19, -4, -3, 3, 71, -3, 6, 3, -26, -3, -7, 5, -3, 3, 
1, 12, -3, 14, 0, -22, -72, 6, -3, 25, -2, -3, -3, -13, 3, -59, 
3, 9, 2, -4, 3, -3, 20, 3, 77, 3, 15, -3, -3, -35, -3, -3, 
4, 28, -3, 77, -47, -25, 64, 0, -3, 30, -9, 3, 3, -24, 3, -2, 
-3, -58, -22, -35, 3, 3, -21, 3, 26, -3, 15, 3, -37, 0, -3, -3, 
};




#define layer_5_bias_size ((unsigned int)8) //array size
#define layer_5_bias_range ((nn_t)254) //multiply neuron result with range/1024

const nn_weight_t layer_5_bias[]={
45, 72, 73, 72, 69, 127, 73, 83, };


#endif
