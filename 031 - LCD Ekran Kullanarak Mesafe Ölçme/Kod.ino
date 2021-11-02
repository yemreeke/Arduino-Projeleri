#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int trigPin=7;
int echoPin=6;
int mesafe;
void setup() {
  lcd.begin(16, 2); //LCD'miz 16x2'lik
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}
void loop() {
  mesafe = MesafeOlc(100); //100 cm maksimum
  lcd.clear(); //Ekranı temizliyoruz
  lcd.setCursor(0,0);// 0.satır 0.sütun
  lcd.print("Mesafe:");//Mesafe yazdırdık
  lcd.print(mesafe); 
  lcd.print("cm"); 
  delay(200);  //Görüntünün düzgün olması için
} //Biraz bekledik

int MesafeOlc(int maksimum){
  digitalWrite(trigPin,HIGH); //Enerji Verdik
  delayMicroseconds(10); //10 bekledik
  digitalWrite(trigPin,LOW); //Enerji Kestik
  unsigned long sure = pulseIn(echoPin, HIGH);
  int mesafeOlc = sure*0.034/2;
  if(mesafeOlc>maksimum)
    mesafeOlc= maksimum;
  return mesafeOlc;
}
