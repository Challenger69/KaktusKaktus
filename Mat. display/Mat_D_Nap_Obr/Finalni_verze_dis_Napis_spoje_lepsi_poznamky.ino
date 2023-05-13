




const int radky[8] = { 2, 7, 19, 5, 13, 18, 12, 16 };  //[pocet hodnot] {prvniradek_PinNaArdu, druhyradek_..., treti....}
const int sloupec[8] = { 6, 11, 10, 3, 17, 4, 8, 9 };  // to samy ale sloupce

const int velikostPole = 28;                           //nastavime rozmery (sirka pole pro text)
int pozice = 0;


// ctrl+T zarovna zavorky... velmi sikovne


const int obrazek[8][8] =  //[radky] [sloupce] ; Asi by nevadilo kdyby se ty obrazky smazali
  {
    { 0, 1, 0, 1, 0, 1, 0, 1 },
    { 1, 0, 1, 0, 1, 0, 1, 0 },
    { 0, 1, 0, 1, 0, 1, 0, 1 },
    { 1, 0, 1, 0, 1, 0, 1, 0 },
    { 0, 1, 0, 1, 0, 1, 0, 1 },
    { 1, 0, 1, 0, 1, 0, 1, 0 },
    { 0, 1, 0, 1, 0, 1, 0, 1 },
    { 1, 0, 1, 0, 1, 0, 1, 0 }
  };

const int obrazek2[8][8] =  //[radky] [sloupce] ; Asi by nevadilo kdyby se ty obrazky smazali
  {
    { 1, 0, 1, 0, 1, 0, 1, 0 },
    { 0, 1, 0, 1, 0, 1, 0, 1 },
    { 1, 0, 1, 0, 1, 0, 1, 0 },
    { 0, 1, 0, 1, 0, 1, 0, 1 },
    { 1, 0, 1, 0, 1, 0, 1, 0 },
    { 0, 1, 0, 1, 0, 1, 0, 1 },
    { 1, 0, 1, 0, 1, 0, 1, 0 },
    { 0, 1, 0, 1, 0, 1, 0, 1 }
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
  for (int i = 0; i < 8; i++)  //(ridici promnena, int i nebo k nebo l = nastaveni 0; podminka dokud je i mensi nez 8; pokazde pricte jednicku)  ((pry je to lepsi nez Xkrat vypisovat pinMody)); musi byt slozene zavorky
  {
    pinMode(radky[i], OUTPUT);       //nastaveni jako vystup, nesahat...         
    pinMode(sloupec[i], OUTPUT);     //nastaveni jako vystup, nesahat...   

    digitalWrite(radky[i], LOW);     //LOW bude mozna potreba otocit s HIGH     
    digitalWrite(sloupec[i], HIGH);  //pokud to otocis nahore, otoc to i tady. Jinak big-bumbum; (kdyz se to otoci tak to sviti vsechno (takze pokud to vse sviti a nema, pravepodobne to bude tohle))
  }
}


void loop() {
  /* 
  //tahle zakomentovana vecicka prohazuje Obrazek s Obrazkem2 to asi chtit nebude, takze pokud ne, lze smazat

  for(int k =0; k<1000; k++){           //velikost k< xxxx se rovna casu co tam obrazek bude... cim vic tim vic...
  vo(obrazek);}

  for(int k =0; k<100; k++){
  vo(obrazek2);}
  */

 for(int z =0; z<60; z++)  //vyresi problikavani NAPISU
    vt(napis);  
  pozice++;

if(pozice>= velikostPole)   //po milionu cyklech by se to rozbilo, tohle to vyresi; Proste nemazat OK?
pozice = 0;

}

void vt(int obr[8][velikostPole]) {

  for (int i = 0; i < 8; i++)  //nastavujeme GND sloupcu (tam tuhle poznamku smaz)
  {
    digitalWrite(sloupec[i], LOW);          //tohle je nejaka magie. tohle musi byt na zacatku 

    for (int l = 0; l < 8; l++)             //nesmi se jmenovat jako ty predchozi promnene... takze zadne i
    { digitalWrite(radky[l], obr[l][ (i + pozice)-abs((i + pozice)/ velikostPole) * velikostPole ] );    //[znak pro radky][ (i + pozice)-abs((i + pozice)/ velikostPole) * velikostPole ] 

    }  
    for (int l = 0; l < 8; l++)  //musi byt kvuli tomu vrchnimu FORu
    { digitalWrite(radky[l], LOW); }


    digitalWrite(sloupec[i], HIGH);         //a tohle musi byt na konci 

  };
}




void vo(int obr[8][8]) {                          //tohle pujde taky smazat

  for (int i = 0; i < 8; i++)  //nastavujeme uzemneni sloupcu
  {
    digitalWrite(sloupec[i], LOW);

    for (int l = 0; l < 8; l++)             //nesmi se jmenovat jako ty predchozi promnene... takze zadne i
    { digitalWrite(radky[l], obr[l][i]);    //[znak pro radky][znak pro sloupce]

    }  
    for (int l = 0; l < 8; l++)  //musi byt kvuli tomu vrchnimu
    { digitalWrite(radky[l], LOW); }


    digitalWrite(sloupec[i], HIGH);
  };
}
