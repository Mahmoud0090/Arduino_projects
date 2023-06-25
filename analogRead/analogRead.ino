
int readPin = A3;
int v1;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin , INPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  v1 = analogRead(readPin);
  Serial.println(v1);
  delay(500);
}
