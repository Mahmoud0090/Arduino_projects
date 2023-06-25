
int xPin = A0;
int yPin = A1;
int SwPin = 9;
int xVal;
int yVal;
int SwVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(xPin , INPUT);
  pinMode(yPin , INPUT);
  pinMode(SwPin , INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  SwVal = digitalRead(SwPin);

  Serial.print("xval : ");
  Serial.println(xVal);
  Serial.print("yval : ");
  Serial.println(yVal);
  Serial.print("SwVal : ");
  Serial.println(SwVal);
  
  delay(1000);
}
