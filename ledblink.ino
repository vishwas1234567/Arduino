void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(7,1);
delay(1000);
digitalWrite(7,0);
delay(1000);
}
