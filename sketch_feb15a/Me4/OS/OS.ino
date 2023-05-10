int analogPin = A2;
int hodnota = 0;

void setup() {
  Serial.begin(9600);
  pinMode(A2, INPUT);
}

void loop() {
  hodnota = analogRead(A2);

  Serial.println(hodnota);


}
