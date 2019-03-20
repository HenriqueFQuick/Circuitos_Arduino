int led13 = 13;
int led12 = 12;
int led11 = 11;
int led10 = 10;

int x = 0;
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
    x = Serial.parseInt();
    if(Serial.read() == '\n'){
      if(x == 0){
        digitalWrite(led12, 0);
        digitalWrite(led13, 1);
        digitalWrite(led10, 1);
      }else if(x == 1){
        digitalWrite(led13, 1);
        digitalWrite(led10, 0);
      }else if(x == 2){
        digitalWrite(led13, 1);
        digitalWrite(led10, 1);
      }else if(x == 3){
        digitalWrite(led13, 1);
        digitalWrite(led10, 0);
      }else if(x == 4){
        digitalWrite(led13, 1);
        digitalWrite(led10, 1);
      }else if(x == 5){
        digitalWrite(led13, 1);
        digitalWrite(led10, 0);
      }else if(x == 6){
        digitalWrite(led13, 0);
        digitalWrite(led11, 1);
        digitalWrite(led10, 1);
      }else if(x == 7){
        digitalWrite(led11, 1);
        digitalWrite(led10, 0);
      }else if(x == 8){
        digitalWrite(led11, 1);
        digitalWrite(led10, 1);
      }else if(x == 9){
        digitalWrite(led11, 1);
        digitalWrite(led10, 0);
      }else if(x == 10){
        digitalWrite(led11, 1);
        digitalWrite(led10, 1);
      }else if(x == 11){
        digitalWrite(led11, 1);
        digitalWrite(led10, 0);
      }else if(x == 12){
        digitalWrite(led11, 1);
        digitalWrite(led10, 1);
      }else if(x == 13){
        digitalWrite(led11, 1);
        digitalWrite(led10, 0);
      }else if(x == 14){
        digitalWrite(led11, 0);
        digitalWrite(led12, 1);
        digitalWrite(led10, 1);
      }else if(x == 15){
        digitalWrite(led12, 1);
        digitalWrite(led10, 0);
      }else if(x == 16){
        digitalWrite(led12, 1);
        digitalWrite(led10, 1);
      }else if(x == 17){
        digitalWrite(led12, 1);
        digitalWrite(led10, 0);
      }
    }
  }
}
