#ifndef _EMBEDDED_NET_CONVOLUTION_LAYER_H_
#define _EMBEDDED_NET_CONVOLUTION_LAYER_H_

#include <EmbeddedNetLayer.h>

class EmbeddedNetConvolutionLayer: public EmbeddedNetLayer
{
    private:
        const nn_weight_t  *m_weights, *m_bias;
        int   m_weights_range, m_bias_range;

    public:
        EmbeddedNetConvolutionLayer(
                            sEmbeddedNetShape kernel_shape,
                            sEmbeddedNetShape input_shape,
                            sEmbeddedNetShape output_shape,

                            const nn_weight_t *weights,
                            const nn_weight_t *bias,
                            int weights_range,
                            int bias_range
                          );

        virtual ~EmbeddedNetConvolutionLayer();

        void forward(nn_layer_t *output, nn_layer_t *input);
};

#endif
