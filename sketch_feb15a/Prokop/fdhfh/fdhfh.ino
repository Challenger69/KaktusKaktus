const int Joystick_X = A1;
const int Joystick_Y = A0;
const int Joystick_SW = 12;

int x,y,b;

void setup() {
Serial.begin(9600);
  pinMode(Joystick_X, INPUT);
  pinMode(Joystick_Y, INPUT);
  pinMode(Joystick_SW, INPUT_PULLUP);
  
  
}

void loop() {
  x = analogRead(Joystick_X);
  y = analogRead(Joystick_Y);
  b = digitalRead(Joystick_SW);

  Serial.print("X = ");
  Serial.print(x);

  Serial.print(", Y = ");
  Serial.print(y);

  Serial.print(", B = ");
  Serial.println(b);

  delay(100);


}
