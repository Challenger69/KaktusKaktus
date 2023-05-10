#include <Servo.h>

 Servo HH;

int val = 0;

void setup() {
Serial.begin(9600);
HH.attach(3);


pinMode(A2, INPUT);
}

void loop() {
val = analogRead(A2);

val = map(val, 0, 1023, 0, 179);

HH.write(val);

Serial.println(val);
}
