//semafor krizovatky penny - pohled na semafory je brany uproster krizovatky


//tlacitko
int tl = 21;   //moznost pouzit pouze tyto piny kvuli preruseni 2, 3, 18, 19, 20, 21

//prvni semafor - smer od penny
int cervena = 13;
int zluta = 12;
int zelena = 11;
int sipka = 10;
//druhy semafor - smer od cernych mostu
int cervena2 = 9;
int zluta2 = 8;
int zelena2 = 7;
int sipka2 = 6;
// treti smer - k cernym mostum
int cervena3 = 5;
int zluta3 = 4;
int zelena3 = 3;
//odboceni doleva z budejovicke k penny
int lcervena = 2;
int lzluta = 1;
int lzelena = 0;
//chodci
int chcervena =23;
int chzelena =22;
//cas zpozdeni
int cekejSekund = 1;
long zpozdeni = cekejSekund*1000;




void setup() {
    //prvni - smer od penny
    pinMode(cervena, OUTPUT);
    pinMode(zluta, OUTPUT);
    pinMode(zelena, OUTPUT);
    pinMode(sipka, OUTPUT);
    //druhy - smer od cernych mostu
    pinMode(cervena2, OUTPUT);
    pinMode(zluta2, OUTPUT);
    pinMode(zelena2, OUTPUT);
    pinMode(sipka2, OUTPUT);
    // treti - smer k cernym mostum
    pinMode(cervena3, OUTPUT);
    pinMode(zluta3, OUTPUT);
    pinMode(zelena3, OUTPUT);
    //odboceni z budejovicke doleva k penny
    pinMode(lcervena, OUTPUT);
    pinMode(lzluta, OUTPUT);
    pinMode(lzelena, OUTPUT);
    //chodci
    pinMode(chcervena, OUTPUT);
    pinMode(chzelena, OUTPUT);


    //tlacitko
    pinMode(tl, INPUT);
    //po stisknuti tlacitka prerusi hlavni program a spusti program chodci na nabeznou hranu-(RISING)
    attachInterrupt(digitalPinToInterrupt(tl), chodci, RISING);


     //prvni smer od penny
    digitalWrite(zelena, LOW);
    digitalWrite(cervena, HIGH);
    digitalWrite(zluta, LOW);
    digitalWrite(sipka, LOW);
    //druhy smer od cernych mostu na budejovickou
    digitalWrite(zelena2, LOW);
    digitalWrite(cervena2, HIGH);
    digitalWrite(zluta2, LOW);
    digitalWrite(sipka2, LOW);
    // treti smer k cernym mostum z budejovicke
    digitalWrite(zelena3, LOW);
    digitalWrite(cervena3, HIGH);
    digitalWrite(zluta3, LOW);
    //odboceni z budejovicke doleva k penny
    digitalWrite(lzelena, LOW);
    digitalWrite(lcervena, HIGH);
    digitalWrite(lzluta, LOW);
    //chodci
    digitalWrite(chcervena, HIGH);
    digitalWrite(chzelena, LOW);

}





