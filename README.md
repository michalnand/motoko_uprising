# Motoko Uprising
## line following robot with neural network predictor

Advanced line following robot, using custom deep neural network for curve shape prediction.
Robot can recognize straight line and speed up.

* Video1 of woking robot [motoko video 1](https://www.youtube.com/watch?v=E9FJIDowNmU)
* Video2 of woking robot [motoko video 2](https://www.youtube.com/watch?v=xUAJ1LA6Xwc)

<img src="doc/images/IMG_20190701_161143.jpg" width="800">
<img src="doc/video/robot_video.gif" width="800">
<img src="doc/video/debug_video.gif" width="800">




## hardware

* CPU is ARM Cortex M4F, stm32f303, 72MHz
  * with simd instructions, good to have for deep learning
* gyroscope : lsm303 
  * (or something like THAT - yeah, they are changing it more often then socks)
* motors : pololu HP 1:30, micro metal gear, with magnetic encoders
* motor driver : TI DRV8834
* line sensors : phototransitors for visible light (not IR)
  * Iam using white leds, so the line can be colored - not only black
* obstacle detection :
  * common IR leds, and laser (still not working as I wish - too slow, but high range)
* accu : LiPol 2S, 150mAh, from dualsky

<img src="doc/diagrams/motoko_uprising_hw.png" width="500">

Some photos from mounting this devilry device :
* PCB design are in  [pcb](hardware/export), ready to send to your favorite manufactor
  * <img src="hardware/schem.png" width="500">
  * <img src="hardware/board.png" width="500">
  * <img src="hardware/bottom.png" width="500">
  * <img src="hardware/top.png" width="500">
  
* Chassis, there are little of 3D printed parts [3d print](hardware/chassis)
  * <img src="hardware/chassis/motoko_front.png" width="256">

<img src="doc/images/robot_mount_01.jpg" width="700">
<img src="doc/images/robot_model.png" width="700">
<img src="doc/images/IMG_20190701_133358.jpg" width="700">



## firmware

### control loops

* ADC reads line sensor, using quadratic interpolation for precission line position estimation
* for steering PD controller is used
* for motor controll two PIDs are used (data from encoders are filtered by low pass filters)
* target speed is estimated by neural network, using line shape classification

<img src="doc/diagrams/lf/line_following.png" width="700">

### neural network

tiny convolutional neural network is used, with architecture :
IN1x8x8 - C4x3x3 - P2x2 - C8x3x3 - P2x2 - FC5

<img src="doc/diagrams/line_classification.png" width="500">

the custom embedded CNN framework is used

```cpp
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
```


### PIDs

PIDs in differential form are used, with antiwindup and derivation kick avoid trick

the controller equation is :
![u(n) = u(n-1) + k_0e(n) + k_1e(n-1) + k_2e(n-2)](https://render.githubusercontent.com/render/math?math=u(n)%20%3D%20u(n-1)%20%2B%20k_0e(n)%20%2B%20k_1e(n-1)%20%2B%20k_2e(n-2))

where
* e(n) is error
* u(n) is controller output
* k0 = kp + ki + kd
* k1 = -kp     -2kd
* k2 = kd

```cpp
float PID::process(float error, float plant_output)
{
    e1 = e0;
    e0 = error;

    x2 = x1;
    x1 = x0;
    x0 = plant_output;

    u+= k0*e0 + k1*e1 - kd*(x0 - 2*x1 + x2);

    if (u > limit)
      u = limit;

    if (u < -limit)
      u = -limit;

    return u;
}
```

motors controllers step response :

<img src="doc/images/motor_controll.png" width="500">





## debug application

<img src="doc/images/debug_app.png" width="700">

There is debug application written in Python. Data received from robot are visualised in custom GUI written
using OpenGL. Data are transfered in JSON format.

Robot GUI is also designed in json - to modify gui design, only this file need to be modified. Example of gui.json file format : 

```json
"widgets" :
  {
    "type"      : "label",
    "position"  : [0.0, 0.0, 0.0],
    "color"     : [1.0, 0.0, 0.0],
    "font_size" : 0.1,

    "widgets" : [
                  {
                    "type"           : "bar_graph",
                    "position"       : [-2.0, 1.25, 0.0],
                    "color"          : [0.5, 1.0, 0.0],
                    "bar_color"      : [0.8, 0.8, 0.8],

                    "font_size" : 0.05,

                    "width"     : 1.5,
                    "height"    : 0.5,

                    "filled"    : false,
                    "enlight_max_value" : false,

                    "frame_width" : 0.01,
                    "label"     : "LINE SENSORS",

                    "min_value" : 0.0,
                    "max_value" : 1024.0,

                    "variable"  : {
                                    "name"  : "line_sensors",
                                    "value" : [3, 40, 500, 1000, 700, 50, 0, 0]
                                  }
                  },
...
```


