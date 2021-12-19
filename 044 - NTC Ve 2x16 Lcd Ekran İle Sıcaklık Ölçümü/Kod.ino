#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  lcd.begin();
}
void loop() {
  int analogDeger = analogRead(A0);
  double sicaklik = Termistor(analogDeger);
  lcd.setCursor(0,0);
  lcd.print("Sicaklik: ");
  lcd.print(sicaklik);
  lcd.print("C");
  delay(500);
}
double Termistor(int analog){
 double deger;
 deger =log(((10240000 / analog) - 10000));
 deger=1/(0.001129148+(0.000234125+(0.0000000876741*deger*deger))*deger);
 deger -=273.15;
 return deger;
}
