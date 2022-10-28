int velocidad;

void setup() {
  pinMode(10, OUTPUT);
  pinMode(A0, INPUT);
}
                                                                                   
void loop() {
  velocidad = (analogRead(A0) / 4);
  analogWrite(10, velocidad);

}
