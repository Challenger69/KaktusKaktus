#include <Servo.h>

 Servo IG;
 int pozice= 0;

void setup() {
  Serial.begin(9600);
  IG.attach(3);
  pinMode(2, INPUT);

}

void loop() {
  if (digitalRead(2) == HIGH){
    pozice++;
    delay(50);
  } 
    if(pozice == 179)
      pozice= 0;
  IG.write(pozice);
  Serial.println(pozice);
}
