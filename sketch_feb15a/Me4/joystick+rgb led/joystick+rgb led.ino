const int Joystick_x = A1;
//const int Joystick_y = A0;
const int Joystick_sw = 12;

const int cervena= 11;
const int zelena= 10;
const int modra= 9;

int x,t;
int jas= 0;
int stav= 0;

void setup() {
  Serial.begin(9600);
  pinMode(Joystick_x, INPUT);
  //pinMode(Joystick_y, INPUT);
  pinMode(Joystick_sw, INPUT_PULLUP);

  pinMode(cervena, OUTPUT);
  pinMode(zelena, OUTPUT);
  pinMode(modra, OUTPUT);

}

void loop() {
 x = analogRead(Joystick_x);
 t = digitalRead(Joystick_sw);

if(!t)
 {
  stav++;
  delay(250);
 }
if(stav == 3)
  stav=0;

if (x<450)
  if(jas >= 1)
  {
    jas--;
    delay(10);
  }
if (x > 600)
  if(jas <= 254)
  {
    jas++;
    delay(10);
  }

if(stav == 0)
  analogWrite(cervena, jas);
  
if(stav == 2)
  analogWrite(zelena, jas);
  
if(stav == 1)
  analogWrite(modra, jas);
 

  Serial.print("Osa x = ");
  Serial.print(x);
  Serial.print(", Jas = ");
  Serial.print(jas);
  Serial.print(", Stav = ");
  Serial.println(stav);
  delay(10);
}

