#include <virtuabotixRTC.h>
//CLK -> 6, Data -> 7, RST -> 8
virtuabotixRTC Saat(6, 7, 8);
void setup() {
  // RTC üzerindeki tarih ve saati aşağıdaki kod ile ayarlayabilirsiniz.
  // saniye, dakika, saat, haftanın günü, ayın günü, ay, yıl 
  
  Saat.setDS1302Time(15, 42, 13,7, 31, 01, 2021);
  
  //  19.01.2021 11:40:50 2(Salı günü anlamına geliyor).
  // Haftanın günü Pazartesi=>1 .... Pazar=>7 yazıyoruz)
}
// Yukarıdaki yükleme işlemini 1 kere yaptıkdan sonra 
// Modülün pilini çıkarmadığınız sürece saat bilgisi 
// Sürekli olarak saklanacaktır.
void loop() {
 
}
