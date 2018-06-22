void displayNumber(int tmp) {
  switch(tmp) {
    case 0 :
      // 숫자 0을 표기
      digitalWrite(aPinFndData[0], HIGH); // 13번 -> Data A    // 1
      digitalWrite(aPinFndData[1], HIGH); // 12번 -> Data B    // 1
      digitalWrite(aPinFndData[2], HIGH); // 11번 -> Data C    // 1
      digitalWrite(aPinFndData[3], HIGH); // 10번 -> Data D    // 1
      digitalWrite(aPinFndData[4], HIGH); // 09번 -> Data E    // 1
      digitalWrite(aPinFndData[5], HIGH); // 08번 -> Data F    // 1
      digitalWrite(aPinFndData[6], LOW);  // 07번 -> Data G    // 0
      digitalWrite(aPinFndData[7], LOW);  // 06번 -> Data DP   // 0
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


void displaySelect(int tmp) {
  switch(tmp) {
    case 0 :
      digitalWrite(aPinFndSelect[0], LOW);   // 1의자리
      digitalWrite(aPinFndSelect[1], HIGH);   // 10의자리
      digitalWrite(aPinFndSelect[2], HIGH);   // 100의자리
      digitalWrite(aPinFndSelect[3], HIGH);   // 1000의자리
      digitalWrite(aPinFndSelect[4], HIGH);   // 10000의자리
      digitalWrite(aPinFndSelect[5], HIGH);   // 100000의자리    
      break;
    case 1 :
      digitalWrite(aPinFndSelect[0], HIGH);   // 1의자리
      digitalWrite(aPinFndSelect[1], LOW);   // 10의자리
      digitalWrite(aPinFndSelect[2], HIGH);   // 100의자리
      digitalWrite(aPinFndSelect[3], HIGH);   // 1000의자리
      digitalWrite(aPinFndSelect[4], HIGH);   // 10000의자리
      digitalWrite(aPinFndSelect[5], HIGH);   // 100000의자리    
      break;    
    case 2 : 
      digitalWrite(aPinFndSelect[0], HIGH);   // 1의자리
      digitalWrite(aPinFndSelect[1], HIGH);   // 10의자리
      digitalWrite(aPinFndSelect[2], LOW);   // 100의자리
      digitalWrite(aPinFndSelect[3], HIGH);   // 1000의자리
      digitalWrite(aPinFndSelect[4], HIGH);   // 10000의자리
      digitalWrite(aPinFndSelect[5], HIGH);   // 100000의자리    
      break;    
    case 3 :
      digitalWrite(aPinFndSelect[0], HIGH);   // 1의자리
      digitalWrite(aPinFndSelect[1], HIGH);   // 10의자리
      digitalWrite(aPinFndSelect[2], HIGH);   // 100의자리
      digitalWrite(aPinFndSelect[3], LOW);   // 1000의자리
      digitalWrite(aPinFndSelect[4], HIGH);   // 10000의자리
      digitalWrite(aPinFndSelect[5], HIGH);   // 100000의자리    
      break;    
    case 4 :
      digitalWrite(aPinFndSelect[0], HIGH);   // 1의자리
      digitalWrite(aPinFndSelect[1], HIGH);   // 10의자리
      digitalWrite(aPinFndSelect[2], HIGH);   // 100의자리
      digitalWrite(aPinFndSelect[3], HIGH);   // 1000의자리
      digitalWrite(aPinFndSelect[4], LOW);   // 10000의자리
      digitalWrite(aPinFndSelect[5], HIGH);   // 100000의자리    
      break;    
    case 5 : 
      digitalWrite(aPinFndSelect[0], HIGH);   // 1의자리
      digitalWrite(aPinFndSelect[1], HIGH);   // 10의자리
      digitalWrite(aPinFndSelect[2], HIGH);   // 100의자리
      digitalWrite(aPinFndSelect[3], HIGH);   // 1000의자리
      digitalWrite(aPinFndSelect[4], HIGH);   // 10000의자리
      digitalWrite(aPinFndSelect[5], LOW);   // 100000의자리    
      break;    
        
  }

}

