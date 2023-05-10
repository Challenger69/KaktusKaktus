/*
  Blinking LEDs - test program to run 3 LEDs in a pattern of blinks
*/

int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);   
  pinMode(led2, OUTPUT);  
  pinMode(led3, OUTPUT);    
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led1, HIGH);   
  delay(500);                     
  digitalWrite(led1, LOW);    
  delay(500);                     
  digitalWrite(led2, HIGH);    
  delay(500);                     
  digitalWrite(led2, LOW);     
  delay(500);                     
  digitalWrite(led3, HIGH);     
  delay(500);                      
  digitalWrite(led3, LOW);      
  delay(500);                     
  digitalWrite(led4, HIGH);     
  delay(500);                      
  digitalWrite(led4, LOW);    
  delay(500);                     
  digitalWrite(led5, HIGH);     
  delay(500);                      
  digitalWrite(led5, LOW);      
  delay(500); 

  digitalWrite(led5, HIGH);   
  delay(500);                     
  digitalWrite(led5, LOW);    
  delay(500);                     
  digitalWrite(led4, HIGH);    
  delay(500);                     
  digitalWrite(led4, LOW);     
  delay(500);                     
  digitalWrite(led3, HIGH);     
  delay(500);                      
  digitalWrite(led3, LOW);      
  delay(500);                     
  digitalWrite(led2, HIGH);     
  delay(500);                      
  digitalWrite(led2, LOW);    
  delay(500);                     
  digitalWrite(led1, HIGH);     
  delay(500);                      
  digitalWrite(led1, LOW);      
  delay(500);                    
}
