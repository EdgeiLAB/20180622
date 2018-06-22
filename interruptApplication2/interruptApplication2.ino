const int aPinLed[2] = {13,12};
bool aFlagLed[2] = {false,};  // {false,false}

int count = 0;

void setup() {
  Serial.begin(115200);
  pinMode(aPinLed[0], OUTPUT);
  pinMode(aPinLed[1], OUTPUT);

  // 파라미터 : Interrupt 핀, 함수, Mode
  attachInterrupt(3, blink01, FALLING);
  attachInterrupt(4, blink02, RISING);
}

void loop() {
  count++;  // count = count+1;
  Serial.println("count : " + String(count));
  delay(5000);
}

void blink01() {
  // false이면 true로 변환, true이면 false으로 변환
  aFlagLed[0] = !aFlagLed[0]; 
  digitalWrite(aPinLed[0], aFlagLed[0]);
  Serial.println("Switch 20 Pushed");
}

void blink02() {
  aFlagLed[1] = !aFlagLed[1];
  digitalWrite(aPinLed[1], aFlagLed[1]);  
  Serial.println("Switch 19 Pushed");  
}

