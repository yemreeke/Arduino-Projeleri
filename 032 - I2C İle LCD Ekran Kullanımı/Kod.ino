#include <LiquidCrystal_I2C.h>
#include <Wire.h> 
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup(){
  lcd.begin();
}
void loop(){  
  lcd.setCursor(0,0);//Satır 0
  lcd.print("Hello World!");
  delay(1000);
  lcd.setCursor(0,1); //Satır 1 
  lcd.print("@bluegrays.py");
  delay(3000);
  lcd.clear(); //LCD Temizle
  delay(1000);
}
