const int pinLed = 12;
const int pinSwitch = 13;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinSwitch, INPUT);

}

void loop() {
  if(digitalRead(pinSwitch) == 0) { // 스위치를 눌렀을 때 -> 13번핀 LOW
    digitalWrite(pinLed, HIGH);     // LED(12번핀) 5V
  }
  else {                            // 스위치를 누르지 않았을 때 -> 13번핀 HIGH
    digitalWrite(pinLed, LOW);      // LED(12번핀) 0V
  }

}
