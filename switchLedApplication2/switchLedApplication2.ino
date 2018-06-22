const int aPinLed[4] = {13,12,11,10};
const int aPinSwitch[4] = {9,8,7,6};

bool aFlagLed[4] = {false,};

void setup() {
  Serial.begin(115200);
  for(int i=0; i<4; i++) {
    pinMode(aPinLed[i], OUTPUT);
    pinMode(aPinSwitch[i], INPUT);
  }
  Serial.println("SWITCH / LED Application");
}

void loop() {
  for(int i=0; i<4; i++) {
    if(digitalRead(aPinSwitch[i]) == 0) {
      if(aFlagLed[i] == false) {        // i번째 LED가 꺼져 있을 때
        digitalWrite(aPinLed[i], HIGH);
        Serial.println(String(i) + "# LED ON");
        aFlagLed[i] = true;
      }
      else {                            // i번째 LED가 켜져 있을 때
        digitalWrite(aPinLed[i], LOW);
        Serial.println(String(i) + "# LED OFF");
        aFlagLed[i] = false;
      }
    }
  }
  delay(100);
}
