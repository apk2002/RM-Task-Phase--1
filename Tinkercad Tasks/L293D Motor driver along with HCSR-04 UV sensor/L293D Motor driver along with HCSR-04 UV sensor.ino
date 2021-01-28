
int speed1=5;
int wheel1dir1=4;
int wheel1dir2=3;
int speed2=11;
int wheel2dir1=9;
int wheel2dir2=10;
int s1trigpin=12;
int s1echopin=13;
int s2trigpin=6;
int s2echopin=7;
int d1,d2,t1,t2;

void setup()
{
  pinMode(speed1, OUTPUT);
  pinMode(wheel1dir1, OUTPUT);
  pinMode(wheel1dir2, OUTPUT);
 
  pinMode(speed2, OUTPUT);
  pinMode(wheel2dir1, OUTPUT);
  pinMode(wheel2dir2, OUTPUT);
 
  pinMode(s1trigpin, OUTPUT);
  pinMode(s1echopin, INPUT);
  
  pinMode(s2trigpin, OUTPUT);
  pinMode(s2echopin, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
digitalWrite(s1trigpin, LOW);
delay(200);
digitalWrite(s1trigpin, HIGH);
delayMicroseconds(200);

  digitalWrite(s1trigpin, LOW);

t1= pulseIn(s1echopin, HIGH);
d1= (t1*(0.034))/2;
  
digitalWrite(s2trigpin, LOW);
delay(200);
digitalWrite(s2trigpin, HIGH);
delayMicroseconds(200);
  
  digitalWrite(s2trigpin, LOW);

   t2=pulseIn(s2echopin, HIGH);
   d2=t2*0.034/2;

if(d1<=50 || d2<=50)
{
  Serial.println("Wall detected");
  if(d1<d2)
  {
    while(d1!=d2)
    {
      digitalWrite(wheel1dir1, LOW);
      digitalWrite(wheel1dir2, LOW);
      analogWrite(speed1,255);
      
      digitalWrite(wheel2dir1, HIGH);
      digitalWrite(wheel2dir2, LOW);
      analogWrite(speed2,255);
    }
  }
  if(d2<d1)
  {
    while(d2!=d1)
    {
      digitalWrite(wheel1dir1, HIGH);
      digitalWrite(wheel1dir2, LOW);
      analogWrite(speed1,255);
      
      digitalWrite(wheel2dir1, LOW);
      digitalWrite(wheel2dir2, LOW);
      analogWrite(speed2,255);
    }
  }  
 
  while(d1!=20 && d2!=20)
  {
  digitalWrite(wheel1dir1, HIGH);
  digitalWrite(wheel1dir2, LOW);
  analogWrite(speed1,255);
  
  digitalWrite(wheel2dir1, LOW);
  digitalWrite(wheel2dir2, HIGH);
  analogWrite(speed2,255);
  }
  
  if(d1==20 && d2==20)
  {
    digitalWrite(wheel1dir1, LOW);
    digitalWrite(wheel1dir2, LOW);
    analogWrite(speed1,0);
   
    digitalWrite(wheel2dir1, LOW);
    digitalWrite(wheel2dir2, LOW);
    analogWrite(speed2,0);
  }
}
}
