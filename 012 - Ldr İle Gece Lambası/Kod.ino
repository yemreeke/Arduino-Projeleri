int deger;//deger Değişkenini Tanımladık
void setup() {
  pinMode(13,OUTPUT); 
  //13 Numaralı Pini
  //Çıkış Olarak Tanımladık
}
void loop() {  
  deger = analogRead(A0); //Değer Okuduk
  if(deger<50) //Değer 50'den Küçükse
    digitalWrite(13,HIGH); //Ledi Aç
  else  //Değilse(50'den Büyükse)
    digitalWrite(13,LOW);  //Ledi Kapat
}
