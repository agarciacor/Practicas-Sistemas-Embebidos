/*
ELABORADO POR:	Garcia Corte Alejandro	
MATERIA:		    Sistemas Embebidos	
PROFESOR:		    Rafael Nuñez Bernal
FECHA:			    Viernes 30 de septiembre de 2022					
PRACTICA:		    Practica 01
*/


int secuencias[4][10] = {
  {8, 9, 10, 11, 12, 11, 10, 9, 8},
  {12, 11, 10, 9, 8},
  {8, 9, 8, 10, 9, 11, 10, 12},
  {8, 12, 8, 12, 9, 11, 9, 11, 10}
};
int tiempo = 200;
int secuenciaElegida, i, j;

void setup() {
  for(i = 4; i <= 7; i++){
    pinMode(i, INPUT);
  }
  for(i = 8; i <= 13; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(i = 4; i <= 7; i++){
    if(digitalRead(i) == HIGH && secuenciaElegida == NULL){
      secuenciaElegida = i - 3;
    }
  }

  if(secuenciaElegida != NULL) {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);

    for(i = 0; i < sizeof(secuencias[secuenciaElegida-1])/sizeof(secuencias[secuenciaElegida-1][0]); i++){
      for(j = 0; j < sizeof(secuencias[secuenciaElegida-1])/sizeof(secuencias[secuenciaElegida-1][0]); j++){
        if(digitalRead(3) == LOW){
          digitalWrite(secuencias[secuenciaElegida-1][j], LOW);
        }
      }
      digitalWrite(secuencias[secuenciaElegida-1][i], HIGH);
      delay(tiempo);
    }
    secuenciaElegida = NULL;
    for(i = 8; i <= 13; i++){
      digitalWrite(i, LOW);
    }
  }
}