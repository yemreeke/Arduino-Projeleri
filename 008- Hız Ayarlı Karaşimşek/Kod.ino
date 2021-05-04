int Ledler[] = {2,3,4,5,6,7};
int potDeger;
void setup() {
  for(int i=0;i<6;i++){
    pinMode(Ledler[i],OUTPUT);
  }//Led Pinlerini Çıkış Olarak Tanımladık
}
void loop() {
  for(int i=0;i<6;i++){
    potDeger = analogRead(A0);//Değer Okuduk
    digitalWrite(Ledler[i],HIGH);
    delay(potDeger); //0-1023 ms Süre Ayarladık
    digitalWrite(Ledler[i],LOW);
  }
  //Sırasıyla 1 2 3 4 5 6. Ledleri Yaktık
  for(int i=4;i>0;i--){
    potDeger = analogRead(A0);//Değer Okuduk
    digitalWrite(Ledler[i],HIGH);
    delay(potDeger); //0-1023 ms Süre Ayarladık
    digitalWrite(Ledler[i],LOW);
  }
  //Sırasıyla 5 4 3 2 Ledleri Yaktık
}
