
#include <Servo.h>

Servo myservo;  

int s = 0;    // variable to store the servo position

void setup() {
  myservo.attach(12);  // attaches the servo on pin 9 to the servo object
}

void loop() {
    myservo.write(180);              
    delay(1000);                       
  
  
    myservo.write(0);              
    delay(1000);                      
  
}
