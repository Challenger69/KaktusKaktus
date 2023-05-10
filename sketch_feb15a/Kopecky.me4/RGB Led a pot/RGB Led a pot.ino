const int cervena = 11;
const int zelena = 10;
const int modra = 9;

int stav = 0;
int jas = 0;

void setup() {
  Serial.begin(9600);

  pinMode(cervena, OUTPUT);
  pinMode(zelena, OUTPUT);
  pinMode(modra, OUTPUT);

  pinMode(3, INPUT);
  pinMode(A2, INPUT);
}

void loop() {
  jas = analogRead(A2);
  jas = map(jas, 0, 1023, 0, 255);


  if (digitalRead(3) == HIGH) {
    stav++;
    delay(250);
  }

  if (stav == 3)
    stav = 0;
  /*
if(stav==0)
analogWrite(cervena,255);
else 
analogWrite(cervena,0);

if(stav==1)
analogWrite(zelena,255);
else 
analogWrite(zelena,0);

if(stav==2)
analogWrite(modra,255);
else 
analogWrite(modra,0);
  */
  if (stav == 0)
    analogWrite(cervena, jas);
  else if (stav == 1)
    analogWrite(zelena, jas);
  else
    analogWrite(modra, jas);

  Serial.println(stav);


  
}