#include <LiquidCrystal_I2C.h>
#include <Wire.h> 
#include <DHT.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define DHTPIN 3
DHT dht(DHTPIN, DHT11); 
void setup() {
  dht.begin();
  lcd.begin();
}
 
void loop() {
  int nem = dht.readHumidity();
  float sicaklik = dht.readTemperature();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Sicaklik: ");
  lcd.print(sicaklik);
  lcd.setCursor(0,1);
  lcd.print("Nem Orani: %");      
  lcd.print(nem);
  delay(1000);
}
