const int R1 = 2;
const int R2 = 7;
const int R3 = 19;
const int R4 = 5;
const int R8 = 16;

const int S1 = 6;
const int S8 = 9;
const int S2 = 11;
const int S3 = 10;
const int S4 = 3;

void setup() {
 pinMode(R1, OUTPUT);
 pinMode(R2, OUTPUT);
 pinMode(R3, OUTPUT);
 pinMode(R4, OUTPUT);
 pinMode(R8, OUTPUT);
 
 pinMode(S1, OUTPUT);
 pinMode(S8, OUTPUT);
 pinMode(S2, OUTPUT);
 pinMode(S3, OUTPUT);
 pinMode(S4, OUTPUT);

 digitalWrite(R1,LOW);
 digitalWrite(R2,LOW);
 digitalWrite(R3,LOW);
 digitalWrite(R4,LOW);
 digitalWrite(R8,LOW);

 digitalWrite(S1,HIGH);
 digitalWrite(S2,HIGH);
 digitalWrite(S3,HIGH);
 digitalWrite(S4,HIGH);
 digitalWrite(S8,HIGH);
}

void loop() {
  digitalWrite(S1, LOW);

  digitalWrite(R1, HIGH);
  delay(250);
  digitalWrite(R2, HIGH);
  delay(250);
  digitalWrite(R3, HIGH);
  delay(250);
  digitalWrite(R4, HIGH);
  delay(250);
  digitalWrite(R8, HIGH);
  delay(250);

  digitalWrite(R1, LOW);
  delay(250);
  digitalWrite(R2, LOW);
  delay(250);
  digitalWrite(R3, LOW);
  delay(250);
  digitalWrite(R4, LOW);
  delay(250);
  digitalWrite(R8, LOW);
  delay(250);

  digitalWrite(S1, HIGH);
  digitalWrite(S2, LOW);

  digitalWrite(R1, HIGH);
  delay(250);
  digitalWrite(R2, HIGH);
  delay(250);
  digitalWrite(R3, HIGH);
  delay(250);
  digitalWrite(R4, HIGH);
  delay(250);
  digitalWrite(R8, HIGH);
  delay(250);

  digitalWrite(R1, LOW);
  delay(250);
  digitalWrite(R2, LOW);
  delay(250);
  digitalWrite(R3, LOW);
  delay(250);
  digitalWrite(R4, LOW);
  delay(250);
  digitalWrite(R8, LOW);
  delay(250);

  digitalWrite(S2, HIGH);
  digitalWrite(S3, LOW);
  digitalWrite(R1, HIGH);
  delay(250);
  digitalWrite(R2, HIGH);
  delay(250);
  digitalWrite(R3, HIGH);
  delay(250);
  digitalWrite(R4, HIGH);
  delay(250);
  digitalWrite(R8, HIGH);
  delay(250);
  
  digitalWrite(R1, LOW);
  delay(250);
  digitalWrite(R2, LOW);
  delay(250);
  digitalWrite(R3, LOW);
  delay(250);
  digitalWrite(R4, LOW);
  delay(250);
  digitalWrite(R8, LOW);
  delay(250);

  digitalWrite(S3, HIGH);
  digitalWrite(S4, LOW);

  digitalWrite(R1, HIGH);
  delay(250);
  digitalWrite(R2, HIGH);
  delay(250);
  digitalWrite(R3, HIGH);
  delay(250);
  digitalWrite(R4, HIGH);
  delay(250);
  digitalWrite(R8, HIGH);
  delay(250);
  
  digitalWrite(R1, LOW);
  delay(250);
  digitalWrite(R2, LOW);
  delay(250);
  digitalWrite(R3, LOW);
  delay(250);
  digitalWrite(R4, LOW);
  delay(250);
  digitalWrite(R8, LOW);
  delay(250);

  digitalWrite(S4, HIGH);
  digitalWrite(S8, LOW);
  digitalWrite(R1, HIGH);
  delay(250);
  digitalWrite(R2, HIGH);
  delay(250);
  digitalWrite(R3, HIGH);
  delay(250);
  digitalWrite(R4, HIGH);
  delay(250);
  digitalWrite(R8, HIGH);
  delay(250);
  
  digitalWrite(R1, LOW);
  delay(250);
  digitalWrite(R2, LOW);
  delay(250);
  digitalWrite(R3, LOW);
  delay(250);
  digitalWrite(R4, LOW);
  delay(250);
  digitalWrite(R8, LOW);
  delay(250);
  digitalWrite(S8, HIGH);
}



