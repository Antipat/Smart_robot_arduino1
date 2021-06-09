
int trig = 12;    
int echo = 11;
 
long dur, cm;

void setup() {

Serial.begin (9600);

pinMode(trig, OUTPUT);

pinMode(echo, INPUT);

}
void loop(){

// Датчик генерирует импульсы шириной 10 мкс
// Генерируем короткий LOW импульс, чтобы обеспечить хороший импульс HIGH:

digitalWrite(trig, LOW);

delayMicroseconds(5);

digitalWrite(trig, HIGH);

delayMicroseconds(10);

digitalWrite(trig, LOW);

// Считываем данные с ультразвукового датчика: значение HIGH, которое

// зависит от длительности (в микросекундах) между отправкой

// акустической волны и ее обратном приеме на эхолокаторе.

pinMode(echo, INPUT);

dur = pulseIn(echo, HIGH);

cm = (dur/2) / 29.1;

Serial.print(cm);
Serial.print("cm");
Serial.println();
delay(300);
}
