#include "LineNetwork.h"

#include "layer_0.h"
#include "layer_1.h"
#include "layer_2.h"
#include "layer_3.h"
#include "layer_4.h"


LineNetwork::LineNetwork()
			:EmbeddedNet()
{
		input_shape.w = 8;
		input_shape.h = 8;
		input_shape.d = 1;

		output_shape.w = 1;
		output_shape.h = 1;
		output_shape.d = 5;

		layers[0] = new EmbeddedNetConvolutionLayer(layer_0_shape,layer_0_input_shape,layer_0_output_shape,layer_0_weights,layer_0_bias,layer_0_weights_range,layer_0_bias_range);
		layers[1] = new EmbeddedNetMaxPoolingLayer(layer_1_shape,layer_1_input_shape,layer_1_output_shape);
		layers[2] = new EmbeddedNetConvolutionLayer(layer_2_shape,layer_2_input_shape,layer_2_output_shape,layer_2_weights,layer_2_bias,layer_2_weights_range,layer_2_bias_range);
		layers[3] = new EmbeddedNetMaxPoolingLayer(layer_3_shape,layer_3_input_shape,layer_3_output_shape);
		layers[4] = new EmbeddedNetFcLayer(layer_4_shape,layer_4_input_shape,layer_4_output_shape,layer_4_weights,layer_4_bias,layer_4_weights_range,layer_4_bias_range);

		layers_count = 5;
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
