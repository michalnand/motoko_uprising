#ifndef _NetRelu_Layer_H_
#define _NetRelu_Layer_H_

#include "NetworkLayer.h"

class NetReluLayer: public NetworkLayer
{
    private:
        unsigned int size;

    public:
        NetReluLayer(sLayerGeometry kernel_geometry, sLayerGeometry input_geometry, sLayerGeometry output_geometry);
        virtual ~NetReluLayer();

        void forward(nn_layer_t *output, nn_layer_t *input);
};

#endif
