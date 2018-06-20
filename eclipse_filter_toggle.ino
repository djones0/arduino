//this project was written for use in the 2017 full solar eclipse and is specific to the Greer, SC location.
//PLEASE NOTE: SOME VALUES MUST BE CHANGED IN ORDER TO AVOID CATASTROPHIC FAILURE

#include <Servo.h>    //call up the servo library

Servo servo1;   //set servo to servo1
const int buttonPin= 11;    //set constant input for buttonPin to 11


void setup() {
Serial.begin(9600);   //begin serial read
Serial.println("Switch test");    //begin display output
servo1.attach(9);   //attach servo1 to pin 9
pinMode(buttonPin, INPUT_PULLUP);   //set buttonPin as input pullup
pinMode(10, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);   //get initial state of button upon start up
  Serial.println(buttonState);    //display the buttonstate
  servo1.write(-10);    //move servo1 to home position

if (buttonState ==LOW){
    Serial.print("Button press");
    servo1.write(160);
    delay(67000);  //CHANGE ME  this delay should equal the lentgh of time for totalily.
    servo1.write(0);}

else{
    servo1.write(-10);


  }


}
