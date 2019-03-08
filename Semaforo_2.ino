int led13 = 13;
int led12 = 12;
int led11 = 11;
int led10 = 10;

void setup() {
	// put your setup code here, to run once:
	pinMode(led10, OUTPUT);
	pinMode(led11, OUTPUT);
	pinMode(led12, OUTPUT);
	pinMode(led13, OUTPUT);
}

void loop() {
	// put your main code here, to run repeatedly:
	ligar(led13, 3);
	ligar(led11, 4);
	ligar(led12, 2);
	
}

void ligar(int led, int loopi){
	digitalWrite(led, HIGH);
	for(int i = 0; i < loopi; i++){
		digitalWrite(led10, HIGH);
		delay(500);
		digitalWrite(led10, LOW);
		delay(500);
	}
	digitalWrite(led, LOW);
}
