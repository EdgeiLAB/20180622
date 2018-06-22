int pinLed = 13;
int pinInterrupt = 0;
int state = LOW;

void setup() {
  pinMode(pinLed, OUTPUT);
  attachInterrupt(pinInterrupt, blink, CHANGE);
}
void loop() {

}

void blink() {
  state = !state;   // state가 LOW 일때 state 는 HIGH
  digitalWrite(pinLed, state); // LED ON / OFF
}

