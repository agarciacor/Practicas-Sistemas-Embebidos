int buzzer = 3;
int frecuencia = 1000;
int duracion = 300;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  tone(buzzer, frecuencia, duracion);
  delay(500);
}
