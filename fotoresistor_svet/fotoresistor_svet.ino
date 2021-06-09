int foto =A0;
int svet =12;

void setup() {
  pinMode(foto, INPUT);
  pinMode(svet, OUTPUT);
  Serial.begin(9600);
  }

void loop() {

  if( analogRead(foto)>800)
  {
digitalWrite(svet,HIGH);
        }
  else
  {
    digitalWrite(svet,LOW);
    }
    Serial.println(analogRead(foto));
  delay(300);
}
