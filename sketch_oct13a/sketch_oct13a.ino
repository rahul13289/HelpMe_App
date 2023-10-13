void setup()
{
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(8,OUTPUT);
}
void loop()
{
  digitalWrite(4,1);
  digitalWrite(2,1);
  digitalWrite(8,1);
  delay(1000);
  
  digitalWrite(4,0);
  digitalWrite(2,0);
  digitalWrite(8,0);
  delay(1000);
}
    