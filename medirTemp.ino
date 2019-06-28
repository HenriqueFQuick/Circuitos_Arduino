#define pot A0
void setup() {
  Serial.begin(9600);
  pinMode(pot, INPUT);
}

void loop() {
  int val = analogRead(pot);
  float temperatura = (val-512)*2.4;  
  Serial.print("Potenciometro: ");
  Serial.print(val);
  Serial.print("   Temperatura: ");
  Serial.println(temperatura);
  delay(500);
}
