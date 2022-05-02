#include <RFID.h>
#include <SPI.h>
#define RESET_PIN 8
#define SDA 9
RFID KART(SDA, RESET_PIN);
int led1 = 2,led2 = 3;
byte KartID[4] = {89, 142, 59, 154};
bool giris;
void setup() {
  Serial.begin(9600);
  SPI.begin();
  KART.init();
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}
void loop() {
  if (KART.isCard()) {
    giris = true;
    KART.readCardSerial();
    for (int i = 0; i < 4; i++) {
      if (KART.serNum[i] != KartID[i]) {
        giris = false;
      }
    }
    if (giris) {
      Serial.println("Giriş Başarılı");
      digitalWrite(led1, 1);
      digitalWrite(led2, 0);
    }
    else {
      Serial.println("Giriş Başarısız");
      digitalWrite(led1, 0);
      digitalWrite(led2, 1);
    }
    delay(3000);
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
  }
}
