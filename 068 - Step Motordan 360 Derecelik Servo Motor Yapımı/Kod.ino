int Adim = 2048 / 4; // 1 Tam tur için gerekli adım
int guncelDerece = 0; // Başlangıç Derece 0
float birDerecedekiAdim = Adim / 360.0; // 1,4222
int sure = 3; // Her adımda bekleme süresi
#define IN1 11 //Sürücü
#define IN2 10 //Bağlantıları
#define IN3 9
#define IN4 8
void setup() {
  pinMode(IN1, OUTPUT); //Pinleri 
  pinMode(IN2, OUTPUT); //Çıkış 
  pinMode(IN3, OUTPUT); //Olarak 
  pinMode(IN4, OUTPUT); //Tanımladık
}
void loop() {
  DereceAyarla(0);  //0.Dereceye Ayarlıyoruz
  delay(2000);  // 2 sn bekle 
  DereceAyarla(90); //90.Dereceye Ayarlıyoruz
  delay(2000); 
  DereceAyarla(45); //45.Dereceye Ayarlıyoruz
  delay(2000);
  DereceAyarla(180);//180.Dereceye Ayarlıyoruz
  delay(2000);
  DereceAyarla(135);//135.Dereceye Ayarlıyoruz
  delay(2000);
  DereceAyarla(360);//360.Dereceye Ayarlıyoruz
  delay(5000);  //5 sn bekle
}
void DereceAyarla(int derece) {
  if (derece >= 0 && derece <= 360) { // Derece 0 360 Arasında ise
    if (derece > guncelDerece) {  // Girilen derece büyükse Saat Yönü
      float fark = derece - guncelDerece; // derece farkını hesaplıyoruz
      //Bir derecedeki ilerlemesi adım ile farkı yani dereceyi çarpıyoruz
      SaatYonu(int(fark * birDerecedekiAdim)); // o kadar adım ilerliyor.
      guncelDerece = derece; // güncel dereceye dereceyi aktarıyoruz.
    }
    else if (derece < guncelDerece) { //Girilen derece küçükse Saat Ters Yönü
      float fark = guncelDerece - derece; // derece farkını hesaplıyoruz
      //Bir derecedeki ilerlemesi adım ile farkı yani dereceyi çarpıyoruz
      SaatTersYonu(int(fark * birDerecedekiAdim));// o kadar adım ilerliyor.
      guncelDerece = derece;// güncel dereceye dereceyi aktarıyoruz.
    }
  }
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
