#include <IRremote.h>

const int switchPin = 7;
int buttonState = 0;
bool on = false;
IRsend Irsend;


void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin , INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(switchPin);
  if(buttonState == HIGH && !on)//switch on the led
  {
    Irsend.sendNEC(0xFF38C7, 32);
    on = true;
  }
  else if(buttonState == HIGH && on)//switch off the led
  {
    Irsend.sendNEC(0xFF9867, 32);
    on = false;
  }
  delay(200);
}
