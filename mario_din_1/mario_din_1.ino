#include <Stepper.h>
Stepper myStepper(255, 8, 9, 10, 11);

int button1 = 7;
int button2 = 12;
int m1 = 5;
int m2 = 6;

int line=A0;
int p=13;

void setup() {
  
  myStepper.setSpeed(100);
Serial.begin(9600);
pinMode(m1, OUTPUT);
pinMode(m2, OUTPUT);

pinMode(button1, INPUT);
pinMode(button2, INPUT);
pinMode(line, INPUT);

digitalWrite(m1, LOW);
digitalWrite(m2, LOW);
Serial.begin(9600);
}

void loop(){

if (digitalRead(button1) == HIGH) {
 digitalWrite(m1, HIGH);
 digitalWrite(m2, LOW);
delay(200);
}

else {
digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
}

if (digitalRead(button2) == HIGH) {
 digitalWrite(m1, LOW);
 digitalWrite(m2, HIGH);
}

else {
digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);

}

if (analogRead(line)>285) {
  tone (p, 100);
  delay(200); 
   tone (p, -1);
 
}

Serial.println(analogRead(line));
myStepper.step(64);
delay(10);

}
