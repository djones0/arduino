#include<Servo.h>
Servo servo1;

const int trigPin = 9;
const int echoPin = 10;

void setup() {
  servo1.attach(8);


  Serial.begin(9600);
}

void loop()
{
  servo1.write(130);

  long duration, inches, cm;


  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
     if(microsecondsToInches(duration) < 60){
    Serial.print("input detected");
    servo1.write(45);
    delay(5000);
}

  delay(100);
}

long microsecondsToInches(long microseconds)
{

  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{

  return microseconds / 29 / 2;


}
