int l1 = 13;
int l2 = 12;
int l3 = 11;
int l4 = 10;
int l5 = 9;
int p =  7;

int f1 = A0;
int f2 = A1;
int f3 = A2;
int f4 = A3;
int f5 = A4;

void setup() {
pinMode(l1, OUTPUT);  
pinMode(l2, OUTPUT);  
pinMode(l3, OUTPUT);  
pinMode(l4, OUTPUT);  
pinMode(l5, OUTPUT);  
pinMode(p, OUTPUT);  

pinMode(f1, INPUT);  
pinMode(f2, INPUT);
pinMode(f3, INPUT);
pinMode(f4, INPUT);
pinMode(f5, INPUT);

Serial.begin(9600);

digitalWrite(l1, HIGH);
digitalWrite(l2, HIGH);
digitalWrite(l3, HIGH);
digitalWrite(l4, HIGH);
digitalWrite(l5, HIGH);


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
