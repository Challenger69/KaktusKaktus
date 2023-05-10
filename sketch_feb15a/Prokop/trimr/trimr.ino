const int R1 = 2;
const int R2 = 7;
const int R3 = 19;
const int R4 = 5;
const int R8 = 16;

const int S1 = 6;
const int S2 = 11;
const int S3 = 10;
const int S4 = 3;
const int S8 = 9;

void setup() {
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(R4, OUTPUT);
  pinMode(R8, OUTPUT);

  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(S4, OUTPUT);
  pinMode(S8, OUTPUT);

  digitalWrite(R1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(R3, LOW);
  digitalWrite(R4, LOW);
  digitalWrite(R8, LOW);

  digitalWrite(S1, HIGH);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  digitalWrite(S4, HIGH);
  digitalWrite(S8, HIGH);
}

void loop() {
  digitalWrite(S1, LOW);

  digitalWrite(R1, HIGH);

  digitalWrite(R2, HIGH);

  digitalWrite(R3, HIGH);

  digitalWrite(R4, HIGH);


  digitalWrite(R1, LOW);

  digitalWrite(R2, LOW);

  digitalWrite(R3, LOW);

  digitalWrite(R4, LOW);


// 2 SLOUPEC
  digitalWrite(S1, HIGH);
  digitalWrite(S2, LOW);

  digitalWrite(R1, HIGH);

  digitalWrite(R4, HIGH);


  digitalWrite(R1, LOW);

  digitalWrite(R4, LOW);


  digitalWrite(S2, HIGH);

  //sloupec 3

  digitalWrite(S3, LOW);

  digitalWrite(R1, HIGH);

  digitalWrite(R4, HIGH);


  digitalWrite(R1, LOW);

  digitalWrite(R4, LOW);


  digitalWrite(S3, HIGH);

//sloupec 4
  digitalWrite(S4, LOW);

  digitalWrite(R1, HIGH);

  digitalWrite(R2, HIGH);

  digitalWrite(R3, HIGH);

  digitalWrite(R4, HIGH);


  digitalWrite(R1, LOW);

  digitalWrite(R2, LOW);

  digitalWrite(R3, LOW);

  digitalWrite(R4, LOW);

  digitalWrite(S4, HIGH);
}
