void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  BlidkusON(12,6);
  BlidkusON(11,7);
  BlidkusON(10,8);
  BlidkusON(9);
  Blidkus(12);
  Blidkus(11);
  Blidkus(10);
  Blidkus(9);
  Blidkus(8);
  Blidkus(7);
  Blidkus(6);
  BlidkusOFF(9);
  BlidkusOFF(10,8);
  BlidkusOFF(11,7);
  BlidkusOFF(12,6);
}


void BlidkusON(int pin1, int pin2){
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  delay(250);
}
void BlidkusOFF(int pin1, int pin2){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  delay(250);
}

void Blidkus(int pin){
  digitalWrite(pin, HIGH);
  digitalWrite(pin, HIGH);
  delay(250);
  digitalWrite(pin, LOW); 
  digitalWrite(pin, LOW);
  delay(250); 
}
void BlidkusON(int pin3){
  digitalWrite(pin3, HIGH);
  delay(250);
}
void BlidkusOFF(int pin3){
  digitalWrite(pin3, LOW); 
  delay(250); 
}
