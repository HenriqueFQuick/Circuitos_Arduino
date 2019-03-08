int led13 = 7;
int led12 = 6;
int led11 = 5;
int led10 = 4;

void setup() {
	// put your setup code here, to run once:
	pinMode(led10, OUTPUT);
	pinMode(led11, OUTPUT);
	pinMode(led12, OUTPUT);
	pinMode(led13, OUTPUT);
}

void loop() {
	// put your main code here, to run repeatedly:
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
