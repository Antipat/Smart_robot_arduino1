
int line=A0;
//int line=3;

void setup() {
  
 Serial.begin(9600);
  pinMode(line, INPUT);
Serial.begin(9600);
}

void loop(){



//Serial.println(digitalRead(line));
Serial.println(analogRead(line));
delay(300);
}
