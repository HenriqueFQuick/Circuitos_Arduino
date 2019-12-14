#include <Ultrasonic.h>     // obvio

//Define os pinos para o trigger e echo
#define pino_trigger 12
#define pino_echo 13

//Inicializa o sensor ultrassom
Ultrasonic ultrassom(pino_trigger, pino_echo);

//Definicoes pinos Arduino ligados a entrada da Ponte H
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
int velocidade1 = 95;
int velocidade2 = 110;
long distancia, distanciaE,distanciaD; 
  
void setup(){
  //Define os pinos como saida
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  analogWrite(9,velocidade1); // pino de velocidade
  analogWrite(10,velocidade2); // pino de velocidadez
  Serial.begin(9600);
 parar();
}

void loop(){
 //Le as informacoes do sensor, em cm 
  distancia = ultra();
  //Exibe informacoes no serial monitor
    if(distancia > 20){
      andar();
    }else{ 
      long distDireita = lerDireita();
      long distEsquerda = lerEsquerda();
      if(distDireita> distEsquerda){
              if(distDireita > 20){
                direita();
                andar();
                Serial.print("direita");
              }else{
                re();
                Serial.print("re");
              }
            }else{ if(distEsquerda > 20){
                      esquerda();
                      andar();
                      Serial.print("esquerda");
                    }else{
                      re();
                      Serial.print("re");
                    }
            }
    }
    andar();
    Serial.println("andar");
  
  parar();
  distancia=0;
  delay(1000);
 }

long ultra(){
  long resp = ultrassom.read(CM); 
  return(resp);
}

void andar(){
    //  Motor esquerdo, sentido horario - frente
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    //  Motor direito, sentido horario - frente
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(300);
    parar(); // redundancia
}

long lerDireita(){
  direita();
  long dist = ultra();
  delay(300);
  esquerda();
  return dist;
}

long lerEsquerda(){
  esquerda();
  long dist = ultra();
  delay(300);
  direita();
  return dist;
}

void re(){
  direita();
  direita();
}

void direita(){
  // Motor direito no sentido horario
  digitalWrite(IN1,LOW);
  digitalWrite(IN2, HIGH);
 // Motor esquerdo no sentido anti horario
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4,LOW);
  delay(200);
  parar();
}

void esquerda(){
  // Motor direito no sentido horario
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2, LOW);
 // Motor esquerdo no sentido anti horario
  digitalWrite(IN3, LOW);
  digitalWrite(IN4,HIGH);
  delay(200);
  parar();
}

void parar(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,HIGH);        
} 
