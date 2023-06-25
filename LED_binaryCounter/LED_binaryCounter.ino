
int pinNum1 = 8;
int pinNum2 = 9;
int pinNum3 = 10;
int pinNum4 = 11;
int delayTime = 200                                                                                                                                                                         ;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinNum1 , OUTPUT);
  pinMode(pinNum2 , OUTPUT);
  pinMode(pinNum3 , OUTPUT);
  pinMode(pinNum4 , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinNum1 , LOW);
  digitalWrite(pinNum2 , LOW);
  digitalWrite(pinNum3 , LOW);
  digitalWrite(pinNum4 , LOW);

  delay(delayTime);

  digitalWrite(pinNum1 , LOW);
  digitalWrite(pinNum2 , LOW);
  digitalWrite(pinNum3 , LOW);
  digitalWrite(pinNum4 , HIGH);

  delay(delayTime);

  digitalWrite(pinNum1 , LOW);
  digitalWrite(pinNum2 , LOW);
  digitalWrite(pinNum3 , HIGH);
  digitalWrite(pinNum4 , LOW);

  delay(delayTime);

  digitalWrite(pinNum1 , LOW);
  digitalWrite(pinNum2 , LOW);
  digitalWrite(pinNum3 , HIGH);
  digitalWrite(pinNum4 , HIGH);

  delay(delayTime);

  digitalWrite(pinNum1 , LOW);
  digitalWrite(pinNum2 , HIGH);
  digitalWrite(pinNum3 , LOW);
  digitalWrite(pinNum4 , LOW);

  delay(delayTime);

  digitalWrite(pinNum1 , LOW);
  digitalWrite(pinNum2 , HIGH);
  digitalWrite(pinNum3 , LOW);
  digitalWrite(pinNum4 , HIGH);

  delay(delayTime);

  digitalWrite(pinNum1 , LOW);
  digitalWrite(pinNum2 , HIGH);
  digitalWrite(pinNum3 , HIGH);
  digitalWrite(pinNum4 , LOW);

  delay(delayTime);

  digitalWrite(pinNum1 , LOW);
  digitalWrite(pinNum2 , HIGH);
  digitalWrite(pinNum3 , HIGH);
  digitalWrite(pinNum4 , HIGH);

  delay(delayTime);

  digitalWrite(pinNum1 , HIGH);
  digitalWrite(pinNum2 , LOW);
  digitalWrite(pinNum3 , LOW);
  digitalWrite(pinNum4 , LOW);

  delay(delayTime);

  digitalWrite(pinNum1 , HIGH);
  digitalWrite(pinNum2 , LOW);
  digitalWrite(pinNum3 , LOW);
  digitalWrite(pinNum4 , HIGH);

  delay(delayTime);

  digitalWrite(pinNum1 , HIGH);
  digitalWrite(pinNum2 , LOW);
  digitalWrite(pinNum3 , HIGH);
  digitalWrite(pinNum4 , LOW);

  delay(delayTime);

  digitalWrite(pinNum1 , HIGH);
  digitalWrite(pinNum2 , LOW);
  digitalWrite(pinNum3 , HIGH);
  digitalWrite(pinNum4 , HIGH);

  delay(delayTime);

  digitalWrite(pinNum1 , HIGH);
  digitalWrite(pinNum2 , HIGH);
  digitalWrite(pinNum3 , LOW);
  digitalWrite(pinNum4 , LOW);

  delay(delayTime);

  digitalWrite(pinNum1 , HIGH);
  digitalWrite(pinNum2 , HIGH);
  digitalWrite(pinNum3 , LOW);
  digitalWrite(pinNum4 , HIGH);

  delay(delayTime);

  digitalWrite(pinNum1 , HIGH);
  digitalWrite(pinNum2 , HIGH);
  digitalWrite(pinNum3 , HIGH);
  digitalWrite(pinNum4 , LOW);

  delay(delayTime);

  digitalWrite(pinNum1 , HIGH);
  digitalWrite(pinNum2 , HIGH);
  digitalWrite(pinNum3 , HIGH);
  digitalWrite(pinNum4 , HIGH);

  delay(1000);
}
