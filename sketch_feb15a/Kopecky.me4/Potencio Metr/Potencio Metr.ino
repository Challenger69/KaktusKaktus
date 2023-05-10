const int cervena = 11;
const int zelena = 10;
const int modra = 9;
const int pot = A2;

int jas = 0;

void setup() {
  pinMode(cervena, OUTPUT);
  pinMode(zelena, OUTPUT);
  pinMode(modra, OUTPUT);

  pinMode(A2, INPUT);
}

void loop() {
  jas = analogRead(pot);
  jas = map(jas, 0, 1023, 0, 255);

  RGB(255 - jas, 0, jas);
}

void RGB(int barvaC, int barvaZ, int barvaM) {
  analogWrite(cervena, barvaC);
  analogWrite(zelena, barvaZ);
  analogWrite(modra, barvaM);
  delay(1);
}