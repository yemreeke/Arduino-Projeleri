#include "SevSeg.h"
#include <virtuabotixRTC.h>
virtuabotixRTC Saat(A0, A1, A2);
SevSeg ekran;
unsigned long sure = millis();
void setup() {
  byte basamak = 4;
  byte digitPin[] = {2, 3, 4, 5};
  byte segmentPin[] = {6, 7, 8, 9, 10, 11, 12, 13};
  byte tur = COMMON_CATHODE; //COMMON_CATHODE veya COMMON_ANODE
  bool direnc = false;
  bool otosure = false;
  bool sifirlar = true;// Gizlemek için false yapınız.
  ekran.begin(tur, basamak, digitPin, segmentPin, direnc, otosure, sifirlar);
  ekran.setBrightness(90); //Ekran Parlaklığı
  // saniye, dakika, saat, haftanın günü, ayın günü, ay, yıl
  //Saat.setDS1302Time(50, 02, 21, 7, 7, 2, 2021);
}
void loop() {
  if (millis() - sure >= 1000) {
    sure = millis();
    Saat.updateTime(); // Saati Güncelle
    int saat = Saat.hours * 100 + Saat.minutes; //Saati Oku ve hesapla
    ekran.setNumber(saat, 2); //2.kısma nokta koyar
  }
  ekran.refreshDisplay();
}
