const int radky[] = {2, 7, 19, 5, 13, 18, 12, 16};
const int sloupce[] = {6, 11, 10, 3, 17, 4, 8, 9};

void setup() {
  for (int i = 0; i < 8; i++)
  {
    pinMode(radky[i], OUTPUT);
    pinMode(sloupce[i], OUTPUT);
    digitalWrite(radky[i], HIGH);
    digitalWrite(sloupce[i], LOW);
  }

}

void loop() {
}
