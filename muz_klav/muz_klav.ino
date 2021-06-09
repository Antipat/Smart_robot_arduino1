int b1 = 12;
int b2 = 11;
int b3 = 10;
int b4 = 9;
int b5 = 8;
int b6 = 7;
int b7 = 6;
int b8 = 5;

int p =  13;

void setup() {
pinMode(b1, OUTPUT);  
pinMode(b2, OUTPUT);  
pinMode(b3, OUTPUT);  
pinMode(b4, OUTPUT);  
pinMode(b5, OUTPUT);
pinMode(b6, OUTPUT);
pinMode(b7, OUTPUT);
pinMode(b8, OUTPUT);
  
pinMode(p, OUTPUT);  

Serial.begin(9600);


}

void loop() {
  if (digitalRead(b1)== HIGH)
  {
    tone(p, 261);
    delay(500);
    }
    else if (digitalRead(b2)== HIGH )
    {
      tone(p, 293);
      delay(500);
      }
      else if (digitalRead(b3)== HIGH )
    {
      tone(p, 329);
      delay(500);
      }
      else if (digitalRead(b4)== HIGH )
    {
      tone(p,349 );
      delay(500);
      }
      else if (digitalRead(b5)== HIGH )
    {
      tone(p, 440);
      delay(500);
      }
else if (digitalRead(b6)== HIGH )
    {
      tone(p, 466);
      delay(500);
      }
else if (digitalRead(b7)== HIGH )
    {
      tone(p, 494);
      delay(500);
      }
      else if (digitalRead(b8)== HIGH )
    {
      tone(p, 554);
      delay(500);
      }
      tone(p, -1);
  }
