const int Joystick_x = A1;
const int Joystick_y = A0;
const int Joystick_sw = 12;

int x,y,t;


void setup() {
  Serial.begin(9600);
  pinMode(Joystick_x, INPUT);
  pinMode(Joystick_y, INPUT);
  pinMode(Joystick_sw, INPUT_PULLUP);
}

void loop() {
  x = analogRead(Joystick_x);
  y = analogRead(Joystick_y);
  t = digitalRead(Joystick_sw);

  Serial.print("X= ");
  Serial.print(x);

  Serial.print(", Y = ");
  Serial.print(y);

  Serial.print(", T = ");
  Serial.println(t);
  
  delay(100);


}
