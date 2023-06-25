
int phoresisPin = A0;
int resisPin = A1;
int led1 = A2;
int led2 = A3;
int led3 = A4;

void setup() {
  // put your setup code here, to run once:
  pinMode(phoresisPin , INPUT);
  pinMode(resisPin , INPUT);
  pinMode(led1 , OUTPUT);
  pinMode(led2 , OUTPUT);
  pinMode(led3 , OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int photoVoltage = analogRead(phoresisPin);
  int resisVoltage = analogRead(resisPin);

  float diff = photoVoltage - resisVoltage;
  float val = (diff * 255)/1023.0;

  analogWrite(led1 , val);
  analogWrite(led2 , val);
  analogWrite(led3 , val);
}
