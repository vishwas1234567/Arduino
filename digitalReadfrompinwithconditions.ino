void setup() {
  // put your setup code here, to run once:
  pinMode(A0,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorvalue  = analogRead(A0);
  if(sensorvalue >= 990)
  {
    Serial.println("It has given a Higher value");
  }
  else if(sensorvalue >= 250)
  {
    Serial.println("It has a true Value");
  }
  else
  {
    Serial.println("it has the best");
  }
}
