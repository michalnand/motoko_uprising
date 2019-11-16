# Motoko Uprising
## line following robot with neural network predictor

Advanced line following robot, using custom deep neural network for curve shape prediction.
Robot can recognize straight line and speed up.


Video of woking robot [motoko video](https://www.youtube.com/watch?v=E9FJIDowNmU).


<img src="doc/images/robot.jpg" width="800">



###### Hardware

*CPU is ARM Cortex M4F, stm32f303, 73MHz
 *with simd instructions, good to have for deep learning
*gyroscope : lsm303 
 *(or something like THAT - yeah, they are changing it more often then socks)
*motors : pololu HP 1:30, micro metal gear, with magnetic encoders
*motor driver : TI DRV8834
*line sensors : phototransitors for visible light (not IR)
 *Iam using white leds, so the line can be colored - not only black
*accu : LiPol 2S, 150mAh, from dualsky

<img src="doc/diagrams/motoko_uprising_hw.png" width="500">
<img src="doc/diagrams/robot_mount_01.jpg" width="500">



###### Software

<img src="doc/diagrams/line_classification.png" width="500">


<img src="doc/diagrams/line_following_net.png" width="500">

