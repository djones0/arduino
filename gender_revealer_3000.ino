#include <AFMotor.h>


#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
const int buttonPin= 22;
const int ledPin1= 31;
const int ledPin2=33;
const int ledPin3= 35;
const int ledPin4= 37;
const int ledPin5 = 39;
const int ledPin6 = 41;
AF_Stepper motor(400,1);
int position = 10;
AF_Stepper motor2(64,1);




void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Gender Revealer 3000");

  // turn on servo
  servo1.attach(9); //attach servo1 to pin 9
  servo2.attach(10);
  servo3.attach(28);
  servo4.attach(30);
motor.setSpeed(20);


  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);

  pinMode(26, OUTPUT);




}




void loop() {
   int buttonState = digitalRead(buttonPin);
    Serial.println(buttonState);
  servo2.write(179); //move servo2 to the outward position
  servo1.write(179); //move sevor1 to the outward position
  servo3.write(0);
  servo4.write(179);



if (buttonState ==LOW){
  Serial.print("button press");
  delay(2000);
  servo1.write(91);
  delay(2000);
  servo2.write(83);
  delay(2000);
  servo3.write(89);
  delay(300);
  digitalWrite(ledPin1, HIGH);
  delay(200);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(200);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  delay(200);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  delay(200);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  delay(200);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  delay(200);
 digitalWrite(ledPin6, LOW);

   digitalWrite(ledPin1, HIGH);
  delay(200);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(200);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  delay(200);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  delay(200);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  delay(200);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  delay(200);
 digitalWrite(ledPin6, LOW);

  digitalWrite(ledPin1, HIGH);
  delay(200);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(200);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  delay(200);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  delay(200);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  delay(200);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  delay(200);
 digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin1, HIGH);
  delay(200);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(200);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  delay(200);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  delay(200);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  delay(200);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  delay(200);
 digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin1, HIGH);
  delay(200);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(200);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  delay(200);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  delay(200);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  delay(200);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  delay(200);
 digitalWrite(ledPin6, LOW);
 motor.step(400, FORWARD, DOUBLE);
  delay(10000);//remove when adding servo5
motor.step(400, BACKWARD, DOUBLE);
}


else {
  motor.step(1, FORWARD, MICROSTEP);
delay(1000);
  motor.step(1, BACKWARD, MICROSTEP);
  servo2.write(179); //move servo2 to the outward position
  servo1.write(179); //move sevor1 to the outward position
  servo3.write(0);


  digitalWrite(24,HIGH);
}

}
