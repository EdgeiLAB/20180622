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
  digitalWrite(aPinFndSelect[0], LOW);   // 자리수 표현 O
  digitalWrite(aPinFndSelect[1], HIGH); 
  digitalWrite(aPinFndSelect[2], HIGH);   
  digitalWrite(aPinFndSelect[3], HIGH);
  digitalWrite(aPinFndSelect[4], HIGH);
  digitalWrite(aPinFndSelect[5], HIGH);
  
  // 숫자 0을 표기
  digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A
  digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
  digitalWrite(aPinFndData[2], HIGH); // 11번 -> Data C
  digitalWrite(aPinFndData[3], HIGH); // 10번 -> Data D
  digitalWrite(aPinFndData[4], HIGH); // 09번 -> Data E
  digitalWrite(aPinFndData[5], HIGH); // 08번 -> Data F
  digitalWrite(aPinFndData[6], LOW);  // 07번 -> Data G
  digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP
  delay(1000);
  // 숫자 1을 표기
  digitalWrite(aPinFndData[0], LOW); // 13번 -> Data A
  digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
  digitalWrite(aPinFndData[2], HIGH); // 11번 -> Data C
  digitalWrite(aPinFndData[3], LOW); // 10번 -> Data D
  digitalWrite(aPinFndData[4], LOW); // 09번 -> Data E
  digitalWrite(aPinFndData[5], LOW); // 08번 -> Data F
  digitalWrite(aPinFndData[6], LOW);  // 07번 -> Data G
  digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP
  delay(1000);
  // 숫자 2을 표기
  digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A
  digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
  digitalWrite(aPinFndData[2], LOW); // 11번 -> Data C
  digitalWrite(aPinFndData[3], HIGH); // 10번 -> Data D
  digitalWrite(aPinFndData[4], HIGH); // 09번 -> Data E
  digitalWrite(aPinFndData[5], LOW); // 08번 -> Data F
  digitalWrite(aPinFndData[6], HIGH);  // 07번 -> Data G
  digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP
  delay(1000);
  // 숫자 3을 표기
  digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A
  digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
  digitalWrite(aPinFndData[2], HIGH);  // 11번 -> Data C
  digitalWrite(aPinFndData[3], HIGH); // 10번 -> Data D
  digitalWrite(aPinFndData[4], LOW); // 09번 -> Data E
  digitalWrite(aPinFndData[5], LOW);  // 08번 -> Data F
  digitalWrite(aPinFndData[6], HIGH);  // 07번 -> Data G
  digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP
  delay(1000);
  // 숫자 4을 표기
  digitalWrite(aPinFndData[0], LOW); // 13번 -> Data A
  digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
  digitalWrite(aPinFndData[2], HIGH);  // 11번 -> Data C
  digitalWrite(aPinFndData[3], LOW); // 10번 -> Data D
  digitalWrite(aPinFndData[4], LOW); // 09번 -> Data E
  digitalWrite(aPinFndData[5], HIGH);  // 08번 -> Data F
  digitalWrite(aPinFndData[6], HIGH);  // 07번 -> Data G
  digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP  
  delay(1000);
  // 숫자 5을 표기
  digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A
  digitalWrite(aPinFndData[1], LOW); // 12번 -> Data B
  digitalWrite(aPinFndData[2], HIGH);  // 11번 -> Data C
  digitalWrite(aPinFndData[3], HIGH); // 10번 -> Data D
  digitalWrite(aPinFndData[4], HIGH); // 09번 -> Data E
  digitalWrite(aPinFndData[5], LOW);  // 08번 -> Data F
  digitalWrite(aPinFndData[6], HIGH);  // 07번 -> Data G
  digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP 
  delay(1000);
  // 숫자 6을 표기
  digitalWrite(aPinFndData[0], LOW); // 13번 -> Data A
  digitalWrite(aPinFndData[1], LOW); // 12번 -> Data B
  digitalWrite(aPinFndData[2], HIGH);  // 11번 -> Data C
  digitalWrite(aPinFndData[3], HIGH); // 10번 -> Data D
  digitalWrite(aPinFndData[4], HIGH); // 09번 -> Data E
  digitalWrite(aPinFndData[5], HIGH);  // 08번 -> Data F
  digitalWrite(aPinFndData[6], HIGH);  // 07번 -> Data G
  digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP  
  delay(1000);
  // 숫자 7을 표기
  digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A
  digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
  digitalWrite(aPinFndData[2], HIGH);  // 11번 -> Data C
  digitalWrite(aPinFndData[3], LOW); // 10번 -> Data D
  digitalWrite(aPinFndData[4], LOW); // 09번 -> Data E
  digitalWrite(aPinFndData[5], LOW);  // 08번 -> Data F
  digitalWrite(aPinFndData[6], LOW);  // 07번 -> Data G
  digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP      
  delay(1000);
  // 숫자 8을 표기
  digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A
  digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
  digitalWrite(aPinFndData[2], HIGH);  // 11번 -> Data C
  digitalWrite(aPinFndData[3], HIGH); // 10번 -> Data D
  digitalWrite(aPinFndData[4], HIGH); // 09번 -> Data E
  digitalWrite(aPinFndData[5], HIGH);  // 08번 -> Data F
  digitalWrite(aPinFndData[6], HIGH);  // 07번 -> Data G
  digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP   
  delay(1000);
  // 숫자 9을 표기
  digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A
  digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
  digitalWrite(aPinFndData[2], HIGH);  // 11번 -> Data C
  digitalWrite(aPinFndData[3], LOW); // 10번 -> Data D
  digitalWrite(aPinFndData[4], LOW); // 09번 -> Data E
  digitalWrite(aPinFndData[5], HIGH);  // 08번 -> Data F
  digitalWrite(aPinFndData[6], HIGH);  // 07번 -> Data G
  digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP     
  delay(1000);   
}




