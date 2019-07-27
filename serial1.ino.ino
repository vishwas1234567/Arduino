int anapin = 3;
int data = 0;
char userinput;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}//void setup function
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0){
    userinput  = Serial.read();
    if(userinput >500)
    {
      data = analogRead(anapin);
      Serial.println(data);
    }//the serial input comparision
  }//serial input read
}//void loop function
