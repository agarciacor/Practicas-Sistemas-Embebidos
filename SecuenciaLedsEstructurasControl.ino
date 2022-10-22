/*
ELABORADO POR:  Garcia Corte Alejandro  
MATERIA:        Sistemas Embebidos  
PROFESOR:       Rafael Nuñez Bernal
FECHA:          Viernes 23 de septiembre de 2022          
PRACTICA:       Practica 01
*/
int puertos[10] = {9, 10, 11, 12, 13};
int t=200;
int numeroPuertos, j, k, i;

void setup() {
  numeroPuertos = sizeof(puertos)/sizeof(puertos[0]);
  for(j=0; j < numeroPuertos; j++){
    pinMode(puertos[j],OUTPUT);
    }
}

void loop() {
  for(i = 0; i < numeroPuertos; i++){
    for(k=0; k < numeroPuertos; k++){
      digitalWrite(puertos[k],0);
    }
    if(true){
      digitalWrite(puertos[i],1);
      delay(t);
    }
  }
}
