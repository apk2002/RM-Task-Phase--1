int sensorvalue=0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorvalue = analogRead(A0);
  Serial.println(sensorvalue);
  analogWrite(9,map(sensorvalue,0,1023,255,0));
  delay(100);
}