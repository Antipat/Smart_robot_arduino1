#include <Servo.h>
#include <Keypad.h> 

Servo myservo;  
Servo myservo1;
Servo myservo2;

const byte ROWS = 4; //число строк клавиатуры
const byte COLS = 4; //число столбцов  клавиатуры
char hexaKeys[ROWS][COLS] = {

{'1','4','7','*'}, 

{'2','5','8','0'},

{'3','6','9','#'},

{'A','B','C','D'}

};

byte rowPins[ROWS] = {8,9,10,11}; //строки
byte colPins[COLS] = {4,5,6,7}; //столбцы
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

int i =10;
int ii=30;
int iii=10;
int k=0;
int k1=0;
int k2=0;

void setup() {
  myservo.attach(13);  
  myservo1.attach(12); 
  myservo2.attach(3);
  myservo.write(i);
  myservo1.write(ii);
  myservo2.write(iii); 
 Serial.begin(9600);
}

void loop() {
 char customKey = customKeypad.getKey();
if (customKey){
Serial.println(customKey);}
if(customKey=='1'){
    i=i+15;
  k=k+1;
    myservo.write(i); 
    Serial.println(i);             
    delay(500);
    }    
if(customKey=='2'){
    myservo.write(i); 
    i=i-15 ;
    k=k-1;   
    Serial.println(i);          
    delay(500); 
    } 
if(customKey=='3'){
     myservo1.write(ii);
    Serial.println(ii); 
    ii=ii+15 ;
    k1=k1+1 ;            
    delay(500); }    
if(customKey=='4'){
      myservo1.write(ii);
    Serial.println(ii);  
    ii=ii-15 ; 
    k1=k1-1;           
    delay(500); } 
if(customKey=='5'){
    myservo2.write(iii);
    iii=iii+15;
    k2=k2+1;    
    Serial.println(iii);           
    delay(100); }    
if(customKey=='6'){
   
    myservo2.write(iii);    
    iii=iii-15 ; 
    k2=k2-1 ;
    Serial.println(iii );        
    delay(100); } 
    
// поставим ограничение на повороты

if( k>=12 ){
  i=179;
  }

   else if( k<=0){
    i=10;
    }   
  if( k1>=5 ){
  ii=90;
  }

   else if( k1<=0){
    ii=30;
 
    }
if( k2>=10){
  iii=179;
  }

   else if( k2<=1){
    iii=10;
    }   
       
}
