/*
 * 
 * 
 * THE DISTANCE SENSOR
 * 
 * 
 * 
 */
const int trigpin = 13;
const int echopin = 12;
void setup()
{
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  double duration,distance;
  digitalWrite(trigpin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  duration = pulseIn(echopin,HIGH);
  distance = (duration/2)/29.1;
  Serial.println(distance);//parameter that we will be having in the calibration
  delay(1000);
}
