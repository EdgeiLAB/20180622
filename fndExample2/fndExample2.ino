const int aPinFndData[8] = {13,12,11,10,9,8,7,6};
const int aPinFndSelect[6] = {22,23,24,25,26,27};

void setup() {
  for(int i=0; i<8; i++) {
    pinMode(aPinFndData[i], OUTPUT);
  }
  for(int i=0; i<6; i++) {
    pinMode(aPinFndSelect[i], OUTPUT);
    digitalWrite(aPinFndSelect[i], LOW);
  }
}

void loop() {
  digitalWrite(aPinFndSelect[0], HIGH);   // 1의자리
  digitalWrite(aPinFndSelect[1], HIGH);   // 10의자리
  digitalWrite(aPinFndSelect[2], HIGH);   // 100의자리
  digitalWrite(aPinFndSelect[3], HIGH);   // 1000의자리
  digitalWrite(aPinFndSelect[4], HIGH);   // 10000의자리
  digitalWrite(aPinFndSelect[5], LOW);   // 100000의자리

  for(int i=0; i<10; i++) {
    displayNumber(i);
    delay(1000);
  }
}


