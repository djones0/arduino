#include<Servo.h>
Servo servo1;

const int buttonPin = 2;
const int trigPin = 9;
const int echoPin = 10;

long duration;
int distance;

void setup() {
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
  Serial.begin(9600);
  servo1.attach(8);
}

void loop() {
  digitalWrite(trigPin, LOW);
delayMicroseconds(5);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);

distance= (duration/2) / 74;

Serial.print("Distance in inches: ");
Serial.println(distance);
    servo1.write(130);
    if(distance < 2){
    Serial.print("input detected");
    servo1.write(45);

delay(5000);
}}
