//Inicializacao das variaveis com um numero, que sera o numero da porta desejada
int led13 = 13;
int led12 = 12;
int led11 = 11;
int led10 = 10;

//inicializa o setup
void setup() {
	//Inicializa cada porta como saida
	pinMode(led10, OUTPUT);
	pinMode(led11, OUTPUT);
	pinMode(led12, OUTPUT);
	pinMode(led13, OUTPUT);
}//end setup

//repete o loop enquanto o programa estiver ligado
void loop() {
	//chama os metodos para piscar o led 10 uma determinada quantidade de vezes baseada em qual led esta aceso
	ligar(led13, 3);
	ligar(led11, 4);
	ligar(led12, 2);
	
}//end loop

//O metodo pisca o led10(porta 10) uma determinada quantidade de vezes
void ligar(int led, int loopi){
	digitalWrite(led, HIGH);
	for(int i = 0; i < loopi; i++){
		digitalWrite(led10, HIGH);
		delay(500);
		digitalWrite(led10, LOW);
		delay(500);
	}
	digitalWrite(led, LOW);
}//end ligar
