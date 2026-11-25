this is a simple radar bulit with a sensor and an arduino uno
i didnt write most of the code, just corrected it a little, aaron125d did

Prequisites:

You'll need to install Arduino IDE and Processing IDE for this project to work

Bill Of Materials:
1) An Arduino UNO
2) Ultra-sonic Distance Sensor (i used an HC-SRO4)
3) A breadboard (any will do)
4) A servo motor (i used an MG90S micro servo, but almost any will do)
5) some jumper wires to connect to the arduino, breadboard, sensor and servo motor

Installation:
1) make sure you have the Processing IDE and Arduino IDE properly set up
2) clone this repo
3) open the folder
4) open the file ending in .ide
5) connect the jumper cables from the ultrasonic sensor to the arduino in the following way:
   VCC connect to 5V
   TRIG to 2 
   ECHO to 3
   GND to the GND PIN 
6) Next, connect the cables from the servo motor to the arduino in the following way:
   Red - 5v
   Brown - Ground
   Orange - 4
(youll need to use the breadboard for this part since theres only one 5v)
7)Attach the servo motor to the ultrasonic sensor ( i used superglue)
8)Upload the .ide file to the arduino
9)Now change the port inside the .pde file to the appropriate port according to your device
10)Make sure the Servo Motor is spinning, then run the .pde file
11)Now a program will open with a radar-ish graphic that updates in real-time
   This is it, so Happy Sensing!
(if you find any errors, dont ask me, im still a noobie, ask claude)
