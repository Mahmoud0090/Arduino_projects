int bluePin = 2;
int greenPin = 7;
int redPin = 4;
String msg = "welcome , enter a color : ";

String input;

void setup() {
  // put your setup code here, to run once:
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin , OUTPUT);
  pinMode(redPin , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);

  while(Serial.available() == 0)
  {
  }

  input = Serial.readString();

  if(input=="red")
  {
    digitalWrite(redPin , HIGH);
    digitalWrite(greenPin , LOW);
    digitalWrite(bluePin , LOW);
  }
  if(input=="green")
  {
    digitalWrite(redPin , LOW);
    digitalWrite(greenPin , HIGH);
    digitalWrite(bluePin , LOW);
  }
  if(input=="blue")
  {
    digitalWrite(redPin , LOW);
    digitalWrite(greenPin , LOW);
    digitalWrite(bluePin , HIGH);
  }
  if(input == "all")
  {
    digitalWrite(redPin , HIGH);
    digitalWrite(greenPin , HIGH);
    digitalWrite(bluePin , HIGH);
  }
  if(input == "off")
  {
    digitalWrite(redPin , LOW);
    digitalWrite(greenPin , LOW);
    digitalWrite(bluePin , LOW);
  }
}
