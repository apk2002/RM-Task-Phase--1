
const int num =5;  //num -> number of blinks

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{

  for(int i=0;i<num;i++)
  {
  digitalWrite(13, HIGH);
  delay(500);                  //0.5 sec
  digitalWrite(13, LOW);
  delay(500);                  //0.5 sec
  }
  
  for(int i=0;i<num;i++)
  {
  digitalWrite(13, HIGH);
  delay(2000);                  //2sec
  digitalWrite(13, LOW);
  delay(2000);                 // 2sec
  } 

}
