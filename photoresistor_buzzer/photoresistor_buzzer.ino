
int pin1 = A0;
int pin2 = A1;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(pin1 , INPUT);
  pinMode(pin2 , OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int pin1val = analogRead(pin1);

  float res = ((pin1val * 255.0)/1023.0)+ 100;

  Serial.println(res);

  analogWrite(pin2 , res);
}
