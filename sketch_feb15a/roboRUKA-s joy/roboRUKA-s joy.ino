#include <Servo.h>

Servo NS;
const int in1 = 16;
const int in2 = 17;
const int in3 = 18;
const int in4 = 19;
const int joystick_x = A1;
const int joystick_y = A0;
int x,y;
int a =10 ;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  pinMode(joystick_x, INPUT);
  pinMode(joystick_y, INPUT);
  NS.attach(9);
  NS.write(a);

  
}

void loop() {
 x = analogRead(joystick_x);
 y = analogRead(joystick_y);


  if(x <475)  
{
  protismeru(); 
}
 if(x >550)
 {
  posmeru(); 
}




  if(y >550)
  if(a <= 120){
  NS.write(a++);
  delay(30);
  }

 if(y <475)
 if(a >= 5) {
  NS.write(a--);
  delay(30);
}



}
void protismeru()
{krok(1,0,0,0);
 krok(0,1,0,0);
 krok(0,0,1,0);
 krok(0,0,0,1);}
void posmeru()
{krok(0,0,0,1);
 krok(0,0,1,0);
 krok(0,1,0,0);
 krok(1,0,0,0);}


void krok(int a, int b, int c, int d)
{
digitalWrite(in1, a);
digitalWrite(in2, b);
digitalWrite(in3, c);
digitalWrite(in4, d);
delay(20);
}

