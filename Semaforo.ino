int led13 = 13;
int led12 = 12;
int led11 = 11;
int led10 = 10;

void setup() {
	//Inicializado cada porta como saida 
	pinMode(led10, OUTPUT);
	pinMode(led11, OUTPUT);
	pinMode(led12, OUTPUT);
	pinMode(led13, OUTPUT);
}

void loop() {
	
	digitalWrite(led10, 1);
	digitalWrite(led13, 1);
	delay(500);
	digitalWrite(led10, 0);
	delay(500);
	digitalWrite(led10, 1);
	delay(500);
	digitalWrite(led10, 0);
	delay(500);
	digitalWrite(led10, 1);
	delay(500);
	digitalWrite(led10, 0);
	delay(500);
	digitalWrite(led13, 0);
	
	digitalWrite(led10, 1);
	digitalWrite(led11, 1);
	delay(500);
	digitalWrite(led10, 0);
	delay(500);
	digitalWrite(led10, 1);
	delay(500);
	digitalWrite(led10, 0);
	delay(500);
	digitalWrite(led10, 1);
	delay(500);
	digitalWrite(led10, 0);
	delay(500);
	digitalWrite(led10, 1);
	delay(500);
	digitalWrite(led10, 0);
	delay(500);
	digitalWrite(led11, 0);
	
	
	
	digitalWrite(led10, 1);
	digitalWrite(led12, 1);
	delay(500);
	digitalWrite(led10, 0);
	delay(500);
	digitalWrite(led10, 1);
	delay(500);
	digitalWrite(led10, 0);
	delay(500);
	digitalWrite(led12, 0);
	
}
