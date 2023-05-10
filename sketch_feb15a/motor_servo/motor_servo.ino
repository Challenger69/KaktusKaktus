#include <Servo.h>

Servo NS;

const int in1 = 16;
const int in2 = 17;
const int in3 = 18;
const int in4 = 19;

const int Joystick_X = A1;
const int Joystick_Y = A0;


int x;
int y;
int poloha = 0;
void setup() {
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  pinMode(Joystick_X, INPUT);
  pinMode(Joystick_Y, INPUT); 
  NS.attach(9);
  NS.write(poloha);
}

void loop() {
  x = analogRead(Joystick_X);
  y = analogRead(Joystick_Y);
  
  if(y < 450)
    if(poloha <=179)
  {
    poloha++;
    NS.write(poloha);
    delay(50);
  }

  Serial.println(poloha);

  if(y > 600)
    if(poloha >=1)
  {
    poloha--;
    NS.write(poloha);
    delay(50);
  }

  if(x < 450)
  rotaceProtiSmeru();

  if(x > 600)
  rotacePoSmeru();


}


void rotacePoSmeru() {
  krok(1, 0, 0, 0);
  krok(0, 1, 0, 0);
  krok(0, 0, 1, 0);
  krok(0, 0, 0, 1);

}

void rotaceProtiSmeru() {
  krok(0, 0, 0, 1);
  krok(0, 0, 1, 0);
  krok(0, 1, 0, 0);
  krok(1, 0, 0, 0);

}


void krok(int a, int b, int c, int d) {
  digitalWrite(in1, a);
  digitalWrite(in2, b);
  digitalWrite(in3, c);
  digitalWrite(in4, d);
  delay(20);
}

