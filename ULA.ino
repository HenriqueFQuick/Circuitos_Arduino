int entrada1 = 0;   
int entrada2 = 0;  
int entrada3 = 0; 
int led13 = 11;
int led12 = 12;
int saida;
int saida2;

void setup() {
	Serial.begin(9600);     
	pinMode(led13, OUTPUT);
	pinMode(led12, OUTPUT);
}
void loop() {
	
	if (Serial.available() > 0) {
		entrada1 = Serial.parseInt();
		entrada2 = Serial.parseInt();
		entrada3 = Serial.parseInt();
		Serial.print("entrada1= ");
		Serial.print(entrada1);
		Serial.println();
		Serial.print("entrada2= ");
		Serial.print(entrada2);
		Serial.println();
		Serial.print("entrada3= ");
		Serial.print(entrada3);
		Serial.println();
			if(entrada3 == 3){
				portaxor(entrada1,entrada2);
				
			}else if(entrada3 == 1){
				portaor(entrada1,entrada2);
				
			}else if(entrada3 == 0){
				portaand(entrada1,entrada2);
				
			}else if(entrada3 == 2){
				portanot(entrada1);
				
			}
		  
	}
}

void portaxor(int a, int b)
{
	saida = (a^b);
	saida2 = (a&b);
	Serial.print("xor= ");
	Serial.println(saida);	
	Serial.print("and= ");
	Serial.print(saida2);
	Serial.println();
	mostra(saida, saida2);
	
}

void portaor(int a, int b)
{
	saida = a|b;
	Serial.print("or= ");
	Serial.print(saida);
	Serial.println();
	mostra(saida, 0);
	
}

void portaand(int a, int b)
{
	saida = (a&b);
	Serial.print("and= ");
	Serial.print(saida);
	Serial.println();
	mostra(saida, 0);	
}

void portanot(int a)
{
	saida = (~a);
	Serial.print("not entrada1= ");
	Serial.print(saida);
	Serial.println();
	mostra(saida, 0);
}

void mostra (int a, int c)
{
	if (a == 1)
		digitalWrite(led13,1);
	else digitalWrite(led13,0);
		
	
	if (c == 1)
		digitalWrite(led12,1);
	else digitalWrite(led12,0);
	}
	
