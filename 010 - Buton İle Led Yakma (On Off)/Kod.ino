int ledDurum=0; //Led Kapalı Olarak Tanımladık
void setup() {
  pinMode(13,INPUT); //13.Pini Giriş Tanımladık
  pinMode(7,OUTPUT); //7.Pini Çıkış Tanımladık
}
void loop() {  
  if(digitalRead(13)==1){ //Butona basınca
    ledDurum = !ledDurum; //LedDurum tersi olsun
    digitalWrite(7,ledDurum); //Açıksa Kapansın
    delay(300); //Bekle       //Kapalıysa Açılsın
  }   
}
