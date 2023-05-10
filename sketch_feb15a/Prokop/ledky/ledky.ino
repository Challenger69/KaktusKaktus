void setup() {
 pinMode(12, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);
}
void loop() {
 Blik2LEDON(12, 6);
 Blik2LEDON(11, 7);
 Blik2LEDON(10, 8);
 BlikLED(9);
 Blik2LEDOFF(8, 10);
 Blik2LEDOFF(7, 11);
 Blik2LEDOFF(6, 12);
}

void Blik2LEDON(int pin1, int pin2){
 digitalWrite(pin1, HIGH);
 digitalWrite(pin2, HIGH);
 delay(100);
}
void Blik2LEDOFF(int pin1, int pin2){
 ;digitalWrite(pin1, LOW);
 digitalWrite(pin2, LOW);
 delay(250);
}

 void BlikLED(int pin){
 digitalWrite(pin, HIGH);
 delay(250);
 digitalWrite(pin, LOW);
 }