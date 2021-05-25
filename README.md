# Youtube link (Eyantra)
https://youtu.be/E0nhWBChqD8

# Title of the Project
Wearable device for tracking of PEF(Peak expiratory flow) and RR(respiratory rate) for covid-19 patients.

# Description
A wearable device for tracking PEF (Peak expiratory flow) and RR (respiration rate) for covid patients consists of a belt that must be worn on the chest and will provide patients and clinicians with information about an individual's lung performance. Peak expiratory flow decreases in Covid-19 patients, who also experience shortness of breath. If the vitals fall below the required level, the patient will be aware and can take appropriate precautions or medication. As the covid-19 patients who are receiving treatment at home require proper monitoring of these vitals to ensure that they are in good health and won't require critical care. This proposed device will also be beneficial in the recovery process.

# Hardware and Software Requirements
1.  FSR(force sensitive resistor) : Interlink Electronics FSR® 402 is part of the single zone Force Sensing Resistor® family. Force Sensing Resistors (FSRs) are resistive sensors exhibiting varying resistance that responds to force applied to the sensing area. As force on the sensor is increased, this resistance is decreased. In the simplest layout configuration (Single-Zone), an FSR is a two-terminal device that can essentially be treated as a variable resistor whose value is controlled by applied force.The acquisition of the bio-signals in this case is done using FSR, the change in the pressure of the lungs helps to achieve the respiration rate and the PEF readings. The sensor used to obtain the signals is the FSR (Force-sensing resistor) which is a material whose resistance changes when a force, pressure or mechanical stress is applied. The sensor consists of a conductive polymer, which changes resistance in a manner following application of force to its surface. So when there is inhalation and exhalation, the FSR attached to the chest strap helps to know the shift in the thoracic pressure and hence the signals can be received.                            
Technical Details: 
✓ Actuation force as low as 0.2N and sensitivity range to 20N
✓ Size 13 mm circle * 56 mm
✓ Cost effective
✓ Operating Voltage -5V
✓ Device Rise Time – 3 Microseconds
✓ Ultra-thin
✓ Robust; up to 10M actuations
✓ Simple and easy to integrate

2. Arduino uno R3: The Atmega328 is one of the popular microcontrollers and more advance 8-bit chip used in Arduino Demilune boards. Microcontroller has 32KB of flash memory, 1KB of EPROM, and 2KB of internal SRAM. Operation voltage required is 5V, while recommended input voltage for Arduino board is 7-12V and limits is 6-20V. DC current for each I/O pin on board is 40 mA while DC current for 3.3V pin is 50mA. The Atmega328 is a low-power CMOS 8-bit microcontroller based on the AVR enhanced RISC architecture. By executing powerful instructions in a single clock cycle, the Atmega328 achieves throughputs approaching 1 MIPS per MHz allowing the system designer to optimize power consumption versus processing speed. The Atmega328 has 28 pins. It has 14 digital I/O pins, of which 6 can be used as PWM outputs and 6 analog input pins. These I/O pins account for 20 of the pins.

# Process Flow
![RR flowchart](https://user-images.githubusercontent.com/72030784/119257604-9d8a7800-bbe3-11eb-8993-b94e98751bb8.jpg)
![PEF flowchart](https://user-images.githubusercontent.com/72030784/119262940-a175c480-bbfa-11eb-982e-6f3f85eec73a.jpg)

