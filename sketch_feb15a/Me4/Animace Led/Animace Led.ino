const int cervena = 11;
const int zelena = 10;
const int modra = 9;
const int pot = A2;
const int tla = 3;


int jas = 0;
int stav = 0;


void setup() {
Serial.begin(9600);



pinMode(cervena, OUTPUT);
pinMode(zelena, OUTPUT);
pinMode(modra, OUTPUT);

pinMode(pot, INPUT);
pinMode(tla, INPUT);

}


void loop() {
if(digitalRead(tla) == HIGH){
stav++;
delay(250);
} 
if(stav == 3)
stav = 0;


jas = analogRead(pot);
jas = map(jas, 0, 1023, 0, 255);


if(stav == 0)
analogWrite(zelena, jas);


if(stav == 1)
analogWrite(modra, jas);


if(stav == 2)
analogWrite(cervena, jas);




Serial.println(stav);









}
























