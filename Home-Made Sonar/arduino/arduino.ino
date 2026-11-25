#include <Servo.h>

const int trigPin = 10;
const int echoPin = 11;
const int servoPin = 12;

Servo myServo;

int calculateDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH, 30000); // 30 ms timeout
  if (duration == 0) return 999;                 // nothing detected
  return duration * 0.034 / 2;                   // cm
}

void sendReading(int angle) {
  int distance = calculateDistance();
  Serial.print(angle);
  Serial.print(",");
  Serial.print(distance);
  Serial.print("."); // Processing splits packets on '.'
}

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  for (int i = 15; i <= 165; i++) {
    myServo.write(i);
    delay(30);
    sendReading(i);
  }
  for (int i = 165; i > 15; i--) {
    myServo.write(i);
    delay(30);
    sendReading(i);
  }
}