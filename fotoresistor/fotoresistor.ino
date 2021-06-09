int foto =A0;

void setup() {
  pinMode(foto, INPUT);
  Serial.begin(9600);
  

}

void loop() {
  Serial.println(analogRead(foto));
  delay(500);

}
