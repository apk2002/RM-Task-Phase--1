const int ledPin = 13;	
const int inputPin = 2;	// input pin (for a pushbutton)

void setup()
{
  pinMode(ledPin, OUTPUT);	   
  pinMode(inputPin, INPUT);
}

void loop()
{
  int val = digitalRead(inputPin);	//read input value
 
  if (val == HIGH)	
    digitalWrite(ledPin, HIGH); //turn LED on if switch is pressed
  else
    digitalWrite(ledPin, LOW);	//turn LED off


}