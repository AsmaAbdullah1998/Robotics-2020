
int button1 = 13;
int button2 = 11;
int button3 = 8;
int button4 = 9;

int Relay1 = 0;
int Relay2 = 2;

int Relay3 = 5;
int Relay4 = 7;

int val1 = 0;
int ROn1 = 0;
int pushed1 = 0;

int val2 = 0;
int ROn2 = 0;
int pushed2 = 0;

int val3 = 0;
int ROn3 = 0;
int pushed3 = 0;

int val4 = 0;
int ROn4 = 0;
int pushed4 = 0;

void setup(){
  pinMode(Relay1, OUTPUT);
  pinMode(Relay2, OUTPUT);
  pinMode(Relay3, OUTPUT);
  pinMode(Relay4, OUTPUT);
  
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);



  
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
  
  //Relay2!!

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


//Relay3
val3 = digitalRead(button3);

if (val3 == HIGH && ROn3 == LOW){
  pushed3 = 1-pushed3;
  delay(100);
}

ROn3 = val3;
if (pushed3 == HIGH){
  digitalWrite(Relay3, LOW);
}
else{
  digitalWrite(Relay3, HIGH);
}

  delay(100);

  //Relay4
  val4 = digitalRead(button4);

if (val4 == HIGH && ROn4 == LOW){
  pushed4 = 1-pushed4;
  delay(100);
}

ROn4 = val4;
if(pushed4 == HIGH){
  digitalWrite(Relay4, LOW);
}
else{
  digitalWrite(Relay4, HIGH);
}

  delay(100);
  
}
