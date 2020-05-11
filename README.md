# Motoko Uprising
## line following robot with neural network predictor

Advanced line following robot, using custom deep neural network for curve shape prediction.
Robot can recognize straight line and speed up.

* Video1 of woking robot [motoko video 1](https://www.youtube.com/watch?v=E9FJIDowNmU)
* Video2 of woking robot [motoko video 2](https://www.youtube.com/watch?v=xUAJ1LA6Xwc)

<img src="doc/video/robot_video.gif" width="800">
<img src="doc/video/debug_video.gif" width="800">

### some photos of robot

<img src="doc/images/IMG_20190701_161143.jpg" width="800">
<img src="doc/images/robot_mount_01.jpg" width="800">
<img src="doc/images/robot_model.png" width="800">
<img src="doc/images/IMG_20190701_133358.jpg" width="800">



###### Hardware

* CPU is ARM Cortex M4F, stm32f303, 73MHz
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


###### Software

**Debug app**
<img src="doc/images/debug_app.png" width="700">


TODO - this will be long journey

<img src="doc/diagrams/line_classification.png" width="500">


<img src="doc/diagrams/line_following_net.png" width="500">

