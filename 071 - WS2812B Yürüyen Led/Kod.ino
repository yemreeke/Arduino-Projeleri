#include <FastLED.h>
#define NUM_LEDS 10
#define DATA_PIN 7
CRGB leds[NUM_LEDS];
void setup() { 
   FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS); 
   FastLED.setBrightness(255);
}
void loop() { 
  for(int i=0;i<10;i++){
    leds[i].setRGB(0,255,0);  
    FastLED.show();
    delay(300);
    leds[i].setRGB(0,0,0);  
    FastLED.show();
  }
}
