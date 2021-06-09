int dataPin  = 9;   //Пин подключен к DS входу 74HC595
int latchPin = 10;  //Пин подключен к ST_CP входу 74HC595
int clockPin = 11;  //Пин подключен к SH_CP входу 74HC595

int s1=2;
int s2 =3;
int s3 = 4;
int s4 = 5;

byte path[1]= {
  B00000000};

void setup() {
  //устанавливаем режим OUTPUT
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(s4, OUTPUT);

  digitalWrite(s1, HIGH);
  digitalWrite(s2, HIGH);
  digitalWrite(s3, HIGH);
  digitalWrite(s4, HIGH);
  
}
 
void loop() {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, path[1]);
    digitalWrite(latchPin, HIGH);
    delay(1);
    for (int i=0; i<4; i++) {
      if (i==0){
      digitalWrite(s1, HIGH);
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    digitalWrite(s4, LOW);
    delay(200);}
    else if (i==1){
      digitalWrite(s1, LOW);
    digitalWrite(s2, HIGH);
    digitalWrite(s3, LOW);
    digitalWrite(s4, LOW);
    delay(200);}
    
    else if (i==2){
      digitalWrite(s1, LOW);
    digitalWrite(s2, LOW);
    digitalWrite(s3, HIGH);
    digitalWrite(s4, LOW);
    delay(200);}
    else if (i==3){
      digitalWrite(s1, LOW);
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    digitalWrite(s4, HIGH);
    delay(200);}
    
    }

   
    
  
}
