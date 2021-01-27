void setup()
{
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  
}

void loop()
{
  digitalWrite(6, HIGH);
  digitalWrite(9, LOW);
  delay(2000);
  
  digitalWrite(6, LOW);
  digitalWrite(9, HIGH);
  delay(2000);
}