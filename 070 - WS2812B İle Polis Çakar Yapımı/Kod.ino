#include <FastLED.h> // Kütüphane
#define NUM_LEDS 10 // Led sayısı
#define DATA_PIN 7 // ledin bağlı olduğu pin
CRGB leds[NUM_LEDS]; // led dizemiz (liste de denebilir)
int Fast_Delay = 125; // bekleme süresi 
void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS); //Fastled'e ledleri ekledik
  FastLED.setBrightness(255); // parlaklığı max yaptık 0 - 255
}

void loop() {
  for (int i = 0; i < 3; i++) { // 3 defa
    LedOn(0,5,255,0,0); // 0-5 ledleri kırmızı yakıyoruz
    delay(Fast_Delay); // bekliyoruz 
    LedOn(0,5,0,0,0); // 0-5 ledleri kapatıyoruz
    delay(Fast_Delay); //bekliyoruz 
  }
  for (int i = 0; i < 3; i++) { // 3 def
    LedOn(5,10,0,0,255); // 5-10 ledleri mavi yakıyoruz
    delay(Fast_Delay); // bekliyoruz 
    LedOn(5,10,0,0,0); // 5-10 ledleri kapatıyoruz
    delay(Fast_Delay); // bekliyoruz.
  }
}
// Kodumuz çok uzun olmasın diye bir fonksiyon yazmak istedim.
// bu fonksiyon 5 parametre alıyor.
// ilk 2 si başlangıç ve bitiş led sayıları
// diğer 3 ü ise RGB olarak ledlerin hangi renk olacağını belirleyen sayılardır.
// Fonksiyon kullanarak kodlarınız kısa, düzenli ve anlaşılır şekilde yazabilirsiniz.
void LedOn(int first,int last, int R, int G, int B){
  for(int i=first;i<last;i++){
     leds[i].setRGB(R,G,B);
  }
  FastLED.show();
}
