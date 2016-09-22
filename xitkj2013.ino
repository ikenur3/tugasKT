void setup() {
  // intialize digital pin 2 as an output.
    pinMode(2,OUTPUT);
}

void loop() {
  digitalWrite (2,HIGH);
  delay(3500);
  digitalWrite (2,LOW);
  delay(3500); 
}
