
int analogInput = A0;
float value = 0;
float vout =0.0;
float vin = 0.0;
float R1 = 110000.0;
float R2 = 1800.0;

void setup(){
pinMode(analogInput, INPUT);
Serial.begin(9600);
}

void loop(){
value = analogRead(analogInput);
vout = (value*5.0)/1024.0;
vin = vout/(R2/(R1+R2));

if (vin<0.09){
  vin = 0.0; // если показания слишком малы, то отображать 0.0
  }
Serial.println(value);
delay(100);
}
