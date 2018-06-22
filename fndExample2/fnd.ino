void displayNumber(int tmp) {
  switch(tmp) {
    case 0 :
      // 숫자 0을 표기
      digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A
      digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
      digitalWrite(aPinFndData[2], HIGH); // 11번 -> Data C
      digitalWrite(aPinFndData[3], HIGH); // 10번 -> Data D
      digitalWrite(aPinFndData[4], HIGH); // 09번 -> Data E
      digitalWrite(aPinFndData[5], HIGH); // 08번 -> Data F
      digitalWrite(aPinFndData[6], LOW);  // 07번 -> Data G
      digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP    
      break;
    case 1 :
      // 숫자 1을 표기
      digitalWrite(aPinFndData[0], LOW); // 13번 -> Data A
      digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
      digitalWrite(aPinFndData[2], HIGH); // 11번 -> Data C
      digitalWrite(aPinFndData[3], LOW); // 10번 -> Data D
      digitalWrite(aPinFndData[4], LOW); // 09번 -> Data E
      digitalWrite(aPinFndData[5], LOW); // 08번 -> Data F
      digitalWrite(aPinFndData[6], LOW);  // 07번 -> Data G
      digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP 
      break;         
    case 2 :
      // 숫자 2을 표기
      digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A
      digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
      digitalWrite(aPinFndData[2], LOW); // 11번 -> Data C
      digitalWrite(aPinFndData[3], HIGH); // 10번 -> Data D
      digitalWrite(aPinFndData[4], HIGH); // 09번 -> Data E
      digitalWrite(aPinFndData[5], LOW); // 08번 -> Data F
      digitalWrite(aPinFndData[6], HIGH);  // 07번 -> Data G
      digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP 
      break;         
    case 3 :
      // 숫자 3을 표기
      digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A
      digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
      digitalWrite(aPinFndData[2], HIGH);  // 11번 -> Data C
      digitalWrite(aPinFndData[3], HIGH); // 10번 -> Data D
      digitalWrite(aPinFndData[4], LOW); // 09번 -> Data E
      digitalWrite(aPinFndData[5], LOW);  // 08번 -> Data F
      digitalWrite(aPinFndData[6], HIGH);  // 07번 -> Data G
      digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP 
      break;         
    case 4 :
      // 숫자 4을 표기
      digitalWrite(aPinFndData[0], LOW); // 13번 -> Data A
      digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
      digitalWrite(aPinFndData[2], HIGH);  // 11번 -> Data C
      digitalWrite(aPinFndData[3], LOW); // 10번 -> Data D
      digitalWrite(aPinFndData[4], LOW); // 09번 -> Data E
      digitalWrite(aPinFndData[5], HIGH);  // 08번 -> Data F
      digitalWrite(aPinFndData[6], HIGH);  // 07번 -> Data G
      digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP  
      break;      
    case 5 :
      // 숫자 5을 표기
      digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A
      digitalWrite(aPinFndData[1], LOW); // 12번 -> Data B
      digitalWrite(aPinFndData[2], HIGH);  // 11번 -> Data C
      digitalWrite(aPinFndData[3], HIGH); // 10번 -> Data D
      digitalWrite(aPinFndData[4], LOW); // 09번 -> Data E
      digitalWrite(aPinFndData[5], HIGH);  // 08번 -> Data F
      digitalWrite(aPinFndData[6], HIGH);  // 07번 -> Data G
      digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP
      break;           
    case 6 :
      // 숫자 6을 표기
      digitalWrite(aPinFndData[0], LOW); // 13번 -> Data A
      digitalWrite(aPinFndData[1], LOW); // 12번 -> Data B
      digitalWrite(aPinFndData[2], HIGH);  // 11번 -> Data C
      digitalWrite(aPinFndData[3], HIGH); // 10번 -> Data D
      digitalWrite(aPinFndData[4], HIGH); // 09번 -> Data E
      digitalWrite(aPinFndData[5], HIGH);  // 08번 -> Data F
      digitalWrite(aPinFndData[6], HIGH);  // 07번 -> Data G
      digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP  
      break;      
    case 7 :
      // 숫자 7을 표기
      digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A
      digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
      digitalWrite(aPinFndData[2], HIGH);  // 11번 -> Data C
      digitalWrite(aPinFndData[3], LOW); // 10번 -> Data D
      digitalWrite(aPinFndData[4], LOW); // 09번 -> Data E
      digitalWrite(aPinFndData[5], LOW);  // 08번 -> Data F
      digitalWrite(aPinFndData[6], LOW);  // 07번 -> Data G
      digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP    
      break;          
    case 8 : 
      // 숫자 8을 표기
      digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A
      digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
      digitalWrite(aPinFndData[2], HIGH);  // 11번 -> Data C
      digitalWrite(aPinFndData[3], HIGH); // 10번 -> Data D
      digitalWrite(aPinFndData[4], HIGH); // 09번 -> Data E
      digitalWrite(aPinFndData[5], HIGH);  // 08번 -> Data F
      digitalWrite(aPinFndData[6], HIGH);  // 07번 -> Data G
      digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP     
      break;          
    case 9 : 
      // 숫자 9을 표기
      digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A
      digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B
      digitalWrite(aPinFndData[2], HIGH);  // 11번 -> Data C
      digitalWrite(aPinFndData[3], LOW); // 10번 -> Data D
      digitalWrite(aPinFndData[4], LOW); // 09번 -> Data E
      digitalWrite(aPinFndData[5], HIGH);  // 08번 -> Data F
      digitalWrite(aPinFndData[6], HIGH);  // 07번 -> Data G
      digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP  
      break;              
  }
}
