int buttonPin = 4;
int ledPin = 2;
int buttonNew;
int buttonOld = 0;
int ledState =0;
int dt = 100;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin , INPUT);
  pinMode(ledPin , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNew = digitalRead(buttonPin);

  if(buttonNew == 1 && buttonOld == 0)
  {
    if(ledState == 0)
    {
      digitalWrite(ledPin , HIGH);
      ledState = 1;
    }

    else
    {
      digitalWrite(ledPin , LOW);
      ledState = 0;
    }
  }
  buttonOld = buttonNew;
  delay(dt);
}
