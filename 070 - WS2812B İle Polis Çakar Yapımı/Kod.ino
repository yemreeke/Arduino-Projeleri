#include <FastLED.h>
#define NUM_LEDS 10
#define DATA_PIN 7
CRGB leds[NUM_LEDS];
int Fast_Delay = 125;
void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(255);
}

void loop() {
  for (int i = 0; i < 3; i++) {
    LedOn(0,5,255,0,0);//Kırmızı RGB 
    delay(Fast_Delay);
    LedOn(0,5,0,0,0);
    delay(Fast_Delay);
  }
  for (int i = 0; i < 3; i++) {
    LedOn(5,10,0,0,255);//Mavi RGB
    delay(Fast_Delay);
    LedOn(5,10,0,0,0);
    delay(Fast_Delay);
  }
}
void LedOn(int first,int last, int R, int G, int B){
  for(int i=first;i<last;i++){
     leds[i].setRGB(R,G,B);
  }
  FastLED.show();
}
