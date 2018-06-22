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
  displaySelect(5);
  displayNumber(1); // 10만의 자리에 1값을 표현
  delay(1);
  
  displaySelect(4); // 1만의 자리에 2값을 표현
  displayNumber(2);  
  delay(1);
  
  displaySelect(3); // 1천의 자리에 3값을 표현
  displayNumber(3);    
  delay(1);
  
  displaySelect(2); // 100의 자리에 4값을 표현
  displayNumber(4); 
  delay(1);
  
  displaySelect(1); // 10의 자리에 5값을 표현
  displayNumber(5); 
  delay(1);

  displaySelect(0); // 1의 자리에 6값을 표현
  displayNumber(6);     
  delay(1);
}


