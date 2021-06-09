int m1 = 12;
int m2 = 11;

void setup() {
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
 
}

void loop() {
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  delay(3000);
  
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  delay(3000);
  
  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
  delay(3000);

}
