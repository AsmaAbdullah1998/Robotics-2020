
int button1 = 13;
int button2 = 11;
int Relay1 = 0;
int Relay2 = 2;

int val1 = 0;
int ROn1 = 0;
int pushed1 = 0;

int val2 = 0;
int ROn2 = 0;
int pushed2 = 0;

void setup(){
  pinMode(Relay1, OUTPUT);
  pinMode(Relay2, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
}


void loop(){
val1 = digitalRead(button1);

if (val1 == HIGH && ROn1 == LOW){
  pushed1 = 1-pushed1;
  delay(100);
}

ROn1 = val1;
if (pushed1 == HIGH){
  digitalWrite(Relay1, LOW);
}
else{
  digitalWrite(Relay1, HIGH);
}

  delay(100);

  val2 = digitalRead(button2);

if (val2 == HIGH && ROn2 == LOW){
  pushed2 = 1-pushed2;
  delay(100);
}

ROn2 = val2;
if (pushed2 == HIGH){
  digitalWrite(Relay2, LOW);
}
else{
  digitalWrite(Relay2, HIGH);
}

  delay(100);
  
}
