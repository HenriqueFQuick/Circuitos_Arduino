int led13 = 13;
int led12 = 12;
int led11 = 11;
int led10 = 10;
int entradaA = 0;
int entradaB = 0;
int entradaR = 0;
int entradaV = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led13, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    entradaA = Serial.parseInt();
    entradaB = Serial.parseInt();
    entradaR = Serial.parseInt();
    entradaV = Serial.parseInt();

    acendeLED(entradaA, led13);
    acendeLED(entradaB, led12);
    acendeLED(entradaR, led11);
    acendeLED(entradaV ,led10);
  }
}

void acendeLED(int n, int led){
  if(n == 1){
     digitalWrite(led, HIGH);
  }else digitalWrite(led, LOW);
}
