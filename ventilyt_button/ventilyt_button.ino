int m1 = 8;
int m2 = 9;
int v = 11;
int svet = 10;
int button1 = 7;
int button2 = 6;

void setup() {
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(svet,OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  
  pinMode(v,OUTPUT);
  analogWrite(v, 0);
  digitalWrite(svet, LOW;
  
}

void loop() {
  

 if (digitalRead(button1) == HIGH) {

digitalWrite(svet, HIGH);

}
else {

digitalWrite(svet, LOW);
}

if (digitalRead(button2) == HIGH) {

digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  analogWrite(v, 255);
}

else {

digitalWrite(m1, LOW);
digitalWrite(m2, LOW);
analogWrite(v, 0);
}
}
