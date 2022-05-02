#include <RFID.h>
#include <SPI.h>
#define RESET_PIN 8
#define SDA 9
RFID KART(SDA, RESET_PIN); 
void setup() {
  Serial.begin(9600);
  SPI.begin();
  KART.init();
  Serial.println("Başlatıldı");
}
void loop() {
    if (KART.isCard()) {
      KART.readCardSerial();
      Serial.println("Kart Okutuldu");
      Serial.print(KART.serNum[0]);
      Serial.print("-");
      Serial.print(KART.serNum[1]);
      Serial.print("-");
      Serial.print(KART.serNum[2]);
      Serial.print("-");
      Serial.println(KART.serNum[3]);
      delay(1000);
    }
}
