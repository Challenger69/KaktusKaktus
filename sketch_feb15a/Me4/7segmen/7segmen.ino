const int A = 12;
const int B = 11;
const int C = 10;
const int D = 9;
const int E = 8;
const int F = 7;
const int G = 6;

void setup() {
pinMode(A, OUTPUT);
pinMode(B, OUTPUT);
pinMode(C, OUTPUT);
pinMode(D, OUTPUT);
pinMode(E, OUTPUT);
pinMode(F, OUTPUT);
pinMode(G, OUTPUT);
 

}

void loop() {
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
delay(500);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
delay(500);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
delay(500);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(G, LOW);
    digitalWrite(E, LOW);
    digitalWrite(D, LOW);
delay(500);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
delay(500);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(G, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
delay(500);
  digitalWrite(F, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(C, HIGH);
delay(500);
    digitalWrite(F, LOW);
    digitalWrite(B, LOW);
    digitalWrite(G, LOW);
    digitalWrite(C, LOW); //4
delay(500);
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
delay(500);
    digitalWrite(A, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW); //5
delay(500); 
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
delay(500);
    digitalWrite(A, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
    digitalWrite(E, LOW);
    digitalWrite(D, LOW); 
    digitalWrite(C, LOW); //6
delay(500); 
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
delay(500);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);//7
delay(500);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
delay(500);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW); 
    digitalWrite(F, LOW); //8
    digitalWrite(G, LOW);
delay(500);
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(C, HIGH);
delay(500);
    digitalWrite(A, LOW);
    digitalWrite(F, LOW);
    digitalWrite(B, LOW);
    digitalWrite(G, LOW);
    digitalWrite(C, LOW); //9
delay(500);
digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
delay(500);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW); 
    digitalWrite(F, LOW); //10
delay(500);

}