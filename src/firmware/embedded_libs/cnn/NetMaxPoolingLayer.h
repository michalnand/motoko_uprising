#ifndef _NetMaxPoolingLayer_Layer_H_
#define _NetMaxPoolingLayer_Layer_H_

#include "NetworkLayer.h"

class NetMaxPoolingLayer: public NetworkLayer
{
    public:
        NetMaxPoolingLayer(
                            sLayerGeometry kernel_geometry,
                            sLayerGeometry input_geometry,
                            sLayerGeometry output_geometry );

        virtual ~NetMaxPoolingLayer();

        void forward(nn_layer_t *output, nn_layer_t *input);
};

#endif
