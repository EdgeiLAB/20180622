const int pinLed = 13;

void setup() {
  Serial.begin(115200);
  pinMode(pinLed, OUTPUT);
  Serial.println(" O : LED 켜기 / X : LED 끄기");
}

void loop() {

}


void serialEvent() {
  char ch;
  ch = Serial.read();
  Serial.println("입력된 값 : " + String(ch));

  if(ch == 'O') {  // 입력된 값이 영어 O일 경우
    Serial.println("LED ON");
    digitalWrite(pinLed, HIGH);   
  }
  else if(ch == 'X') {        // 입력된 값이 영어 O가 아닐 경우
    Serial.println("LED OFF");
    digitalWrite(pinLed, LOW);
  }
}

