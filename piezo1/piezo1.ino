int piezo = 10;

void setup() {

  pinMode(piezo, OUTPUT);

}

void loop() {
  
tone(piezo, 200);

delay(300);

tone(piezo, 2000);

delay(1000);

tone(piezo, -1);

delay(1000);


}
