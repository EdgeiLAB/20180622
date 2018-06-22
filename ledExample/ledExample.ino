int pinLed[8] = {2,3,4,5,6,7,8,9};

void setup() {
  for(int i=0; i<8; i++){
    pinMode(pinLed[i], OUTPUT);
  }
}

void loop() {
  for(int i=0; i<8; i++) {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(1000);
  for(int i=0; i<8; i++) {
    digitalWrite(pinLed[i], LOW);
  }
  delay(1000);
}
