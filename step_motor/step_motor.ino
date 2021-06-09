
#include <Stepper.h>

Stepper myStepper(200, 8, 9, 10, 11);

void setup() {
  
  myStepper.setSpeed(70);
  
  Serial.begin(9600);
}

void loop() {
  
  Serial.println("clockwise");
  myStepper.step(1024);
  delay(500);

 
  Serial.println("counterclockwise");
  myStepper.step(-1024);
  delay(500);
}
