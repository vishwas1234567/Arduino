void setup() {
  // put your setup code here, to run once:
  pinMode(9,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(9);
  Serial.println(a);
  }
