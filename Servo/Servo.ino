#include <Servo.h>
int Servopin = 9;
int ServoPos = 180;
Servo myServo;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(Servopin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("enter the angle : ");
  while(Serial.available() == 0)
  {
  }
  ServoPos = Serial.parseInt();
  myServo.write(ServoPos);
}
