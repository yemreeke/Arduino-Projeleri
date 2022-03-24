#include "SevSeg.h"
SevSeg ekran;
int hizSuresi = 1000; // kaç milisaniyede yenileneceğinin süresi
unsigned long sure = millis();
unsigned long sure1 = millis();
int sayi  = 65;
int bomba = 1;
int patladimi = 0;
int ledYesil = 0;
int ledKirmizi = 1;
int Buzzer = 13;
void setup() {
  delay(3000);
  byte basamak = 4;
  byte digitPin[] = {2, 3, 4, 5};
  byte segmentPin[] = {6, 7, 8, 9, 10, 11, 12};
  byte tur = COMMON_CATHODE; //COMMON_CATHODE veya COMMON_ANODE
  bool direnc = false;
  bool otosure = false;
  bool sifirlar = true;// gizlemek için false yapınız
  ekran.begin(tur, basamak, digitPin, segmentPin, direnc, otosure, sifirlar);
  ekran.setBrightness(90);
  pinMode(ledYesil, OUTPUT);
  pinMode(ledKirmizi, OUTPUT);           //KODLARIN DEVAMI VARDIR.
  pinMode(Buzzer, OUTPUT);              //LİNKTEN ULAŞABİLİRSİNİZ.
}
int ysayi;
void loop() {
  while (bomba == 1) {
    if (analogRead(A0) > 10) { //Hızlandırma
      hizSuresi = 200;
    }
    if (analogRead(A1) > 10) { //Durdur
      bomba = 0;
      digitalWrite(Buzzer, 0);
      digitalWrite(ledKirmizi, 0);
      digitalWrite(ledYesil, 1);
      break;
    }
    if (analogRead(A2) > 10) { //Patlat
      patladimi = 1;
      ysayi = 0;
    }

    if (millis() - sure1 >= hizSuresi / 2 ) {
      sure1 = millis();
      digitalWrite(Buzzer, 0);
      digitalWrite(ledKirmizi, 0);
    }
    if (millis() - sure >= hizSuresi ) {
      sure = millis();
      if (sayi > 59) {
        int a = sayi % 60;
        int b = int(sayi / 60);
        ysayi = (b * 100) + a;

      }
      else {
        ysayi = sayi;
      }
      if (sayi == 0) //Sayi 0 olunca patlat
        patladimi = 1;
      else
        sayi--;
      ekran.setNumber(ysayi);

      digitalWrite(Buzzer, 1);
      digitalWrite(ledKirmizi, 1);
    }
    ekran.refreshDisplay();
    if (patladimi == 1) {
      digitalWrite(Buzzer, 1);
      digitalWrite(ledKirmizi, 1);
      bomba = 0;
      ysayi = 0;
      break;
    }
  }
  ekran.setNumber(ysayi);
  ekran.refreshDisplay();
}
