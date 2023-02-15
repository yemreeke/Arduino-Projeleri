#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  lcd.begin();
}
void loop() {
  int deger = analogRead(A0);
  lcd.setCursor(0, 0);
  lcd.print("A0 Deger: ");
  lcd.print(deger);
  lcd.print("   ");
  lcd.setCursor(0, 1);
  lcd.print("@bluegrays.ino");
  delay(500);
}
