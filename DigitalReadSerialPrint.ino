int sensor = 7;
int a;
//we can define it as Boolean Data
void setup() {
  // put your setup code here, to run once:
  pinMode(sensor,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(sensor);
  if(a=="HIGH")
  {
    Serial.println("yes False");
  }

  else
  {
    Serial.println("True");
  }
}
