#include <Keypad.h> 

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
int s1=12;
int s2 =13;

void setup(){
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);

Serial.begin(9600);

}

void loop(){

char customKey = customKeypad.getKey();
if (customKey){
Serial.println(customKey);}
if(customKey=='1'){
  digitalWrite(s1,HIGH);
}
if(customKey=='2'){
  digitalWrite(s1,LOW);
}
if(customKey=='5'){
  digitalWrite(s2,HIGH);
}
if(customKey=='B'){
  digitalWrite(s2,LOW);
}
}
