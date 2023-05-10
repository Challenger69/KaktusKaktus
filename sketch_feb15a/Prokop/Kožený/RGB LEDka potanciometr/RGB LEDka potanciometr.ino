const int m = 11;
const int z = 10;
const int c = 9;
int zpoz = 100;
int pot = 0;
int stav = 0;


void setup() {
  Serial.begin(9600);
  pinMode(m, OUTPUT);
  pinMode(z, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(2, INPUT);
  pinMode(A2, INPUT);
}


void loop() {
  pot = analogRead(A2);
  pot = map(pot, 0, 1023, 0, 255);
  Serial.println(stav);
  if (digitalRead(2) == HIGH){
    stav++;
    delay(250);
  }
  if(stav == 3)
  stav == 0;

  if(stav == 0)
  digitalWrite(c,HIGH);
  else
  digitalWrite(c,LOW);

    if(stav == 1)
  digitalWrite(z,HIGH);
  else
  digitalWrite(z,LOW);

    if(stav == 2)
  digitalWrite(m,HIGH);
  else
  digitalWrite(m,LOW);

  if(stav == 3)
  stav = 0;
}
void RGB(byte barvaC, byte barvaZ, byte barvaM) {
  analogWrite(c, barvaC);
  analogWrite(z, barvaZ);
  analogWrite(m, barvaM);
  delay(zpoz);
}