const int radek[8] = {2, 7, 19, 5, 16, 18, 12, 13};
const int sloupec[8] = {6, 11, 4, 3, 17, 10, 8, 9};

const int velikostPole = 28;
int pozice = 0;

const int obrazek1[8][8] = {
  { 0, 1, 0, 0, 0, 0, 1, 0 },
  { 0, 0, 1, 0, 0, 1, 0, 0 },
  { 0, 0, 0, 1, 1, 0, 0, 0 },
  { 1, 0, 1, 0, 0, 1, 0, 1 },
  { 1, 0, 1, 0, 0, 1, 0, 1 },
  { 0, 0, 0, 1, 1, 0, 0, 0 },
  { 0, 0, 1, 0, 0, 1, 0, 0 },
  { 0, 1, 0, 0, 0, 0, 1, 0 }
};

const int obrazek2[8][8] = {
  { 0, 0, 0, 1, 1, 0, 0, 0 },
  { 0, 1, 1, 0, 0, 1, 1, 0 },
  { 1, 0, 0, 1, 1, 0, 0, 1 },
  { 1, 0, 0, 0, 0, 0, 0, 1 },
  { 0, 1, 0, 0, 0, 0, 1, 0 },
  { 0, 0, 1, 0, 0, 1, 0, 0 },
  { 0, 0, 0, 1, 1, 0, 0, 0 },
  { 1, 1, 1, 0, 0, 1, 1, 1 }
};

const int napis[8][velikostPole] = {
  { 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0 },
  { 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0 },
  { 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0 },
  { 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};


void setup() {
   for (int i = 0; i < 8; i++) {
     pinMode(radek[i], OUTPUT);
     pinMode(sloupec[i], OUTPUT);
     digitalWrite(radek[i], LOW);
     digitalWrite(sloupec[i], HIGH);
  }
}

void loop(){
  for (int i = 0; i < 60; i++)
    VT(napis);
  pozice++;

  if(pozice >= velikostPole)
    pozice = 0;

  /*for (int i = 0; i < 2050;i++)
    VO(obrazek1);
  for (int i = 0; i < 2050;i++)
    VO(obrazek2);
*/
}

void VT(int obr [8][velikostPole]) {

  for (int i = 0; i < 8; i++) {
    digitalWrite(sloupec[i], LOW);

    for (int j = 0; j < 8; j++) {
      digitalWrite(radek[j], obr[j][(i + pozice) - abs((i + pozice) / velikostPole) * velikostPole]);
    }

    for (int j = 0; j < 8; j++) {
      digitalWrite(radek[j], LOW);
    }

    digitalWrite(sloupec[i], HIGH);
  } 
}
