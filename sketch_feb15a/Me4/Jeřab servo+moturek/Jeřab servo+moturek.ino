#include <Servo.h>

Servo NG;

const int in1= 16;
const int in2= 17;
const int in3= 18;
const int in4= 19;

const int Joystick_x = A1;
const int Joystick_y = A0;

int x, y;
int poloha = 0;
void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  pinMode(Joystick_x, INPUT);
  pinMode(Joystick_y, INPUT);

  NG.attach(9);
  NG.write(poloha);
}
void loop(){
  x = analogRead(Joystick_x);
  
  if (x < 450)
   rotacePOsmeru();
  if (x > 600)
   rotacePROTIsmeru();
  
  y = analogRead(Joystick_y);
  
  if(y < 450)
  if(poloha<=54)
  {
    poloha++;
    NG.write(poloha);
    delay(20);
  }

  if(y > 600)
  if(poloha>=1)
  {
    poloha--;
    NG.write(poloha);
    delay(20);
  }
}

void rotacePOsmeru() {
  krok(1,0,0,0);
  krok(0,1,0,0);
  krok(0,0,1,0);
  krok(0,0,0,1);
}

void rotacePROTIsmeru() {
  krok(0,0,0,1);
  krok(0,0,1,0);
  krok(0,1,0,0);
  krok(1,0,0,0);
}

void krok(int a, int b, int c, int d)
{
  digitalWrite(in1, a); 
  digitalWrite(in2, b);
  digitalWrite(in3, c);
  digitalWrite(in4, d);
  delay(20);


}