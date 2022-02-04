#include <virtuabotixRTC.h>
#include <LiquidCrystal_I2C.h>
virtuabotixRTC Saat(6, 7, 8); //CLK -> 6, Data -> 7, RST -> 8
LiquidCrystal_I2C lcd(0x27, 16, 2);
String gunler[] = {"PAZARTESI","SALI","CARSAMBA", "PERSEMBE", "CUMA", "CUMARTESI", "PAZAR"};
void setup() {
  lcd.begin();
}
void loop() {
  Saat.updateTime(); //Bu kod ile RTC deki anlık zamanı alıyoruz.
  lcd.clear(); // Tüm bilgileri tek tek okuyup seri ekrana yazdırıyoruz.
  lcd.setCursor(0, 0);
  lcd.print(Saat.hours);
  lcd.print(":");
  lcd.print(Saat.minutes);
  lcd.print(" ");
  lcd.print(Saat.dayofmonth);
  lcd.print("/");
  lcd.print(Saat.month);
  lcd.print("/");
  lcd.print(Saat.year);
  lcd.setCursor(0, 1);
  lcd.print(gunler[Saat.dayofweek - 1]);
  delay(1000); // 1 saniye bekletiyoruz.
}
