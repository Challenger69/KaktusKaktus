const int cervena= 11;
const int zelena = 10;
const int modra = 9;
const int potPin= A2;
const int tlPin= 2;

int jas= 0;
int stav= 0;

void setup() {
  Serial.begin(9600);

  pinMode(cervena, OUTPUT);
  pinMode(zelena, OUTPUT);
  pinMode(modra, OUTPUT);

  pinMode(tlPin, INPUT);
  pinMode(potPin, INPUT);
}


void loop() {
  jas= analogRead(potPin);
  jas= jas /4;
 
  if (digitalRead(tlPin) ==HIGH){
    stav++;
    delay(250);
  }
  if(stav == 3);
      stav= 0;

  if(stav == 0)
    analogWrite(cervena, jas);

if(stav == 1)
    analogWrite(zelena, jas);

if(stav == 2)
    analogWrite(modra, jas);

      Serial.println(stav);
}


void RGB(int cervena_value, int zelena_value, int modra_value)
 {
  analogWrite(cervena, cervena_value);
  analogWrite(zelena, zelena_value);
  analogWrite(modra, modra_value);
  delay(250);
 }