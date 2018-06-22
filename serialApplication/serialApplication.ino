const int pinLed = 13;

void setup() {
  Serial.begin(115200);
  Serial.println("O : LED ON / X : LED OFF");

  pinMode(pinLed, OUTPUT);
}




void loop() {
  char ch;                    // ch 변수 선언
  if(Serial.available()) {      /// 시리얼 버퍼에 값이 있는 확인
    ch = Serial.read();       // 시리얼버퍼에 있는 값을 ch 변수에 저장
    Serial.println("Ch : " + String(ch));   // ch 변수 출력
  }

  if(ch == 'o' || ch == 'O') {  // ch 가 대/소문자 o이면
    digitalWrite(pinLed, HIGH); // LED 5V 연결
    Serial.println("LED ON");   // LED ON 출력
  }
  else if(ch == 'x' || ch == 'X') {   // ch 가 대/소문자 x이면
    digitalWrite(pinLed, LOW);    // LED 0V 연결 / OFF
    Serial.println("LED OFF");  // LED OFF 출력
  }
  delay(1000);
}
