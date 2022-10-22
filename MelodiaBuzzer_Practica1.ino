int buzzer = 3;

void setup() 
{ 
  pinMode(buzzer, OUTPUT);
                                                               
}

void loop() 
{
  analogWrite(buzzer, 0);
  delay(100);

  analogWrite(buzzer, 0);
  delay(100);
}
