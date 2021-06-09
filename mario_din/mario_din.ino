


#include <Stepper.h>

Stepper myStepper(255, 8, 9, 10, 11);

void setup() {
  
  myStepper.setSpeed(100);
  
  Serial.begin(9600);
}

void loop() {
  
  Serial.println("clockwise");
  myStepper.step(64);
  delay(10);

 
 
}
