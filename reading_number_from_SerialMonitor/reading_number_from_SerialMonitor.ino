int blinkLed = 8;
int numOfBlinks;
String msg = "Enter the number of blinks : "; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(blinkLed , OUTPUT);
}

void loop() {
  Serial.println(msg);

  while(Serial.available() == 0)
  {
  }
  numOfBlinks = Serial.parseInt();

   for(int i = 1 ; i<= numOfBlinks ; i++)
   {
    
    digitalWrite(blinkLed , HIGH);
    delay(500);
    digitalWrite(blinkLed , LOW);
    delay(500);
    
   }

}
