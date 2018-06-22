const int aPinSwitch[8] = {13,12,11,10,9,8,7,6};

void setup() {
  Serial.begin(115200);
  for(int i=0; i<8; i++) {
    pinMode(aPinSwitch[i], INPUT);
  }
}

void loop() {
  for(int i=0; i<8; i++) {
    if(digitalRead(aPinSwitch[i]) == 0) {
      Serial.println(String(i) + "# Pushed");
    }
    delay(1000);
  }

  
/*  
  if(digitalRead(aPinSwitch[0]) == 0) {
    Serial.println("0# Switch Pushed");
  }
  else if(digitalRead(aPinSwitch[1]) == 0) {
    Serial.println("1# Switch Pushed");
  }
  else if(digitalRead(aPinSwitch[2]) == 0) {
    Serial.println("2# Switch Pushed");    
  }
  else if(digitalRead(aPinSwitch[3]) == 0) {
    Serial.println("3# Switch Pushed");    
  }  
  else if(digitalRead(aPinSwitch[4]) == 0) {
    Serial.println("4# Switch Pushed");    
  }  
  else if(digitalRead(aPinSwitch[5]) == 0) {
    Serial.println("5# Switch Pushed");    
  }  
  else if(digitalRead(aPinSwitch[6]) == 0) {
    Serial.println("6# Switch Pushed");    
  }  
  else if(digitalRead(aPinSwitch[7]) == 0) {
    Serial.println("7# Switch Pushed");    
  }  
  else {
    Serial.println("Not Pushed");
  }
  delay(1000);
*/  
}
