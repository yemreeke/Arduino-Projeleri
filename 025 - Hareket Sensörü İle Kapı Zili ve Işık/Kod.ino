int LedPin=7,PirPin=8;
int BuzzerPin=9,Hareket;
void setup() {
  pinMode(BuzzerPin,OUTPUT);
  pinMode(LedPin,OUTPUT);
  pinMode(PirPin,INPUT);
}
void loop() { 
  Hareket = digitalRead(PirPin); //Değer Okuduk
  if(Hareket==HIGH){ //Hareket Var ise 
    digitalWrite(LedPin,HIGH);//Led Açıldı
    tone(BuzzerPin, 660); //Kapı Zili
    delay(700);           //Açıldı
    tone(BuzzerPin, 550);
    delay(700);
    tone(BuzzerPin, 440); //Kapı Zili
    delay(700);           //Kapandı
    noTone(BuzzerPin);
    digitalWrite(LedPin,LOW);//Led Kapandı
  }
  delay(500); // 0.5 sn bekle
}
