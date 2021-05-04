void setup() {
  pinMode(13,INPUT); //13.Pini Giriş Tanımladık
  pinMode(7,OUTPUT); //7.Pini Çıkış Tanımladık
}
void loop() {
  if(digitalRead(13)==HIGH){ //Butona basınca
    digitalWrite(7,HIGH);//Ledi Aç
  }
  else{ //Butona basmayı bırakınca
    digitalWrite(7,LOW); //Ledi Kapat
  }
}
