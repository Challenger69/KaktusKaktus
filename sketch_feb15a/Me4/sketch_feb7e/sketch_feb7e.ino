const int radky[] = { 2, 7, 19, 5, 13, 18, 12, 16 };
const int sloupce[] = { 6, 11, 10, 3, 17, 4, 8, 9 };


const int velikostPole = 28;
int pozice = 0;




const int obrazek[8][8] = {
  { 0, 1, 0, 1, 0, 1, 0, 1 },
  { 0, 1, 0, 1, 0, 1, 0, 1 },
  { 0, 1, 0, 1, 0, 1, 0, 1 },
  { 0, 1, 0, 1, 0, 1, 0, 1 },
  { 0, 1, 0, 1, 0, 1, 0, 1 },
  { 0, 1, 0, 1, 0, 1, 0, 1 },
  { 0, 1, 0, 1, 0, 1, 0, 1 },
  { 0, 1, 0, 1, 0, 1, 0, 1 },
};

const int obrazek1[8][8] = {
  { 1, 1, 1, 1, 1, 1, 1, 1 },
  { 0, 1, 0, 0, 0, 0, 1, 0 },
  { 0, 0, 1, 0, 0, 1, 0, 0 },
  { 0, 0, 0, 1, 1, 0, 0, 0 },
  { 0, 0, 0, 1, 1, 0, 0, 0 },
  { 0, 0, 1, 0, 0, 1, 0, 0 },
  { 0, 1, 0, 0, 0, 0, 1, 0 },
  { 1, 1, 1, 1, 1, 1, 1, 1 },
};

const int obrazek2[8][8] = {
  { 1, 1, 1, 1, 1, 1, 1, 1 },
  { 0, 0, 0, 0, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 1, 1, 1, 1 },
  { 0, 0, 0, 0, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 1, 1, 1, 1 },
  { 0, 0, 0, 0, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 1, 1, 1, 1 },
  { 0, 0, 0, 0, 0, 0, 0, 0 },
};

const int napis[8][velikostPole] = {
  
  {0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0},
  {0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0},
  {0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0},
  {0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

void setup() {

  for (int i = 0; i < 8; i++) {
    pinMode(radky[i], OUTPUT);
    pinMode(sloupce[i], OUTPUT);
    digitalWrite(radky[i], LOW);
    digitalWrite(sloupce[i], HIGH);
  }
}

void loop() {
  for (int j = 0; j < 60; j++)
    vykresleniNapisu(napis);
  pozice++;

  if(pozice>=velikostPole)
  pozice=0;
}




void vykresleniObrazku(int data[8][8]) {
  for (int j = 0; j < 8; j++) {
    digitalWrite(sloupce[j], LOW);

    for (int i = 0; i < 8; i++) {
      digitalWrite(radky[i], data[i][j]);
      //delay(250);
    }

    for (int i = 0; i < 8; i++) {
      digitalWrite(radky[i], LOW);
      //delay(250);
    }

    digitalWrite(sloupce[j], HIGH);
  }
}

void vykresleniNapisu(int data[8][velikostPole]) {
  for (int j = 0; j < 8; j++) {
    digitalWrite(sloupce[j], LOW);

    for (int i = 0; i < 8; i++) {
      digitalWrite(radky[i], data[i][(j + pozice) - abs((j + pozice) / velikostPole) * velikostPole]);
      //delay(250);
    }

    for (int i = 0; i < 8; i++) {
      digitalWrite(radky[i], LOW);
      //delay(250);
    }

    digitalWrite(sloupce[j], HIGH);
  }
}