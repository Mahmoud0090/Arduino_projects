
#include <Servo.h>
int lightVal;
int servoPin = 9;
int lightPin = A0;
int dt = 250;
int angle;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(servoPin, OUTPUT);
  myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  //when light is on lightVal is measured to be 150 and 15 when the light is off
  if(lightVal > 150)
  {
    lightVal = 150;
  }

  if(lightVal < 15)
  {
    lightVal = 0;
  }
  
  angle = (lightVal * 180)/(150);
  Serial.println(lightVal);
  myServo.write(angle);
  delay(dt);
}
