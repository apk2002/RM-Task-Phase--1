int ir_val=0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2,INPUT);
  Serial.begin(9600);
}

void loop()
{
  ir_val=digitalRead(2);
  
  if(ir_val == HIGH)
  {
  digitalWrite(13,HIGH);
       Serial.println("Object is Dectected");
  }
  else
  {
  digitalWrite(13,LOW);
       Serial.println("Object is not Dectected");
  }
}