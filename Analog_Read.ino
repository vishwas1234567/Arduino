/*
*
*
*
*
*the Program to read from the Serial Communcation
*
*
*
*
*
*/
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  Serial.println(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0);
  delay(1000);
  Serial.println(a);
  delay(100);
}
