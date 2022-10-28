int buzzer = 3;

int notaDo = 261;
int notaRe = 293;
int notaMi = 329;
int notaFa = 349;
int notaSol = 392;
int notaLa = 440;
int notaSi = 493; 

int negra = 200;
int blanca = 400;
int m = 100;
int d = 800;

void Melodia(int nota, int duracion){
  tone(buzzer, nota, duracion);
  delay(duracion);
  noTone(buzzer);
  delay(duracion);
}

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  Melodia(notaSol, negra);
  Melodia(notaLa, negra);
  Melodia(notaSi, negra);
  Melodia(notaDo, negra);
  Melodia(0, negra);
  Melodia(0, negra);
  Melodia(notaLa, negra);
  Melodia(notaSi, negra);
  Melodia(notaDo, negra);
  Melodia(notaRe, negra);
  Melodia(0, negra);
  Melodia(0, negra);
  Melodia(notaLa, negra);
  Melodia(notaSi, negra);
  Melodia(notaDo, negra);
  Melodia(notaRe, negra);
  Melodia(notaLa, negra);
  Melodia(notaSi, negra);
  Melodia(notaDo, negra);
  Melodia(notaRe, negra);
  Melodia(notaSol, negra);
  Melodia(notaLa, negra);
  Melodia(notaSi, negra);
  Melodia(notaDo, negra);

  delay(500);
  
}
