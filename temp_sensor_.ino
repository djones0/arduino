#include "DHT.h"
#define DHTPIN 3
#define DHTTYPE DHT21
DHT dht(DHTPIN, DHTTYPE);
void setup() {
 Serial.begin(9600);
 Serial.println("Temp test");
 dht.begin();
}
void loop() {
 float h = dht.readHumidity();
 float t = dht.readTemperature()*9/5 + 32;
 if (isnan(t) || isnan(h)) {+
   Serial.println("Failed to read from DHT");
 } else {
   Serial.print("Humidity: ");
   Serial.print(h);
   Serial.print(" %\t");
   Serial.print("Temperature: ");
   Serial.print(t);
   Serial.println(" *F");
   delay(3000);
 }
}
