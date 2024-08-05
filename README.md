# 4DOFarm
a breakdown of how i put together a robotic arm and controlled it via bluetooth 
On August 3rd 2024 i completed the robotic arm  i started wrking on a couple weeks prior. It is a 4 Degree of Fredom robotic arm that is controlled by a 
self made remote control app via a bluetooth module

**Items used**
1. A DIY acrylic robot kit (robot arm parts, 4 motors, and the screws/nuts needed to put it all together)
2. An Arduino Uno R3
3. The bluetooth HC-05 module(an HC-06 module will work just as well for this)
4. Jumper wires
5. A 5v power source*
6. An android phone**

*i made a battery holder that held 4 AA 1.5v batteries connected in series using cardboard, tin foil, and superglue. a 1v surplus is within safe limits

**iOS is incompatible with the HC-05 module 


**Assembly**
I assembled the arm using this link


	4 DOF ROBOTIC ARM
A robotic arm is a type of programmable mechanical arm, with similar functions to a human arm; the arm may be an independent mechanism, or may be 
art of a more complex system. the links of suc a manipulator are connected by joints allowing either rotationalmotion or translational displacement

DEGREES OF FREEDOM
The degrees of freedom in robotic arms speaks to the ability of the arm to movei in multiple directions/axes. this number ranges from 1
to as high as 

The term degree of freedom is used in robotics to diescribe an axis of movement in a joint. an individual joint has 3 possible degrees of 
freedom - pivoting up and down, left and right, and twisting clockwise/counter clockwise. to calculate a a robot's total number of degrees of freedom,
 the values for each joint are added together

It is worth noting that depending on the aplication, more DoF is not always better. For my project, i have implemented a 4 DoF.

the four axes this robot will operate on are:
- Base axis - swiveling the robt at the base
- Shoulder axis : vertical movement capabilities
-elbow axis : extends/retracts the arm linearly
- wrist axis : controls the grip of the attached claw component

HC-05
the hc-05 is a popular bluetooth module used in robotics for wireless communication. it allows devices eg Arduino microcontrollers
to communicate wirelessly with other Bluetooth-enabled devices


Assembly
i assembled the arm according to a youtube video i found online
[insert pictures]

Programming Arduino
[insert program]

MIT App Inentor
MIT App Inventor is a high level block bases visual programming language maintained by the MIT. it is an open source 
solution to building pplications for Android and iOS devices. the interface is a GUI allowing users to drag and drop visual obects to 
create an application
the mit app inventor website is what i used to create the remote control app for the robotic arm. attached below are screensnis of the 
application design, and the logic blocks that make the app work 
