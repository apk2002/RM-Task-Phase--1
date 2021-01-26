

int sinput=0;

void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter  1 to ON the LED or 0 to OFF the LED");
}

void loop()
{
 
  while(Serial.available()>0)
  {
    
    sinput=Serial.parseInt();
   
    Serial.println(sinput);
   
    if(sinput==1)
        {
         digitalWrite(13, HIGH);
         Serial.println("LED is ON");
        }
    else
        {
        digitalWrite(13, LOW);
        Serial.println("LED is OFF");
        }
   }
    
}