void setup() {
  // put your setup code here, to run once:
  pinMode(A0,OUTPUT);
  pinMode(9,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorvalue  = analogRead(A0);
  analogWrite(9,(sensorvalue/4));
  Serial.println("i am in love");
}
