const int aPinFndData[8] = {13,12,11,10,9,8,7,6}; // 디지털 핀 13~10
const int aPinFndSel[6] = {22,23,24,25,26,27};    // 디지털 핀 22~27

//const int aFndData0 = B00111111;    // 2진수 = 0
//const int aFndData1 = B00000110;    // 2진수 = 1
//const int aFndData2 = B01011011;    // 2진수 = 2

// FND를 표현하기 위한 숫자 0~9까지의 16진수
const int aFndData[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66,
                          0x6D, 0x7D, 0x27, 0x7F, 0x6F};

const int aFndSel[6] = {0x3E, 0x3D, 0x3B, 0x37, 0x2F, 0x1F};


void setup() {
  for(int i=0; i<8; i++) {
    pinMode(aPinFndData[i], OUTPUT);
  }
  for(int i=0; i<6; i++) {
    pinMode(aPinFndSel[i], OUTPUT);
  }
}

void loop() {
  // 자리수 표현 
/*
  // 1의 자리 표현 : B111110
  // 10의 자리 표현 : B111101
  digitalWrite(aPinFndSel[0], LOW);      // 1의 자리     0
  digitalWrite(aPinFndSel[1], HIGH);      // 10의 자리   1
  digitalWrite(aPinFndSel[2], HIGH);      // 100의 자리  1
  digitalWrite(aPinFndSel[3], HIGH);      // 1000의 자리 1
  digitalWrite(aPinFndSel[4], HIGH);      // 10000의 자리  1
  digitalWrite(aPinFndSel[5], HIGH);      // 100000의 자리 1
*/
  for(int i=0; i<6; i++) {
    digitalWrite(aPinFndSel[i], (aFndSel[0] >> i) & 1);
  }
  // 숫자 0 표기
/*
  digitalWrite(aPinFndData[0], HIGH);     // 13번핀 - A 연결    HIGH == 1
  digitalWrite(aPinFndData[1], HIGH);     // 12번핀 - B 연결
  digitalWrite(aPinFndData[2], HIGH);     // 11번핀 - C 연결
  digitalWrite(aPinFndData[3], HIGH);     // 10번핀 - D 연결
  digitalWrite(aPinFndData[4], HIGH);     // 09번핀 - E 연결
  digitalWrite(aPinFndData[5], HIGH);     // 08번핀 - F 연결
  digitalWrite(aPinFndData[6], LOW);     // 07번핀 - G 연결     LOW == 0
  digitalWrite(aPinFndData[7], LOW);     // 06번핀 - DP연결
*/
/*
    digitalWrite(aPinFndData[0], aFndData1 >> 0 & 1);
    digitalWrite(aPinFndData[1], aFndData1 >> 1 & 1);
    digitalWrite(aPinFndData[2], aFndData1 >> 2 & 1);
    digitalWrite(aPinFndData[3], aFndData1 >> 3 & 1);
    digitalWrite(aPinFndData[4], aFndData1 >> 4 & 1);
    digitalWrite(aPinFndData[5], aFndData1 >> 5 & 1);
    digitalWrite(aPinFndData[6], aFndData1 >> 6 & 1);
    digitalWrite(aPinFndData[7], aFndData1 >> 7 & 1);
*/

  for(int i=0; i<10; i++) {   // i가 0~9까지 숫자 표현
    for(int j=0; j<8; j++) {  // A~DP 까지 LED ON/OFF
      digitalWrite(aPinFndData[j], (aFndData[i] >> j) & 1); 
    }    
    delay(1000);
  }

}
