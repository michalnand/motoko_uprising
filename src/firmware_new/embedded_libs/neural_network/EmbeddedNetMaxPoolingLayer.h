#ifndef _EMBEDDED_NET_MAX_POOLING_LAYER_H_
#define _EMBEDDED_NET_MAX_POOLING_LAYER_H_

#include <EmbeddedNetLayer.h>

class EmbeddedNetMaxPoolingLayer: public EmbeddedNetLayer
{
    public:
        EmbeddedNetMaxPoolingLayer(
                            sEmbeddedNetShape kernel_geometry,
                            sEmbeddedNetShape input_geometry,
                            sEmbeddedNetShape output_geometry );

        virtual ~EmbeddedNetMaxPoolingLayer();

        void forward(nn_layer_t *output, nn_layer_t *input);
};

#endif
