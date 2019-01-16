#include "dht.h"
#define dht_apin 2 
#include <TimeLib.h>
#include <LiquidCrystal.h>
 
dht DHT;
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);


void setup(){

  lcd.begin(16, 2);
  Serial.begin(9600);
  delay(500);
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  Serial.println("Temp data: \n\n");
  delay(1000);
  lcd.print("humid %,temp C");
 
}//end "setup()"
 
void loop(){
  //Start of Program 
 
    DHT.read11(dht_apin);
    Serial.print(DHT.temperature);
    lcd.setCursor(0, 1);
    lcd.print(DHT.humidity);
    lcd.print( "% ");
    lcd.print(DHT.temperature);
    lcd.print(" C"); 
    Serial.print(", ");
    
    delay(5000);

    
 
}// end loop() 
