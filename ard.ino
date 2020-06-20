int IR = 3;
int LED = 12;

void setup() {
  // put your setup code here, to run once:
   Serial.begin(57600);
   pinMode(IR,INPUT);
   pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int z = digitalRead(IR);
  if (z == HIGH)
  {
    digitalWrite(LED,HIGH);
  }
  if (z == LOW)
  {
    digitalWrite(LED,LOW);
  }
}
