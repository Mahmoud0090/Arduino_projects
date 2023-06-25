
int readPin = A1;
int gLed = 6;
float v;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin , INPUT);
  pinMode(gLed , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  v = analogRead(A1);
  v = v * 255./(1023);
  analogWrite(gLed , v);
  Serial.println(v);
  delay(500);
}
