/*Displej 8x8 posledni verze.

je tu jeste par veci co by stalo za to udelat/vedet:
-ctrl+T zarovna zavorky... velmi sikovne
-pokud nemate naladu prepisovat a vymyslet vsechny ty poznamky, tak je proste vsechny smazte... PROSTE NENECHAVAT TAK JAK JE...
- promnene v for u intu maji byt jen i k l  pry je to takove nepsane pravidlo

DRIVE NEZ SE ZACNETE HRABAT V KODU TAK ZJISTETE CO TO DELA A PRECTETE SI TY POZNAMKY...

*/

const int radky[8] = { 2, 7, 19, 5, 13, 18, 12, 16 };       //[pocet hodnot] {prvniradek_PinNaArdu, druhyradek_..., treti....}
const int sloupec[8] = { 6, 11, 10, 3, 17, 4, 8, 9 };       // to samy ale sloupce


const int velikostPole = 28;                                //nastavime rozmery (sirka pole pro text)
int pozice = 0;

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
  for (int i = 0; i < 8; i++)                               //(ridici promnena, int i nebo k nebo l = nastaveni 0; podminka dokud je i mensi nez 8; pokazde pricte jednicku)  ((pry je to lepsi nez Xkrat vypisovat pinMody)); musi byt slozene zavorky
  {
    pinMode(radky[i], OUTPUT);                              //nastaveni jako vystup, nesahat...
    pinMode(sloupec[i], OUTPUT);                            //nastaveni jako vystup, nesahat...

    digitalWrite(radky[i], LOW);                            //LOW bude mozna potreba otocit s HIGH
    digitalWrite(sloupec[i], HIGH);                         //pokud to otocis nahore, otoc to i tady. Jinak big-bumbum; (kdyz se to otoci tak to sviti vsechno (takze pokud to vse sviti a nema, pravepodobne to bude tohle))
  }
}



void loop() {                                               //tady probiha hlavni program.
  
  for (int k = 0; k < 60; k++)                              //vyresi problikavani NAPISU
    vt(napis);
  pozice++;

  if (pozice >= velikostPole)                               //po milionu cyklech by se to rozbilo, tohle to vyresi; Proste nemazat OK?
    pozice = 0;
}








void vt(int obr[8][velikostPole]) {                         //vt = zkratka pro VypisTextu(kdyby se nekdo ptal); mozno prejmenovat dle libosti

  for (int i = 0; i < 8; i++)                               //nastavujeme sloupec 
  {
    digitalWrite(sloupec[i], LOW);                          //tohle je nejaka magie. tohle musi byt na zacatku; rikal, co to dela a bylo to fakt dulezite, ale ne na tolik abych si to pamatoval....

    for (int l = 0; l < 8; l++)                             //nesmi se jmenovat jako ty predchozi promnene... takze zadne i
    {
      digitalWrite(radky[l], obr[l][(i + pozice) - abs((i + pozice) / velikostPole) * velikostPole]);  //[znak pro radky][ (i + pozice)-abs((i + pozice)/ velikostPole) * velikostPole ]
    }
    for (int l = 0; l < 8; l++)                             //musi byt kvuli tomu vrchnimu FORu
    { digitalWrite(radky[l], LOW); }


    digitalWrite(sloupec[i], HIGH);                         //a tohle musi byt na konci
  };
}
}
