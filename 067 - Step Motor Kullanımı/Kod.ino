int sure = 3; //Her adımda bekleme süresi
#define IN1 11 //Motor
#define IN2 10 //Sürücü
#define IN3 9  //Pin
#define IN4 8  //Bağlantıları
void setup() {
  pinMode(IN1, OUTPUT); //Pinleri
  pinMode(IN2, OUTPUT); //Çıkış
  pinMode(IN3, OUTPUT); //Olarak
  pinMode(IN4, OUTPUT); //Tanımladık
}
void loop() {
  // 512 Adım Tam Tur 360 Derecedir.
  SaatYonu(512); //Saat Yönü 512 Adım
  delay(1000);
  SaatTersYonu(512);//Saat Ters Yönü 512 Adım
  delay(1000);
}
void SaatYonu(int adimSayisi) {
  for (int i = 0; i < adimSayisi; i++) {
    digitalWrite(IN4, HIGH);
    delay(sure);
    digitalWrite(IN4, LOW);
    digitalWrite(IN3, HIGH);
    delay(sure);
    digitalWrite(IN3, LOW);
    digitalWrite(IN2, HIGH);
    delay(sure);
    digitalWrite(IN2, LOW);
    digitalWrite(IN1, HIGH);
    delay(sure);
    digitalWrite(IN1, LOW);
  }
}
void SaatTersYonu(int adimSayisi) {
  for (int i = 0; i < adimSayisi; i++) {
    digitalWrite(IN1, HIGH);
    delay(sure);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    delay(sure);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    delay(sure);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(sure);
    digitalWrite(IN4, LOW);
  }
}
