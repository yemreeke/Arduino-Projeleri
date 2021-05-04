int Ledler[] = {2,3,4,5,6,7};
int potDeger;
void setup() {
  for(int i=0;i<6;i++){
    pinMode(Ledler[i],OUTPUT);
  }//Led Pinlerini Çıkış Olarak Tanımladık
}
void loop() {
  for(int i=0;i<6;i++){
    potDeger = analogRead(A0); //Değeri okuduk
    digitalWrite(Ledler[i],HIGH);
    delay(potDeger); //0-1023 Arası Değer
    digitalWrite(Ledler[i],LOW);  
  }//Sırayla Ledleri Yaktık ve Kapattık
}
