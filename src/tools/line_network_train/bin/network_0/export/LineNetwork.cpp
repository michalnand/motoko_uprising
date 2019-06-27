#include "LineNetwork.h"

#include "layer_0.h"
#include "layer_1.h"


LineNetwork::LineNetwork()
			:EmbeddedNet()
{
		input_shape.w = 6;
		input_shape.h = 6;
		input_shape.d = 1;

		output_shape.w = 1;
		output_shape.h = 1;
		output_shape.d = 5;

		layers[0] = new EmbeddedNetFcLayer(layer_0_shape,layer_0_input_shape,layer_0_output_shape,layer_0_weights,layer_0_bias,layer_0_weights_range,layer_0_bias_range);
		layers[1] = new EmbeddedNetFcLayer(layer_1_shape,layer_1_input_shape,layer_1_output_shape,layer_1_weights,layer_1_bias,layer_1_weights_range,layer_1_bias_range);

		layers_count = 2;
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
