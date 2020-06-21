
void setup() {
      pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() { 
   delay(1000);
  // +45 Degree             
 digitalWrite(8, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(11, LOW);
  delay(1000);

  // +90
digitalWrite(8, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(11, LOW);
    
      delay(1000);
      
      //+135
      digitalWrite(8, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(11, LOW);
    delay(1000);
    
    //+180
    digitalWrite(8, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(11, LOW); 
    delay(1000);
    
    //+225
    digitalWrite(8, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(11, LOW);
    delay(1000);
    
    //+270
digitalWrite(8, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(11, HIGH); 
     delay(1000);
     
     //+335
     digitalWrite(8, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(11, HIGH); 
    delay(1000);
    
    //+360 == 0
    digitalWrite(8, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(11, HIGH);
     delay(1000);
  
}
