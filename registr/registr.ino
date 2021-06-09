int dataPin  = 9;   
int latchPin = 10;  
int clockPin = 11;  

void setup() {
  
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

  digitalWrite(latchPin, LOW);                        
  shiftOut(dataPin, clockPin, LSBFIRST, B01001100);   
  digitalWrite(latchPin, HIGH);                       
}
 
void loop() {

}
