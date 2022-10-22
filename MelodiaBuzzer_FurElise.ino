int buzzer = 3;

int notaDo3 = 130;
int notaRe3 = 146;
int notaMi3 = 164;
int notaFa3 = 174;
int notaSol3 = 196;
int notaLa3 = 233;
int notaSi3 = 246;

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
  delay(600);
  Melodia(notaMi, negra);

  delay(350);
  Melodia(notaRe, negra);

  delay(350);
  Melodia(notaMi, negra);

  delay(350);
  Melodia(notaRe, negra);

  delay(350);
  Melodia(notaMi, negra);

  delay(350);
  Melodia(notaSi3, negra);

  delay(400);
  Melodia(notaRe,negra);

  delay(400);
  Melodia(notaDo,negra);

  delay(400);
  Melodia(220, d);

  delay(1000);
  Melodia(notaRe3, negra);

  delay(350);
  Melodia(notaFa3, negra);

  delay(400);
  Melodia(220, negra);

  delay(400);
  Melodia(notaSi3, d);

  delay(1000);
  Melodia(notaFa3, negra);

  delay(400);
  Melodia(notaLa3, negra);

  delay(400);
  Melodia(notaSi3, negra);

  delay(400);
  Melodia(notaDo, d);

  delay(1000);
  Melodia(notaMi, negra);

  delay(400);
  Melodia(notaRe, negra);

  delay(400);
  Melodia(notaMi, negra);

  delay(400);
  Melodia(notaRe, negra);

  delay(400);
  Melodia(notaMi, negra);

  delay(400);
  Melodia(notaSi3, negra);

  delay(400);
  Melodia(notaRe, negra);

  delay(400);
  Melodia(notaDo, negra);

  delay(400);
  Melodia(220, d);

  delay(1000);
  Melodia(notaRe3, negra);

  delay(400);
  Melodia(notaFa3, negra);

  delay(400);
  Melodia(220, negra);

  delay(400);
  Melodia(notaSi3, d);

  delay(1000);
  Melodia(notaFa3, negra);

  delay(400);
  Melodia(notaDo, negra);

  delay(400);
  Melodia(notaSi3, negra);

  delay(400);
  Melodia(220, d);

  delay(1000);
  Melodia(notaSi3, negra);

  delay(400);
  Melodia(notaDo, negra);

  delay(400);
  Melodia(notaRe, negra);

  delay(400);
  Melodia(notaMi, d);

  delay(1000);
  Melodia(196, negra);

  delay(400);
  Melodia(notaFa, negra);

  delay(400);
  Melodia(notaMi, negra);

  delay(400);
  Melodia(notaRe, d);

  delay(1000);
  Melodia(notaMi3, negra);

  delay(400);
  Melodia(notaMi, negra);

  delay(400);
  Melodia(notaRe, negra);

  delay(400);
  Melodia(notaDo, d);

  delay(1000);
  Melodia(notaRe3, negra);

  delay(400);
  Melodia(notaRe, negra);

  delay(400);
  Melodia(notaDo, negra);

  delay(400);
  Melodia(notaSi3, d);

  delay(1400);
  Melodia(notaMi, negra);

  delay(400);
  Melodia(notaRe, negra);

  delay(350);
  Melodia(notaMi, negra);

  delay(350);
  Melodia(notaRe, negra);

  delay(350);
  Melodia(notaMi, negra);

  delay(350);
  Melodia(notaSi3, negra);

  delay(400);
  Melodia(notaRe,negra);

  delay(400);
  Melodia(notaDo,negra);

  delay(400);
  Melodia(220, d);

  delay(1000);
  Melodia(notaRe3, negra);

  delay(350);
  Melodia(notaFa3, negra);

  delay(400);
  Melodia(220, negra);

  delay(400);
  Melodia(notaSi3, d);

  delay(1000);
  Melodia(notaFa3, negra);

  delay(400);
  Melodia(notaLa3, negra);

  delay(400);
  Melodia(notaSi3, negra);

  delay(400);
  Melodia(notaDo, d);

  delay(1200);
  Melodia(notaMi, negra);

  delay(400);
  Melodia(notaRe, negra);

  delay(400);
  Melodia(notaMi, negra);

  delay(400);
  Melodia(notaRe, negra);

  delay(400);
  Melodia(notaMi, negra);

  delay(400);
  Melodia(notaSi3, negra);

  delay(400);
  Melodia(notaRe, negra);

  delay(400);
  Melodia(notaDo, negra);

  delay(400);
  Melodia(220, d);

  delay(1000);
  Melodia(notaRe3, negra);

  delay(400);
  Melodia(notaFa3, negra);

  delay(400);
  Melodia(220, negra);

  delay(400);
  Melodia(notaSi3, d);

  delay(1000);
  Melodia(notaFa3, negra);

  delay(400);
  Melodia(notaDo, negra);

  delay(400);
  Melodia(notaSi3, negra);

  delay(400);
  Melodia(notaLa3, d);

  delay(5000);
  
}