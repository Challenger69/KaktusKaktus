#include <Servo.h>

Servo NS;                   //DŮLEŽITÉ!!!!!: Je velmi vysoká pravděpodobnost, že servo a krokáč který dostanete bude rozbitý, proto v případě, že se nic nehýbe a kod je v pořádku zkontrolován, vyměňte nejdříve tyto součástky
                          
const int SPD = 9;        //Pin 9; Signál pro servo. Vodiče serva: oranžový-signál; červená- +5V; hnědá-GND

const int IN1 = 16;       //PIN A2;     IN1-4 = Připojení pro signál krokového motoru. Na desce pro krokáč je potřeba ještě připojit napájení 5V 
const int IN2 = 17;       //PIN A3;      Nezapomenout, že pokud označujeme analogové výstupy za digitální tak postupujeme takto: A0=14; A1=15; A2= 16 atd........
const int IN3 = 18;       //PIN A4;
const int IN4 = 19;       //PIN A5;

const int JoystickX = A1;  //VRx  Na Joysticku jsou označeny osy. Nezapomenout připojit napájení 5V
const int JoystickY = A0;  //VRy
int x,y;
int poloha = 10;             //nastavi vysku ruky, nute seridit k tomu i mechanicky

void setup() {
  pinMode(IN1, OUTPUT);    // nějaké ajťákoviny
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  pinMode(JoystickX, INPUT);
  pinMode(JoystickY, INPUT);

  NS.attach(SPD);
  NS.write(poloha);
}

void loop(){
  x = analogRead(JoystickX);
  y = analogRead(JoystickY);

  if(x >= 900)
  rotacePoSmeru();
  else if (x <= 450)
  rotaceProtiSmeru();
 

  

if (y <= 450)
if (poloha <= 179)  //max uhel natočení serva
{poloha++;
  delay(15);
}
  if (y >= 600)
  if (poloha >= 1){
  poloha--;
  delay(15);
  }
  NS.write(poloha);
}

void rotacePoSmeru() {
  krok(1, 0, 0, 0);
  krok(0, 1, 0, 0);
  krok(0, 0, 1, 0);
  krok(0, 0, 0, 1);

}

void rotaceProtiSmeru() {
  krok(0, 0, 0, 1);
  krok(0, 0, 1, 0);
  krok(0, 1, 0, 0);
  krok(1, 0, 0, 0);

}
void krok(int a, int b, int c, int d){
  digitalWrite(IN1, a);
  digitalWrite(IN2, b);
  digitalWrite(IN3, c);
  digitalWrite(IN4, d);
  delay(5);
}                     // Gratuluji, fachá ti to, čili jsi udělal praktickou maturitu. Teď jdi domů a uč se na ústní.