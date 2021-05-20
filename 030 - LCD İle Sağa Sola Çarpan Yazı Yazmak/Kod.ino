#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2);
}
void loop() {
	Yazdir("BLUEGRAYS",800);//Metin ve süre
}
void Yazdir(String msg,int sure){
  int size = msg.length();
  for(int i=0;i<=16-size;i++){
    lcd.clear();
    lcd.setCursor(i,0);
    lcd.print(msg);
    delay(sure);
  }
  for(int i=16-size;i>0;i--){
    lcd.clear();
    lcd.setCursor(i,0);
    lcd.print(msg);
    delay(sure);
  }
}
