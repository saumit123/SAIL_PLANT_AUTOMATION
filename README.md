# RSP SAIL PLANT AUTOMATION

# PLC Replacement with Arduino and RPM Control

This project aimed to replace an old Programmable Logic Controller (PLC) system in SAIL Rourkela Steel plant with a modern, Arduino-based solution. The primary goal was to implement accurate RPM control for motors using an encoder,current sensor and PID (Proportional-Integral-Derivative) control algorithm. Additionally, custom hardware components were developed, including a logic board and an encoder for acquiring motor RPM data.The Motor was controlled by firing a thyristor stack via the PWM Values

## Description

The PLC Replacement with Arduino and RPM Control project addressed the need for a cost-effective and efficient solution to upgrade the obsolete PLC system. By leveraging the versatility and affordability of Arduino microcontrollers, the project introduced a modular and flexible control system for the plant's operations.

To facilitate the integration of the Arduino-based system, a custom logic board was designed and built. This board served as an interface between the Arduino, the encoder, and the thyristor stack, providing seamless communication and control. Additionally, a custom encoder was developed specifically for this project, ensuring reliable and accurate RPM data acquisition from the motors.

Due to the unavailablity of motor characteristics,the data was manually obtained using sensors and also Polynomial regression was used in order to predict the current values that would be required in the request line of the Motor control.

Additionally openPLC a ladder based software to program PLC cards was also used for some functionalities of another part of a plant.

The project not only replaced the aging PLC but also introduced advanced control capabilities, improved system reliability, and enhanced flexibility for future upgrades or modifications.

## Hardware used
- Arduino MEGA
- Tactile switches for PLC Card
- INA219 Current sensor
- Orange Planetary gear motors for testing
- Encoder for RPM measurement
  
## Software used
- Arduino IDE
- OpenPLC
  
## Key Features

- Replacement of an old PLC system with an Arduino-based control solution
- Accurate RPM control of motors using an encoder and PID algorithm
- Custom-designed logic board for interfacing with Arduino, encoder, and thyristor stack
- Development of a custom encoder for reliable RPM data acquisition
- Improved system reliability and flexibility for future enhancements


