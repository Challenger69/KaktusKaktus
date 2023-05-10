const int Joystick_X = A1;
//const int Joystick_Y = A0;
const int Joystick_SW = 12;
const int cervena = 11;
const int zelena = 10;
const int modra = 9;


int x,b;
int jas = 0;
int stav = 0;


void setup() {
  Serial.begin(9600);
  pinMode(Joystick_X, INPUT);
 // pinMode(Joystick_Y, INPUT);
  pinMode(Joystick_SW, INPUT_PULLUP); 

  pinMode(cervena,OUTPUT);
  pinMode(zelena,OUTPUT);
  pinMode(modra,OUTPUT);
}

void loop() {
  x = analogRead(Joystick_X);
  b = digitalRead(Joystick_SW);




  if (!b)
  {
    stav++;
    delay(250);
  }

  if(stav >= 3)
    stav = 0;
  
  if(x < 450)
    if(jas >= 1)
  { 
    jas--;
    delay(10);
  }
  
  if(x > 600)
    if(jas <= 254)
  { 
    jas++;
    delay(10);
  }

  if(stav == 0)
    analogWrite(cervena, jas);


  if(stav == 1)
    analogWrite(zelena, jas);


  if(stav == 2)
    analogWrite(modra, jas);


Serial.print("Osa x = ");
  Serial.print(x);
  Serial.print(", Jas = ");
  Serial.print(jas);
  Serial.print(", Stav = ");
  Serial.println(stav);
  delay(20);
}
