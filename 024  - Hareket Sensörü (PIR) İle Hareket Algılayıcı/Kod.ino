int LedPin=7;
int PirPin=8;
int Hareket;
void setup() {
  pinMode(LedPin,OUTPUT); //Led  Çıkış
  pinMode(PirPin,INPUT);//Sensör Giriş
}
void loop() { 
  Hareket = digitalRead(PirPin); //Oku
  if(Hareket==HIGH){
    digitalWrite(LedPin,HIGH); //Led Yak
    delay(1000); //1 sn Bekle
  }
  else{
    digitalWrite(LedPin,LOW); //Led Kapat
  }
}
