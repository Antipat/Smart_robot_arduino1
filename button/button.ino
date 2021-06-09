int button = 2;

int led = 10;

void setup() {

pinMode(led, OUTPUT);

pinMode(button, INPUT);
digitalWrite(led, LOW);

}


void loop(){

if (digitalRead(button) == HIGH) {


digitalWrite(led, HIGH);

}

else {

digitalWrite(led, LOW);

}

}
