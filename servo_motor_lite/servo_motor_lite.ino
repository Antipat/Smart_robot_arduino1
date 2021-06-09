
#include <Servo.h>

Servo myservo;  

int s = 0;    // variable to store the servo position

void setup() {
  myservo.attach(12);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (int i=10; i<120; i++ ){
    myservo.write(i);              
    delay(10); }                      
  
  for (int i=120; i>10; i-- ){
    myservo.write(i);              
    delay(10); } 
                         
  
}
