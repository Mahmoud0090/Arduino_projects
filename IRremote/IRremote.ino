#include <IRremote.h>
int IRpin = 8;
int yellowPin = 10;
int redPin = 9;
int greenPin = 6;
int bluePin = 5;
int brightness = 255;
String col;

IRrecv IR(IRpin);
decode_results cmd;
String button;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IR.enableIRIn();
  pinMode(yellowPin , OUTPUT);
  pinMode(redPin , OUTPUT);
  pinMode(greenPin , OUTPUT);
  pinMode(bluePin , OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  while(IR.decode(&cmd) == 0)
  {
  }
  Serial.println(cmd.value , HEX);
  //delay(500);
  IR.resume();
  if(cmd.value == 0xFFA25D)
  {
    button = "one";
    Serial.println(button);
    col = "yellow";
    Light(col);
  }
  if(cmd.value == 0xFF629D)
  {
    button = "two";
    Serial.println(button);
    col = "red";
    Light(col);
  }
  if(cmd.value == 0xFFE21D)
  {
    button = "three";
    Serial.println(button);
    col = "green";
    Light(col);
    
  }
  if(cmd.value == 0xFF22DD)
  {
    button = "four";
    Serial.println(button);
    col = "blue";
    Light(col);
  }
  if(cmd.value == 0xFF02FD)
  {
    button = "five";
    Serial.println(button);
  }
  if(cmd.value == 0xFFC23D)
  {
    button = "six";
    Serial.println(button);
  }
  if(cmd.value == 0xFFE01F)
  {
    button = "seven";
    Serial.println(button);
  }
  if(cmd.value == 0xFFA857)
  {
    button = "eight";
    Serial.println(button);
  }
  if(cmd.value == 0xFF906F)
  {
    button = "nine";
    Serial.println(button);
  }
  if(cmd.value == 0xFF9867)
  {
    button = "zero";
    Serial.println(button);
    col = "offCol";
    Light(col);
  }
  if(cmd.value == 0xFF6897)
  {
    button = "star";
    Serial.println(button);
  }
  if(cmd.value == 0xFFB04F)
  {
    button = "hash";
    Serial.println(button);
  }
  if(cmd.value == 0xFF18E7)
  {
    button = "up";
    Serial.println(button);
    brightness+=5;
    if(brightness > 255)
    {
      brightness = 255;
    }
    Light(col);
  }
  if(cmd.value == 0xFF5AA5)
  {
    button = "right";
    Serial.println(button);
  }
  if(cmd.value == 0xFF4AB5)
  {
    button = "down";
    Serial.println(button);
    brightness-=5;
    if(brightness <= 0)
    {
      brightness = 0;
    }
    Light(col);
  }
  if(cmd.value == 0xFF10EF)
  {
    button = "left";
    Serial.println(button);
  }
  if(cmd.value == 0xFF38C7)
  {
    button = "ok";
    Serial.println(button);
    col = "allCol";
    Light(col);
  }
  Serial.println(brightness);
  Serial.println(cmd.value , HEX);
}

void Light(String& color)
{
  if(color == "yellow")
  {
    analogWrite(yellowPin , brightness);
    analogWrite(redPin , 0);
    analogWrite(greenPin , 0);
    analogWrite(bluePin , 0);
  }
  if(color == "red")
  {
    analogWrite(yellowPin , 0);
    analogWrite(redPin , brightness);
    analogWrite(greenPin , 0);
    analogWrite(bluePin , 0);
  }
  if(color == "green")
  {
    analogWrite(yellowPin , 0);
    analogWrite(redPin , 0);
    analogWrite(greenPin , brightness);
    analogWrite(bluePin , 0);
  }
  if(color == "blue")
  {
    analogWrite(yellowPin , 0);
    analogWrite(redPin , 0);
    analogWrite(greenPin , 0);
    analogWrite(bluePin , brightness);
  }
  if(color == "allCol")
  {
    analogWrite(yellowPin , brightness);
    analogWrite(redPin , brightness);
    analogWrite(greenPin , brightness);
    analogWrite(bluePin , brightness);
  }
  if(color == "offCol")
  {
    analogWrite(yellowPin , 0);
    analogWrite(redPin , 0);
    analogWrite(greenPin , 0);
    analogWrite(bluePin , 0);
  }
}
