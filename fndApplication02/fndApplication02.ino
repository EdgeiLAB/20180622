// 핀 번호
const int aPinFndData[8] = {13,12,11,10,9,8,7,6};
const int aPinFndSelect[6] = {22,23,24,25,26,27};

// 데이터
int aFndData[10] ={0x3F, 0x06, 0x5B, 0x4F, 0x66,      // 0, 1, 2, 3, 4
                   0x6D, 0x7D, 0x27, 0x7F, 0x6F};     // 5, 6, 7, 8, 9
                   
int aFndSelect[6] = {0x3E, 0x3D, 0x3B, 0x37, 0x2F, 0x1F};
                     // 0011 1110
                     // 0011 1101
                     // 0011 1011
                     // 0011 0111
                     // 0010 1111
                     // 0001 1111
void setup() {
  for(int i=0; i<8; i++){
    pinMode(aPinFndData[i], OUTPUT);
  }
  for(int i=0; i<6; i++) {
    pinMode(aPinFndSelect[i], OUTPUT);
  }
}

void loop() {
  for(int i=0; i<6; i++) {
    displaySelect(aFndSelect[i]);
    displayNumber(aFndData[i]);
    delay(1);
  }
}
