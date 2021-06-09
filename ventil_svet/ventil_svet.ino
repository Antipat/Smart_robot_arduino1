int m1 = 8;
int m2 = 9;
int v = 11;

int svet = 10;

void setup() {
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(svet,OUTPUT);
  pinMode(v,OUTPUT);
  analogWrite(v, 255);

  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  digitalWrite(svet, HIGH);
  
}

void loop() {
  
 

}
