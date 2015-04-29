// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
 
//int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin 
//char ty 
void setup() 
{ Serial.begin(9600);  
  Serial.println("--- Start Serial Monitor SEND_RCVE ---");
  Serial.println(" Type in Box above, . ");
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
void loop() 
{ if (Serial.available() > 0)
  {
  val=Serial.parseInt();
  Serial.println(val);
  myservo.write(val);                  // sets the servo position according to the scaled value 
  }
}

