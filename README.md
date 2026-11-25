This is a simple radar built with a sensor and an Arduino UNO.

Prerequisites:

You'll need to install Arduino IDE and Processing IDE for this project to work.

Bill Of Materials:

1. An Arduino UNO
2. Ultrasonic Distance Sensor (I used an HC-SR04)
3. A breadboard (any will do)
4. A servo motor (I used an MG90S micro servo, but almost any will do)
5. Some jumper wires to connect to the Arduino, breadboard, sensor and servo motor

Installation:

1. Make sure you have the Processing IDE and Arduino IDE properly set up
2. Clone this repo
3. Open the folder
4. Open the file ending in .ino
5. Connect the jumper cables from the ultrasonic sensor to the Arduino in the following way:
   - VCC to 5V
   - TRIG to 2
   - ECHO to 3
   - GND to the GND pin
6. Next, connect the cables from the servo motor to the Arduino in the following way:
   - Red to 5V
   - Brown to Ground
   - Orange to 4

   (You'll need to use the breadboard for this part since there's only one 5V)
7. Attach the servo motor to the ultrasonic sensor (I used superglue)
8. Upload the .ino file to the Arduino
9. Change the port inside the .pde file to the appropriate port for your device
10. Make sure the servo motor is spinning, then run the .pde file
11. A program will open with a radar-ish graphic that updates in real time

That's it, Happy Sensing!
(if you find any errors, dont ask me, im still a noobie, ask claude)
