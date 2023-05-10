#include <Servo.h>

Servo NS;

int value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(A2, INPUT);
  NS.attach(3);
 
}

void loop() {
  value = analogRead(A2);
  value = map(value, 0, 1023, 0, 179);
  
  Serial.println(value);

  NS.write(value);
  delay(600);

}
