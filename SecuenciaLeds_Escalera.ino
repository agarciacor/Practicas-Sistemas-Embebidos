int L0=13;
int L1=12;
int L2=11;
int L3=10;
int L4=9;
int t=500;

void setup() {
 pinMode (L0,OUTPUT);
 pinMode (L1,OUTPUT);
 pinMode (L2,OUTPUT);
 pinMode (L3,OUTPUT);
 pinMode (L4,OUTPUT);
}

void loop() {
digitalWrite(L0,1);
digitalWrite(L1,0);
digitalWrite(L2,0);
digitalWrite(L3,0);
digitalWrite(L4,0);
delay(t);
digitalWrite(L0,1);
digitalWrite(L1,1);
digitalWrite(L2,0);
digitalWrite(L3,0);
digitalWrite(L4,0);
delay(t);
digitalWrite(L0,1);
digitalWrite(L1,1);
digitalWrite(L2,1);
digitalWrite(L3,0);
digitalWrite(L4,0);
delay(t);
digitalWrite(L0,1);
digitalWrite(L1,1);
digitalWrite(L2,1);
digitalWrite(L3,1);
digitalWrite(L4,0);
delay(t);
digitalWrite(L0,1);
digitalWrite(L1,1);
digitalWrite(L2,1);
digitalWrite(L3,1);
digitalWrite(L4,1);
delay(t);
digitalWrite(L0,1);
digitalWrite(L1,1);
digitalWrite(L2,1);
digitalWrite(L3,1);
digitalWrite(L4,0);
delay(t);
digitalWrite(L0,1);
digitalWrite(L1,1);
digitalWrite(L2,1);
digitalWrite(L3,0);
digitalWrite(L4,0);
delay(t);
digitalWrite(L0,1);
digitalWrite(L1,1);
digitalWrite(L2,0);
digitalWrite(L3,0);
digitalWrite(L4,0);
delay(t);
digitalWrite(L0,1);
digitalWrite(L1,0);
digitalWrite(L2,0);
digitalWrite(L3,0);
digitalWrite(L4,0);
delay(t);
digitalWrite(L0,0);
digitalWrite(L1,0);
digitalWrite(L2,0);
digitalWrite(L3,0);
digitalWrite(L4,0);
delay(t);
}
