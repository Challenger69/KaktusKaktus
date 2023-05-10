const int foto = A2;
const int potPin = A3;
const int TL2 = 2;
const int LED1 = 3;
const int LED2 = 4;
const int LED3 = 5;
const int LED4 = 6;
const int LED5 = 7;
const int LED6 = 8;
const int LED7 = 9;
const int LED8 = 10;
const int LED9 = 11;
const int LED10 = 12;

 

int stav = 0;
int osvetleni =0;

void setup() {
Serial.begin(9600);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(LED5, OUTPUT);
pinMode(LED6, OUTPUT);
pinMode(LED7, OUTPUT);
pinMode(LED8, OUTPUT);
pinMode(LED9, OUTPUT);
pinMode(LED10, OUTPUT);
pinMode(potPin, INPUT);
pinMode(TL2, INPUT);
pinMode(foto, INPUT);
}

void loop() {
  
  if (digitalRead(TL2) == HIGH){
    stav++;
    delay(250);
  }

  if (stav == 0){
    osvetleni = analogRead(potPin);
  }
  else if (stav = 1){
    osvetleni = analogRead(foto);
  }
  else 
  stav = 0;
  
  if (osvetleni >= 100)
  digitalWrite(LED1,HIGH);
  else
  digitalWrite(LED1, LOW);
  
  if (osvetleni >= 200)
  digitalWrite(LED2,HIGH);
  else
  digitalWrite(LED2, LOW);
  
if (osvetleni >= 300)
  digitalWrite(LED3,HIGH);
  else
  digitalWrite(LED3, LOW);


if (osvetleni >= 400)
  digitalWrite(LED4,HIGH);
  else
  digitalWrite(LED4, LOW);

  if (osvetleni >= 500)
  digitalWrite(LED5,HIGH);
  else
  digitalWrite(LED5, LOW);

  if (osvetleni >= 600)
  digitalWrite(LED6,HIGH);
  else
  digitalWrite(LED6, LOW);

  if (osvetleni >= 700)
  digitalWrite(LED7,HIGH);
  else
  digitalWrite(LED7, LOW);

  if (osvetleni >= 800)
  digitalWrite(LED8,HIGH);
  else
  digitalWrite(LED8, LOW);

  if (osvetleni >= 900)
  digitalWrite(LED9,HIGH);
  else
  digitalWrite(LED9, LOW);

  if (osvetleni >= 1000)
  digitalWrite(LED10,HIGH);
  else
  digitalWrite(LED10, LOW);


  //osvetleni = analogRead(potPin);
  Serial.println(osvetleni);
  if (osvetleni  > 100)
  {
    digitalWrite (LED1, HIGH);
digitalWrite (LED2, LOW);
digitalWrite (LED3, LOW);
digitalWrite (LED4, LOW);
digitalWrite (LED5, LOW);
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 200)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, LOW);
digitalWrite (LED4, LOW);
digitalWrite (LED5, LOW);
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 300)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, LOW);
digitalWrite (LED5, LOW);
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 400)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, LOW);
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 500)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 600)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 700)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED7, HIGH);
digitalWrite (LED8, LOW);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 800)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED7, HIGH);
digitalWrite (LED8, HIGH);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 900)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED7, HIGH);
digitalWrite (LED8, HIGH);
digitalWrite (LED9, HIGH);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 1000)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED7, HIGH);
digitalWrite (LED8, HIGH);
digitalWrite (LED9, HIGH);
digitalWrite (LED10, HIGH);
}





 {
 // osvetleni = analogRead(foto);
  Serial.println(osvetleni);
  if (osvetleni  > 100)
  {
    digitalWrite (LED1, HIGH);
digitalWrite (LED2, LOW);
digitalWrite (LED3, LOW);
digitalWrite (LED4, LOW);
digitalWrite (LED5, LOW);
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 200)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, LOW);
digitalWrite (LED4, LOW);
digitalWrite (LED5, LOW);
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 300)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, LOW);
digitalWrite (LED5, LOW);
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 400)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, LOW);
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 500)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 600)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED7, LOW);
digitalWrite (LED8, LOW);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 700)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED7, HIGH);
digitalWrite (LED8, LOW);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 800)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED7, HIGH);
digitalWrite (LED8, HIGH);
digitalWrite (LED9, LOW);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 900)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED7, HIGH);
digitalWrite (LED8, HIGH);
digitalWrite (LED9, HIGH);
digitalWrite (LED10, LOW);
}
if (osvetleni  > 1000)
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED7, HIGH);
digitalWrite (LED8, HIGH);
digitalWrite (LED9, HIGH);
digitalWrite (LED10, HIGH);
}

}
    
  }


