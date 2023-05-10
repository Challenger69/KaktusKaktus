const int radek[] = { 3, 4, 5, 6, 7, 8, 9, 10 };
const int sloupec[] = { 12, 13, 14, 15, 16, 17, 18, 19 };

const int obrazek1[8][8]=
{

  {0,0,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {1,0,1,0,0,1,0,1},
  {1,0,1,0,0,1,0,1},
  {1,0,0,0,0,0,0,1},
  {1,0,1,0,0,1,0,1},
  {0,1,0,1,1,0,1,0},
  {0,0,1,1,1,1,0,0}
};
const int obrazek2[8][8]=
{

  {0,1,1,0,0,1,1,0},
  {1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1},
  {0,1,1,1,1,1,1,0},
  {0,0,1,1,1,1,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,0,0,0,0,0}
};

void setup() {
  for (int i = 0; i < 8; i++) 
  {
    pinMode(radek[i], OUTPUT);
    pinMode(sloupec[i], OUTPUT);
    digitalWrite(radek[i], LOW);
    digitalWrite(sloupec[i], HIGH);
  }
}
void loop(){
  for(int i=0; i<1000; i++)
  vykresleniobrazku(obrazek1);
  
  for(int i=0; i<1000; i++)
  vykresleniobrazku(obrazek2);

}
void vykresleniobrazku(int data[8][8]) 
{
  for (int j = 0; j < 8; j++) 
  {
    digitalWrite(sloupec[j], LOW);

    for (int i = 0; i < 8; i++) 
    {
      digitalWrite(radek[i], data[i][j]);
      //delay(300);
    }

    for (int i = 0; i < 8; i++) {
      digitalWrite(radek[i], LOW);
      //delay(300);
    }

    digitalWrite(sloupec[j], HIGH);
  }
}
