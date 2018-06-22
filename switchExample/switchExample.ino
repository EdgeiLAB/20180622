const int pinSwitch = 13;

void setup() {
  Serial.begin(115200);
  pinMode(pinSwitch, INPUT);
}

void loop() {

//  tmp  = digitalRead(pinSwitch);  // pinSwitch가 0V에 연결되어있으면, LOW == 0, 
                                  // pinSwitch가 5V에 연결되어있으면, HIGH == 1
                                  // 반환됨
                                  
  if(!digitalRead(pinSwitch)) {
    Serial.println("Pushed");
  }
  delay(1000);
}
