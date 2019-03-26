#ifndef _LAYER_layer_8_H_
#define _LAYER_layer_8_H_


#include <NetworkConfig.h>


#define layer_8_type "output"

const sLayerGeometry layer_8_input_geometry = {2, 2, 12};
const sLayerGeometry layer_8_output_geometry = {1, 1, 5};
const sLayerGeometry layer_8_kernel_geometry = {2, 2, 12};

#define layer_8_weights_size ((unsigned int)240) //array size
#define layer_8_weights_range ((nn_t)976) //multiply neuron result with range/1024

const nn_weight_t layer_8_weights[]={
64, -45, 24, -12, -32, -51, -19, -17, -53, -27, -11, -11, 52, 7, -5, -32, 
-4, -2, -1, 0, 22, 0, 9, 0, 0, -10, 0, -14, 48, 2, 22, 7, 
1, -2, 0, -1, -3, -4, -1, -3, 28, 1, 9, 4, -30, -16, -5, -10, 
-104, 64, -13, 17, -36, -45, -18, -41, 46, -24, -5, -12, -73, -6, -19, -18, 
11, 5, 7, 2, -26, 6, -14, 2, 9, 1, -3, 1, 2, 15, 5, 15, 
0, -1, 0, -1, 8, -3, 3, 0, 23, 12, 2, 4, 36, -14, 3, -6, 
94, -22, -9, 3, 42, 71, 47, 27, 52, 33, 31, 19, 24, -3, -55, -20, 
2, 4, -7, -10, -5, -5, 6, -10, -26, 6, -2, 0, -21, 15, -12, -14, 
0, 0, 0, 0, 0, -2, 0, -2, -25, -1, -8, -2, 1, 2, 6, 6, 
-32, 49, -4, -12, 10, -34, 0, -5, -42, 40, -6, 12, 0, 4, 127, -34, 
-4, 0, 4, 1, 5, -14, 1, 1, 12, -8, 5, 0, -5, 0, 0, -1, 
0, 0, 0, 0, -1, 4, 0, 0, -12, -4, -1, 6, -11, 12, -1, 3, 
-27, -47, 1, 8, 13, 63, -10, 39, -10, -24, -4, -5, 2, 0, -48, 95, 
1, 8, 5, -7, 3, 12, 0, 6, 3, 13, 0, 15, -26, -30, -17, -15, 
0, 2, 0, 0, -1, 7, -1, 6, -18, -10, 1, -14, 9, 17, -4, 7, 
};




#define layer_8_bias_size ((unsigned int)5) //array size
#define layer_8_bias_range ((nn_t)406) //multiply neuron result with range/1024

const nn_weight_t layer_8_bias[]={
88, 127, 17, 34, 48, };


#endif
