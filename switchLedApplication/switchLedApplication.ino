const int pinLed = 12;
const int pinSwitch = 13;

bool flagLed = false;   // flagLed는 0 / 1 값만 가질 수 있음

void setup() {
  Serial.begin(115200);
  pinMode(pinLed, OUTPUT);
  pinMode(pinSwitch, INPUT);
  Serial.println("SWITCH / LED Application");
}

void loop() {
  if(!digitalRead(pinSwitch)) {
    if(flagLed == false) {           // LED 꺼져 있을 때
      digitalWrite(pinLed, HIGH);
      Serial.println("LED ON");
      flagLed = true;                // LED 상태 ON
    }
    else {                           // LED 켜져 있을 때
      digitalWrite(pinLed, LOW);
      Serial.println("LED OFF");    // LED 상태 OFF
      flagLed = false;
    }
  }
  delay(500);
}
