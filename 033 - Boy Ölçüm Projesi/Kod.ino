#include <LiquidCrystal_I2C.h>
#include <Wire.h> 
LiquidCrystal_I2C lcd(0x27, 16, 2);
int trigPin = 10;
int echoPin = 9;
int butonKalibrasyon=7;
int butonOlcum=6;
int kalibrasyonYapildimi=0;
int olcumYapildimi=0;
int toplamMesafe;
int mesafe;
void setup() {
  lcd.begin();
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(butonKalibrasyon,INPUT);
  pinMode(butonOlcum,INPUT);
}
void loop() { 
  while(kalibrasyonYapildimi==0){ //Kalibrasyon yapılmadıysa
    lcd.setCursor(0,0);             //Gir 
    lcd.print("KALIBRASYON ICIN");
    lcd.setCursor(0,1);
    lcd.print("BUTON-1  BASINIZ");
    if(digitalRead(butonKalibrasyon)==HIGH){
      toplamMesafe=MesafeOlc();    
      kalibrasyonYapildimi=1;  //Kalibrasyon Yapıldı
      lcd.setCursor(0,0);      //Döngüden Çık
      lcd.print("   KALIBRASYON  ");
      lcd.setCursor(0,1);
      lcd.print("     YAPILDI    ");
      delay(3000);
    }
  }
  while(olcumYapildimi==0){ //Ölçüm Yapılmadıysa Gir
    lcd.setCursor(0,0);
    lcd.print("   OLCUM ICIN   ");
    lcd.setCursor(0,1);
    lcd.print("BUTON-2  BASINIZ");
    if(digitalRead(butonOlcum)==HIGH){
      mesafe = MesafeOlc();
      olcumYapildimi=1; //Ölçüm Yapıldı 
      lcd.setCursor(0,0);   //Döngüden çık
      lcd.print("      OLCUM     ");
      lcd.setCursor(0,1);
      lcd.print("     YAPILDI    ");
      delay(3000);
    }
  }
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("BOY OLCUM: ");  //Boy'u ekrana
  lcd.print(toplamMesafe-mesafe); //Yazdir
  lcd.print("cm");
  olcumYapildimi=0; //Tekrar ölçüm yapılması için
  delay(5000);  //5 Sn bekle
}
int MesafeOlc(){
  digitalWrite(trigPin,HIGH); //Enerji Verdik
  delayMicroseconds(10); //10 bekledik
  digitalWrite(trigPin,LOW); //Enerji Kestik
  unsigned long sure = pulseIn(echoPin, HIGH);
  return (int)sure*0.034/2;
}
