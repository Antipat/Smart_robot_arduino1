int piezo = 13;
int svet1 = 12;
int svet2 = 11;
int svet3 = 10;

void setup() {
  pinMode(piezo,OUTPUT);
  pinMode(svet1,OUTPUT);
  pinMode(svet2,OUTPUT);
  pinMode(svet3,OUTPUT);
  }
void loop() {
 digitalWrite(svet1, HIGH);
 digitalWrite(svet2, LOW);
 digitalWrite(svet3, LOW);
  tone(piezo, -1);
  delay(5000);
  digitalWrite(svet1, LOW);
 digitalWrite(svet3, LOW);
 digitalWrite(svet2, HIGH);
 delay(5000);
 digitalWrite(svet2, LOW);
 digitalWrite(svet1, LOW);
 digitalWrite(svet3, HIGH);
 delay(5000);
  for (int i =0; i<3; i++){
    digitalWrite(svet3, HIGH);
    tone(piezo, 1000);
    delay(1000);
    digitalWrite(svet3, LOW);
    tone(piezo, 200);
    delay(1000);
    digitalWrite(svet3, HIGH);
    tone(piezo, 1000);
    delay(1000);
    digitalWrite(svet3, LOW);
    tone(piezo, 200);
    delay(1000);
    digitalWrite(svet3, HIGH);
    tone(piezo, 1000);
    delay(1000);
   }
   tone(piezo, -1);
   digitalWrite(svet3, LOW);
 digitalWrite(svet1, LOW);
 digitalWrite(svet2, HIGH);
 delay(5000);
  }
  
