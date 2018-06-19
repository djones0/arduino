#include <SevSeg.h>
SevSeg myDisplay;


unsigned long timer;
int deciSecond = 0;
int photocellPin0 = 1;
int photocellReading0;
float Res0=10.0;

#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11 , 12);

void setup(void) {
  int displayType = COMMON_CATHODE;
  int digit1 = 42;
  int digit2 = 41;
  int digit3 = 40;
  int digit4 = 39;


  int segA = 31;
  int segB = 32;
  int segC = 33;
  int segD = 34;
  int segE = 35;
  int segF = 36;
  int segG = 37;
  int segDP= 38;

  int numberOfDigits = 4;

  myDisplay.Begin(displayType, numberOfDigits, digit1, digit2, digit3, digit4, segA, segB, segC, segD, segE, segF, segG, segDP);

  myDisplay.SetBrightness(100);

  timer = millis();

 Serial.begin(9600);

}


void loop(void) {

    currentTime = millis();
  if(currentTime >= (loopTime + 1000)){
     myDisplay.write(lux0, 3);
    loopTime = currentTime;
  }
 photocellReading0 = analogRead(photocellPin0);
 float Vout0=photocellReading0*0.0048828125;      // calculate the voltage
 int lux0=500/(Res0*((5-Vout0)/Vout0));           // calculate the lux
 Serial.print("Luminosity 0: ");
 Serial.print(lux0);
 Serial.print(" Lux\t");
 Serial.print("Voltage: ");
 Serial.print(Vout0);
 Serial.print(" Volts\t");
 Serial.print("Output: ");
 Serial.print(photocellReading0);
 Serial.print("Ligth conditions: ");
 if (photocellReading0 < 10) {
   Serial.println(" - Dark");
 } else if (photocellReading0 < 200) {
   Serial.println(" - Dim");
 } else if (photocellReading0 < 500) {
   Serial.println(" - Light");
 } else if (photocellReading0 < 800) {
   Serial.println(" - Bright");
 } else {
   Serial.println(" - Very bright");
 }
 lcd.clear();
   lcd.begin(16, 2);
  lcd.setCursor(0,1);
  lcd.write("Luminosity: ");
   lcd.setCursor(12,1);
  lcd.print(lux0, 10);



  myDisplay.write(lux0, 3);

  
  if (millis() - timer >= 100)
  {
    timer = millis();
    deciSecond++;}
 delay(3500);
}
