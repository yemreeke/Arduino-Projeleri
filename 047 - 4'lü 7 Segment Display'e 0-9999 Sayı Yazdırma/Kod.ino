#include "SevSeg.h"
SevSeg ekran;
int hizSuresi = 80; // kaç milisaniyede yenileneceğinin süresi
unsigned long sure = millis();
int sayi  = 0;
void setup() {
  byte basamak = 4;
  byte digitPin[] = {2, 3, 4, 5};
  byte segmentPin[] = {6, 7, 8, 9, 10, 11, 12, 13};
  byte tur = COMMON_CATHODE; //COMMON_CATHODE veya COMMON_ANODE
  bool direnc = false;
  bool otosure = false;
  bool sifirlar = true;// gizlemek için false yapınız
  ekran.begin(tur, basamak, digitPin, segmentPin, direnc, otosure, sifirlar);
  ekran.setBrightness(90);
}
void loop() {
  if (millis() - sure >= hizSuresi) {
    sure = millis();
    if (sayi == 10000) //Sayi 10000 olunca 0 yap
      sayi = 0;
    ekran.setNumber(sayi);
    sayi++;
  }
  ekran.refreshDisplay();
}
