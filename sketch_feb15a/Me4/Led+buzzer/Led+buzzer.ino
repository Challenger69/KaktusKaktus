void setup() {

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {

  digitalWrite(13, HIGH);
   tone(3, 250);
  delay(250);        
  digitalWrite(12, HIGH);
  delay(250);            
  digitalWrite(13, LOW);
   noTone(3);
   delay(250);
  digitalWrite(12, LOW); 
  delay(250);  


}

