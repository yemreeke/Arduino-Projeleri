#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define DiziUzunluk 13
char dizi[DiziUzunluk]={'@','b','l','u','e','g','r','a','y','s','.','p','y'};
void setup() {
  lcd.begin(16, 2); //LCD'miz 16x2'lik
  lcd.setCursor(0,0); //0.satır 0.sütun 
  lcd.print(" Bekleyiniz ");
  delay(3000); //3sn bekledik
  lcd.clear(); //Ekranı Temizledik
}
void loop() {
  //SetCursorun ilk parametresi sütun =>4
  //İkinci Parametre Satır  => 0
  lcd.setCursor(4,0);// Ortalamak için 4 dedik
  //4 Adet Boşluk bıraktık yani
  lcd.print("Merhaba");//Merhaba yazdırdık
  delay(1000);// 1 sn bekledik
  
  lcd.setCursor(0,1); //2. Satıra yazacağız
  for(int i=0;i<DiziUzunluk;i++){
    lcd.write(dizi[i]);//Diziyi teker teker
    delay(300); //Yazdırıp az bekliyoruz.
  }
  delay(2000);// Yazdırma bitince 2 sn bekliyoruz
  lcd.clear(); //Ekranı temizliyoruz
  delay(2000); //2 sn bekliyoruz
}