void loop() {

  //zapne sipku od cernych mostu a od penny
    digitalWrite(sipka, HIGH);
    digitalWrite(sipka2, HIGH);
    delay(zpozdeni*2);
     //pozor pripravit
    digitalWrite(zluta, HIGH);
    digitalWrite(cervena, HIGH);
    delay(zpozdeni);
    //zelena
    digitalWrite(sipka, LOW);
    digitalWrite(zelena, HIGH);
    digitalWrite(zluta, LOW);
    digitalWrite(zluta2, LOW);
    digitalWrite(cervena, LOW);
    delay(zpozdeni*3);
    //pozor prijde cervena
    digitalWrite(zelena, LOW);
    digitalWrite(sipka2, LOW);
    digitalWrite(zluta, HIGH);
    delay(zpozdeni);
    //cervena
    digitalWrite(cervena, HIGH);
    digitalWrite(zluta, LOW);
    digitalWrite(sipka2, LOW);
    delay(zpozdeni);



    //zapne semafor od cernich mostu na budejovickou a z budejovicke na cerne mosty
    //pozor pripravit
    digitalWrite(zluta2, HIGH);
    digitalWrite(zluta3, HIGH);
    delay(zpozdeni);
    //zelena
    digitalWrite(zelena2, HIGH);
    digitalWrite(zelena3, HIGH);
    digitalWrite(zluta2, LOW);
    digitalWrite(zluta3, LOW);
    digitalWrite(cervena2, LOW);
    digitalWrite(cervena3, LOW);
    delay(zpozdeni*3);
    //pozor prijde cervena
    digitalWrite(zelena2, LOW);
    digitalWrite(zelena3, LOW);
    digitalWrite(zluta2, HIGH);
    digitalWrite(zluta3, HIGH);
    delay(zpozdeni);
    //cervena
    digitalWrite(zluta2, LOW);
    digitalWrite(zluta3, LOW);
    digitalWrite(cervena2, HIGH);
    digitalWrite(cervena3, HIGH);
    delay(zpozdeni);


    //zapne semafor od budejovicke k penny a od peny k budejovicke
    //
    digitalWrite(lzluta, HIGH);
    delay(zpozdeni);
    //zelena
    digitalWrite(lzelena, HIGH);
    digitalWrite(lzluta, LOW);
    digitalWrite(lcervena, LOW);
    digitalWrite(sipka, HIGH);
    delay(zpozdeni*3);
    //pozor prijde cervena
    digitalWrite(lzelena, LOW);
    digitalWrite(lzluta, HIGH);
    digitalWrite(sipka, LOW);
    delay(zpozdeni);
    //cervena
    digitalWrite(lzluta, LOW);
    digitalWrite(lcervena, HIGH);
    delay(zpozdeni);
    


    //semafor mimo provoz
    //vypne cervene
    digitalWrite(cervena, LOW);
    digitalWrite(cervena2, LOW);
    digitalWrite(cervena3, LOW);
    digitalWrite(lcervena, LOW);
    //zapne zlute
    digitalWrite(zluta, HIGH);
    digitalWrite(zluta2, HIGH);
    digitalWrite(zluta3, HIGH);
    digitalWrite(lzluta, HIGH);
    delay(zpozdeni);
    digitalWrite(zluta, LOW);
    digitalWrite(zluta2, LOW);
    digitalWrite(zluta3, LOW);
    digitalWrite(lzluta, LOW);
    delay(zpozdeni);
    digitalWrite(zluta, HIGH);
    digitalWrite(zluta2, HIGH);
    digitalWrite(zluta3, HIGH);
    digitalWrite(lzluta, HIGH);
    delay(zpozdeni);
    digitalWrite(zluta, LOW);
    digitalWrite(zluta2, LOW);
    digitalWrite(zluta3, LOW);
    digitalWrite(lzluta, LOW);
    delay(zpozdeni);
    digitalWrite(zluta, HIGH);
    digitalWrite(zluta2, HIGH);
    digitalWrite(zluta3, HIGH);
    digitalWrite(lzluta, HIGH);
    delay(zpozdeni);
    //vypne zlute
    digitalWrite(zluta, LOW);
    digitalWrite(zluta2, LOW);
    digitalWrite(zluta3, LOW);
    digitalWrite(lzluta, LOW);
    delay(zpozdeni);
    digitalWrite(zluta, HIGH);
    digitalWrite(zluta2, HIGH);
    digitalWrite(zluta3, HIGH);
    digitalWrite(lzluta, HIGH);
    delay(zpozdeni);
    //vypne zlute
    digitalWrite(zluta, LOW);
    digitalWrite(zluta2, LOW);
    digitalWrite(zluta3, LOW);
    digitalWrite(lzluta, LOW);
    delay(zpozdeni);
    //zapne cervene
    digitalWrite(cervena, HIGH);
    digitalWrite(cervena2, HIGH);
    digitalWrite(cervena3, HIGH);
    digitalWrite(lcervena, HIGH);

  }





void chodci(){

//prepne vsechny semafory na cervenou
digitalWrite(cervena, HIGH);
digitalWrite(cervena2, HIGH);
digitalWrite(cervena3, HIGH);
digitalWrite(lcervena, HIGH);
//vypne zbytek zapnutych led
digitalWrite(zluta, LOW);
digitalWrite(zluta2, LOW);
digitalWrite(zluta3, LOW);
digitalWrite(zelena, LOW);
digitalWrite(zelena2, LOW);
digitalWrite(zelena3, LOW);
digitalWrite(sipka, LOW);
digitalWrite(sipka2, LOW);
digitalWrite(lzelena, LOW);
digitalWrite(lzluta, LOW);
delay(zpozdeni);
//zapne chodcum zelenou
digitalWrite(chcervena, LOW);
digitalWrite(chzelena, HIGH);
delay(zpozdeni*500);
//vypne chodcum zelenou
digitalWrite(chcervena, HIGH);
digitalWrite(chzelena, LOW);
delay(zpozdeni*500);

}



//zaklad semaforu
/*
    digitalWrite(zelena,LOW);
    digitalWrite(zluta, HIGH);
    digitalWrite(cervena, HIGH);
    delay(1000);
    
    digitalWrite(zelena, HIGH);
    digitalWrite(zluta, LOW);
    digitalWrite(cervena, LOW);
    delay(2000);
   
    digitalWrite(zelena, LOW);
    digitalWrite(zluta, HIGH);
    digitalWrite(cervena, LOW);
    delay(1000);

    
    digitalWrite(zelena, LOW);
    digitalWrite(zluta, LOW);
    digitalWrite(cervena, HIGH);
    delay(100);

    */