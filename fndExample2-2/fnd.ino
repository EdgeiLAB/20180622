void displayNumber(int tmp) { // 숫자를 표현하는 함수
  for(int j=0; j<8; j++) {  // A~DP 까지 LED ON/OFF
    digitalWrite(aPinFndData[j], (tmp >> j) & 1); 
  }    
}

void displaySelect(int tmp) { // 자리수를 표현하는 함수
  for(int i=0; i<6; i++) {
    digitalWrite(aPinFndSel[i], (tmp >> i) & 1);
  }
}

