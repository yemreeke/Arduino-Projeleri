int Frekans = 400; //Frekans belirledik
int BuzzerPin=7; //Buzzer'ın pin nosu
void setup() {

}
void loop() {  
  tone(BuzzerPin,Frekans);//Buzzer Çalışır
  delay(300); // 300 ms Bekler
  noTone(BuzzerPin); // Buzzer Kapanır
  delay(300); // 300 ms Bekler
}
