int BuzzerPin=8;
int b_ac =7;//Buton Aç 
int b_kapat=6;//Buton Kapat
int b_ekle =5;//Buton Frekans Ekle
int b_azalt=4;//Buton Frekans Azalt
int Frekans= 300; // 300 olarak belirledik
int durum=0; // Buzzer Durumu => Kapalı(0)
void setup() {
    pinMode(b_ac,INPUT);
    pinMode(b_kapat,INPUT);
    pinMode(b_ekle,INPUT);
    pinMode(b_azalt,INPUT);
}
void loop() {  
  if(digitalRead(b_ac))
    durum=1; //Açık
  if(digitalRead(b_kapat))
    durum=0; //Kapalı
  if(digitalRead(b_ekle)){
    Frekans = Frekans+50;
    delay(100);
  }
  if(digitalRead(b_azalt)){
    Frekans = Frekans-50;
    delay(100);
  }
  if(durum==1) //Açıksa çal     //Zaten Çalıyorsa ve
    tone(BuzzerPin,Frekans); //Frekans değiştiyse 
    //Yeni Frekans Değeri İle Çalmaya Devam Eder
  else // Kapalıysa Durdur
    noTone(BuzzerPin);
}
