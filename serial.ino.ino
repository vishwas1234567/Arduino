#include<SoftwareSerial.h>
//int SoftwareSerial(2,3);
int analogpin = 3;
int data = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  data = analogRead(analogpin);
  Serial.println(data);
  Serial.print("\t");
  Serial.print("i too have a data");
}
