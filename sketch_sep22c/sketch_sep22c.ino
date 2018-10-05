#include<Encoder.h>
void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(7,200);
analogWrite(8,0);
delay(1000);
analogWrite(8,200);
analogWrite(7,0);
delay(1000);
}
