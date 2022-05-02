#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
float VoltajCikis = 0.0;
float VoltajGiris = 0.0;
float Direnc1 = 100000.0; // 100K ohm direnç
float Direnc2 = 10000.0; // 10K ohm direnç
int Deger = 0;
void setup() {
  lcd.begin();
}
void loop() {
  Deger = analogRead(A0);
  VoltajCikis = (Deger * 5.0) / 1024.0;
  VoltajGiris = VoltajCikis / (Direnc2 / (Direnc1 + Direnc2));
  if (VoltajGiris < 0.09) {
    VoltajGiris = 0.0;
  }
  lcd.setCursor(2, 0);
  lcd.print("Voltaj=");
  lcd.print(VoltajGiris);
  lcd.print("V");
  lcd.setCursor(3, 1);
  lcd.print("BlueGrays");
  delay(300);
}
