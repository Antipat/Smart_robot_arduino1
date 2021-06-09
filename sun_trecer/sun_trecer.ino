#include <Servo.h>
// вводим переменные для фоторезисторов, углов и сервоприводов
Servo myservo1;  
Servo myservo2; 

int foto1 =A0;
int foto2 =A1;
int foto3 =A2;
int foto4 =A3;

int i=10;
int j =20;
int k=0;
void setup() {
  // назначение пинов и скорость передачи данных
  myservo1.attach(13);
  myservo2.attach(12);
  
  pinMode(foto1, INPUT);
  pinMode(foto2, INPUT);
  pinMode(foto3, INPUT);
  pinMode(foto4, INPUT);
  Serial.begin(9600);
  
}

void loop() {
 // проверяем условие между первым и третьем фоторезистором
 if( analogRead(foto1)>analogRead(foto3))
 {
    if (analogRead(foto1)-analogRead(foto3)>40){
    i=i+1;
    myservo1.write(i);
    delay(20);
           }
    
       }

  else{
    
     if (analogRead(foto3)-analogRead(foto1)>40){
    i=i-1  ;
    myservo1.write(i);
    delay(20);
          }
       }
// проверяем условие между вторым и  четвёртым фоторезистором
 if( analogRead(foto2)>analogRead(foto4))
 {
    if (analogRead(foto2)-analogRead(foto4)>40){
    j=j+1;
    myservo2.write(j);
    delay(20);
           }
          }
  else{
     if (analogRead(foto4)-analogRead(foto2)>40){
    j=j-1  ;
    myservo2.write(j);
    delay(20);
          }
       }
// проверка граничных условий    
if (i<=10){
  i=10;
  }

  else if (i>=180){
    i=180;
    }

if (j<=10){
  j=10;
  }

  else if (j>=120){
    j=120;
    }
    // вывод значений для самопроверки
   Serial.println("i=");
    Serial.println(i);
    Serial.println("foto1 =");
    Serial.println(analogRead(foto1));
  delay(300);
  Serial.println("foto3 =");
  Serial.println(analogRead(foto3));
  Serial.println("j=");
  Serial.println(j);
  Serial.println("foto4 =");
 Serial.println(analogRead(foto4));
    Serial.println("foto2 =");
  Serial.println(analogRead(foto2));
}
