int p =  13;
int f1 = A1;
int f2 = A2;
int f3 = A3;
int f4 = A4;
int f5 = A5;

void setup() {
pinMode(p, OUTPUT);  

pinMode(f1, INPUT);  
pinMode(f2, INPUT);
pinMode(f3, INPUT);
pinMode(f4, INPUT);
pinMode(f5, INPUT);

Serial.begin(9600);

}


void loop() {
  if (analogRead(f1)>320)
  {
    tone(p, 261);
    delay(500);
    }

    else if (analogRead(f2)>350 )

    {
      tone(p, 293);
      delay(500);
      }

      else if (analogRead(f3)>350 )

    {
      tone(p, 329);
      delay(500);
      }

      else if (analogRead(f4)>350 )

    {
      tone(p,349 );
      delay(500);
      }

      else if (analogRead(f5)>350 )

    {
      tone(p, 440);
      delay(500);
      }

      tone(p, -1);
Serial.println(analogRead(f1));
//Serial.println(analogRead(f2));
//Serial.println(analogRead(f3));
//Serial.println(analogRead(f4));
//Serial.println(analogRead(f5));

//delay(500);
}
