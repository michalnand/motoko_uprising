#include "LineNetwork.h"

#include "layer_0.h"
#include "layer_1.h"
#include "layer_2.h"
#include "layer_3.h"
#include "layer_4.h"
#include "layer_5.h"
#include "layer_6.h"
#include "layer_7.h"
#include "layer_8.h"


LineNetwork::LineNetwork()
			:NeuralNetwork()
{
		input_geometry.w = 8;
		input_geometry.h = 8;
		input_geometry.d = 1;

		output_geometry.w = 1;
		output_geometry.h = 1;
		output_geometry.d = 5;

		layers[0] = new NetConvolutionLayer(layer_0_kernel_geometry,layer_0_input_geometry,layer_0_output_geometry,layer_0_weights,layer_0_bias,layer_0_weights_range,layer_0_bias_range);
		layers[1] = new NetReluLayer(layer_1_kernel_geometry,layer_1_input_geometry,layer_1_output_geometry);
		layers[2] = new NetMaxPoolingLayer(layer_2_kernel_geometry,layer_2_input_geometry,layer_2_output_geometry);
		layers[3] = new NetDenseConvolutionLayer(layer_3_kernel_geometry,layer_3_input_geometry,layer_3_output_geometry,layer_3_weights,layer_3_bias,layer_3_weights_range,layer_3_bias_range);
		layers[4] = new NetReluLayer(layer_4_kernel_geometry,layer_4_input_geometry,layer_4_output_geometry);
		layers[5] = new NetDenseConvolutionLayer(layer_5_kernel_geometry,layer_5_input_geometry,layer_5_output_geometry,layer_5_weights,layer_5_bias,layer_5_weights_range,layer_5_bias_range);
		layers[6] = new NetReluLayer(layer_6_kernel_geometry,layer_6_input_geometry,layer_6_output_geometry);
		layers[7] = new NetMaxPoolingLayer(layer_7_kernel_geometry,layer_7_input_geometry,layer_7_output_geometry);
		layers[8] = new NetFcLayer(layer_8_kernel_geometry,layer_8_input_geometry,layer_8_output_geometry,layer_8_weights,layer_8_bias,layer_8_weights_range,layer_8_bias_range);

		layers_count = 9;
		allocate_buffer();
}


LineNetwork::~LineNetwork()
{
		for (unsigned int i = 0; i < layers_count; i++)
		{
			delete layers[i];
			layers[i] = nullptr;
		}
}
