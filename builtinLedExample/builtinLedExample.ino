void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);   // 13번핀에다 5V
  delay(500);      /// 1000ms = 1초
  digitalWrite(13, LOW);    // 13번핀에다 0V
  delay(500);

}
