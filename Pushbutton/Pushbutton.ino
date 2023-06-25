
int buttonPin = 4;
int ledPin = 2;
int buttonRead;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin , INPUT);
  pinMode(ledPin , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead = digitalRead(buttonPin);

  if(buttonRead == 1)
  {
    digitalWrite(ledPin , LOW);
  }

  if(buttonRead == 0)
  {
    digitalWrite(ledPin , HIGH);
  }
}
