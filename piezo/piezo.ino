int p=10;


void setup() {
  pinMode(p, OUTPUT);

}

void loop() {
  
tone (p, 2000); 

delay(3000); 

tone(p, 100); 

delay(2000); 

tone(p, -1); 

delay(1000); 

}
