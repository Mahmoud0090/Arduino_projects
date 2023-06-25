
int brightUpButton = 7;
int brightDownButton = 8;
int b1Value = 1;
int b2Value = 1;
int led = 3;
int ledBrightnessVal = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(brightUpButton , INPUT);
  pinMode(brightDownButton , INPUT);
  pinMode(led , OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  b1Value = digitalRead(brightUpButton);
  b2Value = digitalRead(brightDownButton);
  if(b1Value == 0)
  {
    ledBrightnessVal+=5;
  }
  if(b2Value == 0)
  {
    ledBrightnessVal-=5;
  }
  if(ledBrightnessVal>255)
  {
    ledBrightnessVal = 255;
  }
  if(ledBrightnessVal<0)
  {
    ledBrightnessVal = 0;
  }
  Serial.println(ledBrightnessVal);
  analogWrite(led, ledBrightnessVal);
  delay(250);
}
