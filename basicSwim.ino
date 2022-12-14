// basic swimming function, wide arc tail movement
#include <Servo.h>

Servo serv1, serv2, serv3;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  serv1.attach(2);
  serv2.attach(3);  
  serv3.attach(4); // attaches the servo on pin 9 to the servo object
}

void loop() {
  //val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
 // val = map(val, 0, 1023, 0, 180);  
 for (val = 45; val < 135; val++){   // scale it to use it with the servo (value between 0 and 180)
  serv1.write(val);  
  serv2.write(val); 
  serv3.write(val);               // sets the servo position according to the scaled value
  delay(8);        
  } 
  for (val = 135; val > 45; val--){   // scale it to use it with the servo (value between 0 and 180)
  serv1.write(val);  
  serv2.write(val);  
  serv3.write(val);              // sets the servo position according to the scaled value
  delay(8);        
  }
  
 /* val = 180;
  serv1.write(val);   
  serv2.write(val);  
  serv3.write(val);   */       // waits for the servo to get there
}