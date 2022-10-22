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
  Melodia(notaDo, negra);
  Melodia(notaDo, negra);
  Melodia(notaSol, negra);
  Melodia(notaSol, negra);
  Melodia(notaLa, negra);
  Melodia(notaLa, negra);
  Melodia(notaSol, blanca);
  Melodia(notaFa, negra);
  Melodia(notaFa, negra);
  Melodia(notaMi, negra);
  Melodia(notaMi, negra);
  Melodia(notaRe, negra);
  Melodia(notaRe, negra);
  Melodia(notaDo, negra);

  delay(500);
  
}
