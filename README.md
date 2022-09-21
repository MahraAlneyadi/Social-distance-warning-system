# Social-distance-warning-system
 This project mainly focuses on dealing with violations of social distance seats in public areas. The proposed system is expected to detect high tension on the blocked seat and alarm the violator. It consists of a force-sensitive resistance sensor connected to an Atmega328p microcontroller with 3 LEDs and a Buzzer to warn if any violation occurred. The system was first applied on Tinkercad and worked as expected with high performance and reliability. The future modification will be focusing on developing the design and expanding the use of the device to be operating in several cases. In addition, Following the constant changes in pandemic cases and preventive measures, there is a need for further system designs to limit ignorance and violations that affect the world’s recovery and human lives. 


![Image](https://user-images.githubusercontent.com/114052832/191447807-9ec5dab5-d824-4a00-b158-18d9ad004cca.jpg)



The proposed system is assumed to operate by alarming any social distancing violation of seats occurs. The designed hardware consists of a force-sensitive resistor (FSR) sensor with a resistance that senses any applied force or pressure. The sensor is connected to an ATmega328p microcontroller with three LEDs and a buzzer to make a buzzing sound whenever high pressure is detected. Moreover, the applied force is classified into three levels. These levels are indicated by three LEDs as follows:

• Green LED indicates to 0 pressure.

• Yellow LED indicates light pressure between 1V to 2.5V. 

• Red LED with buzzer points out a high force bigger than 2.5V.

With these indicators, the system will be able to deal with the issue of false violation of social distancing seats. 


![Image](https://user-images.githubusercontent.com/114052832/191447688-134976b1-2e21-4b41-a4c3-6ce75da6ac5f.png)




The device is expected to operate according to the set of instructions are made. Once the microcontroller is initialized, the FSR sensor is activated. It will keep measuring the pressure on the seat. There is no violati on if the pressure is zero. The yellow LED will automatically turn on if the sensor detects a light object on the seat, while the red LED and the buzzer will start alarming if a violation occurs. Figure 2A flowchart of the warning system



How it works:
https://user-images.githubusercontent.com/114052832/191447860-b5d3db59-f05e-4ecd-85a7-83c2da34456b.mp4
