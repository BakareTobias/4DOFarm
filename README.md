# A Four-Degree of Freedom Robotic Arm Remote Controlled via Bluetooth

On August 3rd, 2024, I completed a robotic arm that I started working on a few weeks prior. It is a 4-Degree of Freedom robotic arm controlled by a self-made remote control app via a Bluetooth module.

## Theory

A robotic arm is a type of programmable mechanical arm that mimics the functions of a human arm. It can be an independent mechanism or part of a more complex system. The links of such a manipulator are connected by joints, allowing either rotational motion or translational displacement.

## Degrees of Freedom

In robotics, the term "degree of freedom" describes an axis of movement in a joint. Each joint can have up to three possible degrees of freedom: pivoting up and down, left and right, and twisting clockwise or counterclockwise. For example, an elbow has 1 degree of freedom, an ankle has 2, and a neck has 3. To determine a robot's total number of degrees of freedom, the values for each joint are summed.

In this project, all joints have only 1 degree of freedom each.

The four axes this robot operates on are:
- **Base Axis**: Swivels the robot at the base.
- **Shoulder Axis**: Extends or retracts the arm linearly.
- **Elbow Axis**: Provides vertical movement capabilities.
- **Wrist Axis**: Controls the grip of the attached claw component.

## HC-05

The HC-05 is a popular Bluetooth module used in robotics for wireless communication. It enables devices, such as Arduino microcontrollers, to communicate wirelessly with other Bluetooth-enabled devices.

## MIT App Inventor

MIT App Inventor is a high-level, block-based visual programming language maintained by the Massachusetts Institute of Technology. It is an open-source solution for building applications for Android and iOS devices. The interface is a GUI that allows users to drag and drop visual objects to create applications.

## Implementation

### Items Used
1. A DIY acrylic robot kit (including robot arm parts, 4 motors, and screws/nuts needed for assembly)
2. An Arduino Uno R3
3. The Bluetooth HC-05 module (an HC-06 module will work just as well)
4. Jumper wires
5. A 5V power source*
6. An Android phone**

*Note: I made a battery holder that held 4 AA 1.5V batteries connected in series using cardboard, tin foil, and superglue. The 1V surplus is within safe limits.

**iOS is incompatible with the HC-05 module.

### Assembly

I assembled the arm using this [link](insert link).

### Circuit Connections

### Arduino

The Arduino script is available in this repository: [insert link].

### MIT App Inventor Website

The app was designed using MIT App Inventor.
