#include <EmbeddedNetFcLayer.h>
#include <EmbeddedNetDotKernel.h>

EmbeddedNetFcLayer::EmbeddedNetFcLayer(
                        sEmbeddedNetShape kernel_shape,
                        sEmbeddedNetShape input_shape,
                        sEmbeddedNetShape output_shape,

                        const nn_weight_t *weights,
                        const nn_weight_t *bias,
                        int weights_range,
                        int bias_range
                      )
            :EmbeddedNetLayer()

{
    m_kernel_shape = kernel_shape;
    m_input_shape  = input_shape;
    m_output_shape = output_shape;

    m_weights = weights;
    m_bias    = bias;

    m_weights_range = weights_range;
    m_bias_range    = bias_range;

    m_inputs_count  = m_input_shape.w*m_input_shape.h*m_input_shape.d;
    m_neurons_count = m_output_shape.w*m_output_shape.h*m_output_shape.d;
}

EmbeddedNetFcLayer::~EmbeddedNetFcLayer()
{

}

void EmbeddedNetFcLayer::forward(nn_layer_t *output, nn_layer_t *input)
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

        if (result < 0)
            result = 0;

        output[neuron_idx] = result;
    }
}
