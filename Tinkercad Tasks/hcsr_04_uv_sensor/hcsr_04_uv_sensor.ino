float time,distance;

void setup()
{
  pinMode(3,INPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 digitalWrite(6,LOW);
 delayMicroseconds(10);
  
  digitalWrite(6,HIGH);
  delayMicroseconds(10);
    
  digitalWrite(6,LOW);
   
   time=pulseIn(3,HIGH);
  
  Serial.println("The distance is");
 
  distance=(time*0.034)/2;
  Serial.println(distance);
  
}