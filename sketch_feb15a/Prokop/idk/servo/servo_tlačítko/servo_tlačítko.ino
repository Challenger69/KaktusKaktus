#include <Servo.h>

Servo HH;

int pozice = 0;

void setup() {
  Serial.begin(9600);
  HH.attach(3);

  pinMode(2, INPUT);
}

void loop() {
  if (digitalRead(2) == HIGH) {
    pozice++;
    delay(5);
  }
  if(pozice ==179)
    pozice = 0;

  HH.write(pozice);
  Serial.println(pozice);
  }
