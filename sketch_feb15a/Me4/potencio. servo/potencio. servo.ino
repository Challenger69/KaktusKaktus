#include <Servo.h>

 Servo IG;

int value= 0;


void setup() {
  Serial.begin(9600);
  IG.attach(3);

 pinMode(A2, INPUT);
}

void loop() {
  value = analogRead(A2);
  value = map(value, 0, 1023, 0, 179);
  IG.write(value);
  Serial.println(value);
}
