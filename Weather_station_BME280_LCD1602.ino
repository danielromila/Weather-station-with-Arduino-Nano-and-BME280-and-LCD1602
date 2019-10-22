#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#include <LiquidCrystal.h>

Adafruit_BME280 bme; 

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

void setup(void) 
{
  lcd.begin(16, 2);
  bme.begin(0x76); 
}

 void loop() 
 {  
 delay(2000);
 
 lcd.clear(); 
 
 lcd.setCursor(0,0); lcd.print(bme.readTemperature()); lcd.print(" C ");
 lcd.setCursor(9,0); lcd.print(bme.readTemperature()* 9 / 5 + 32); lcd.print(" F ");

 lcd.setCursor(0,1); lcd.print(bme.readHumidity()); lcd.print(" % ");
 lcd.setCursor(8,1); lcd.print(bme.readPressure()*  0.00750062); lcd.print("mm");
 }
