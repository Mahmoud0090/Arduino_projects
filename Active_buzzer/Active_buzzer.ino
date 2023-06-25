int pin = A0;
int val;
int buzz = 8;
int dt = 200;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pin , INPUT);
pinMode(buzz , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(pin);
  
  Serial.println(val);

  if(val>1000)
  {
    digitalWrite(buzz , HIGH);
    delay(dt);
    digitalWrite(buzz , LOW);
    delay(1000);
  }
}
