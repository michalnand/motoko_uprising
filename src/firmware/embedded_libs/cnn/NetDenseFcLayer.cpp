#include "NetDenseFcLayer.h"
#include <NetworkDotKernel.h>

NetDenseFcLayer::NetDenseFcLayer(
                                    sLayerGeometry kernel_geometry,
                                    sLayerGeometry input_geometry,
                                    sLayerGeometry output_geometry,

                                    const nn_weight_t *weights,
                                    const nn_weight_t *bias,
                                    int weights_range,
                                    int bias_range
                                )
              :NetworkLayer()
{
    m_kernel_geometry = kernel_geometry;
    m_input_geometry  = input_geometry;
    m_output_geometry = output_geometry;

    m_weights = weights;
    m_bias    = bias;

    m_weights_range = weights_range;
    m_bias_range    = bias_range;

    m_inputs_count  = m_input_geometry.w*m_input_geometry.h*m_input_geometry.d;
    m_neurons_count = m_kernel_geometry.w*m_kernel_geometry.h*m_kernel_geometry.d;
    m_outputs_count = m_output_geometry.w*m_output_geometry.h*m_output_geometry.d;
}

NetDenseFcLayer::~NetDenseFcLayer()
{

}

void NetDenseFcLayer::forward(nn_layer_t *output, nn_layer_t *input)
{
    for (unsigned int neuron_idx = 0; neuron_idx < m_neurons_count; neuron_idx++)
    {
        nn_t dot_result, bias_result;

        nn_weight_t *neuron_w = (nn_weight_t*)(&m_weights[neuron_idx*m_inputs_count]);

        dot_result = network_dot_kernel(neuron_w, input, m_inputs_count);
        dot_result = (dot_result*m_weights_range)/128;

        bias_result = (m_bias[neuron_idx]*m_bias_range);

        nn_t result = (dot_result + bias_result)/1024;

        if (result > NETWORK_LAYER_OUTPUT_RANGE)
            result = NETWORK_LAYER_OUTPUT_RANGE;
        if (result < -NETWORK_LAYER_OUTPUT_RANGE)
            result = -NETWORK_LAYER_OUTPUT_RANGE;

        output[neuron_idx] = result;
    }

    unsigned int output_idx = m_neurons_count;

    for (unsigned int input_idx = 0; input_idx < m_inputs_count; input_idx++)
    {
        output[output_idx] = input[input_idx];
        output_idx++;
    }
}
