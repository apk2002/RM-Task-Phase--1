#include <Servo.h> 

  #define servoPin 9 // Arduino pin for the servo
#define potPin A0 // Arduino pin for the potentiometer

  int angle = 0; 
int reading = 0; 

Servo myservo; 


void setup() {
  myservo.attach(servoPin);
}
void loop() {
  reading = analogRead(potPin); 
  for(angle=0;angle<=180;angle++)
 // angle = map(reading, 0, 1023, 0, 180); 
  myservo.write(angle);
  delay(15); 
 
    
}