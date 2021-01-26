int speed1=5;
int wheel1dir1=4;
int wheel1dir2=3;

int speed2=11;
int wheel2dir1=9;
int wheel2dir2=10;


String movement;

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
    
}

void loop()
{
  Serial.println("Enter the movement of the bot");
  while(Serial.available()==0)
  {
  }
 
  movement=Serial.readString();
  
  if(movement=="F")
  {
    digitalWrite(wheel1dir1, HIGH);
    digitalWrite(wheel1dir2, LOW);
    analogWrite(speed1,255);
  
    digitalWrite(wheel2dir1, LOW);
    digitalWrite(wheel2dir2, HIGH);
    analogWrite(speed2,255);
  }
  
  
  if(movement=="B")
   { 
     digitalWrite(wheel1dir1, LOW);
     digitalWrite(wheel1dir2, HIGH);
     analogWrite(speed1,255);
    
     digitalWrite(wheel2dir1, HIGH);
     digitalWrite(wheel2dir2, LOW);
     analogWrite(speed2,255);
   }
  
  if(movement=="R")
  {
      digitalWrite(wheel1dir1, HIGH);
      digitalWrite(wheel1dir2, LOW);
      analogWrite(speed1,255);
      
      digitalWrite(wheel2dir1, HIGH);
      digitalWrite(wheel2dir2, LOW);
      analogWrite(speed2,255);
      delay(1.6);
      
      digitalWrite(wheel1dir1, LOW);
      digitalWrite(wheel1dir2, LOW);
      analogWrite(speed1,0);
      
      digitalWrite(wheel2dir1, LOW);
      digitalWrite(wheel2dir2, LOW);
      analogWrite(speed2,0);
  }
  
  if(movement=="L")
  {
      digitalWrite(wheel1dir1, LOW);
      digitalWrite(wheel1dir2, HIGH);
      analogWrite(speed1,255);
    
      digitalWrite(wheel2dir1, LOW);
      digitalWrite(wheel2dir2, HIGH);
      analogWrite(speed2,255);
      delay(1.6);
      
      digitalWrite(wheel1dir1, LOW);
      digitalWrite(wheel1dir2, LOW);
      analogWrite(speed1,0);
    
      digitalWrite(wheel2dir1, LOW);
      digitalWrite(wheel2dir2, LOW);
      analogWrite(speed2,0);                 
  }
  
   if(movement=="r")
  {
      digitalWrite(wheel1dir1, HIGH);
      digitalWrite(wheel1dir2, LOW);
      analogWrite(speed1,255);
     
      digitalWrite(wheel2dir1, LOW);
      digitalWrite(wheel2dir2, LOW);
      analogWrite(speed2,255);
      delay(1.6);
      
      digitalWrite(wheel1dir1, LOW);
      digitalWrite(wheel1dir2, LOW);
      analogWrite(speed1,0);
     
      digitalWrite(wheel2dir1, LOW);
      digitalWrite(wheel2dir2, LOW);
      analogWrite(speed2,0);                 
  }
  
  if(movement=="l")
  {
      digitalWrite(wheel1dir1, LOW);
      digitalWrite(wheel1dir2, LOW);
      analogWrite(speed1,255);
    
      digitalWrite(wheel2dir1, HIGH);
      digitalWrite(wheel2dir2, LOW);
      analogWrite(speed2,255);
      delay(1.6);
     
      digitalWrite(wheel1dir1, LOW);
      digitalWrite(wheel1dir2, LOW);
      analogWrite(speed1,0);
      
      digitalWrite(wheel2dir1,LOW);
      digitalWrite(wheel2dir2, LOW);
      analogWrite(speed2,0);                 
  }
}