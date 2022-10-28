int lectura;
int potenciometro1, potenciometro2;

void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  lectura = analogRead(A0);

  potenciometro1 = map(lectura, 0, 1023, 0, 255);
  potenciometro2 = map(lectura, 0, 1023, 255, 0);

  analogWrite(10, potenciometro1);
  analogWrite(11, potenciometro2);
}
