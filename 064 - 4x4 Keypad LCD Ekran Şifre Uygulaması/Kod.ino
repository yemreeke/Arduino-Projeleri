#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <Keypad.h>
#include "Servo.h"
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo ServoKapi;
String sifre = "12345";
int sifreUzunluk =  sifre.length();
int ServoPin = 10, ledKirmizi = 11, ledYesil = 12;
char key[4][4] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte Satir[4] = {9, 8, 7, 6};
byte Sutun[4] = {5, 4, 3, 2};
Keypad Tus = Keypad(makeKeymap(key), Satir, Sutun, 4, 4);
void setup() {
  lcd.begin();
  pinMode(ledYesil, OUTPUT);
  pinMode(ledKirmizi, OUTPUT);
  ServoKapi.attach(ServoPin);
  ServoKapi.write(0);
}
void loop() {
  lcd.setCursor(0, 0);
  lcd.print("SIFRE GIRIS ICIN");
  lcd.setCursor(0, 1);
  lcd.print("   # BASINIZ    ");
  if (Tus.getKey() == '#') {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("    Lutfen      ");
    lcd.setCursor(0, 1);
    lcd.print("  Bekleyiniz.   ");
    delay(1000);
    SifreGir();
  }
}
void SifreGir() {
  int uzunluk = 0;
  String pass = "";
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("SIFRE:");
  while (uzunluk != sifreUzunluk) {
    char btus = Tus.getKey();
    if (btus != NO_KEY) {
      lcd.print(btus);
      pass += btus;
      uzunluk++;
    }
  }
  lcd.setCursor(0, 1);
  if (sifre == pass) {
    lcd.print("  SIFRE DOGRU   ");
    ServoKapi.write(90);
    digitalWrite(ledYesil, 1);
    delay(5000);
    digitalWrite(ledYesil, 0);
    ServoKapi.write(0);
  }
  else {
    lcd.print("  SIFRE YANLIS  ");
    digitalWrite(ledKirmizi, 1);
    delay(3000);
    digitalWrite(ledKirmizi, 0);
  }
}
