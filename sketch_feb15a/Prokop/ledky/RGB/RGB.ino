const int Red = 10;
const int Green = 9;
const int Blue = 11;
const int potPin = A2;
const int tlPin = 2;

int jas = 0;
int stav = 0;

void setup() {
  Serial.begin(9600);

  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);

  pinMode(potPin, INPUT);
  pinMode(tlPin, INPUT);
}

void loop() {

  jas = analogRead(potPin);
  jas = map(jas, 0, 1023, 0, 255);


  if (digitalRead(tlPin) == HIGH) {
    stav++;
    delay(250);
  }
  if (stav == 3)
  stav = 0;




  Serial.println(jas);
}

void RGB(int cervena, int zelena, int modra) {
  analogWrite(Blue, modra);
  analogWrite(Red, cervena);
  analogWrite(Green, zelena);
  delay(100);
}
