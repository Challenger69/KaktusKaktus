#include <Servo.h>

 Servo IG;
void setup() {
  IG.attach(3);
}

void loop() {
  IG.write(45);
  delay(600);
  IG.write(145);
  delay(600);

}
