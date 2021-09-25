#include <FastLED.h>
#define NUM_LEDS 10
#define DATA_PIN 7
CRGB leds[NUM_LEDS];
byte Color_R = 255; //turuncu
byte Color_G = 85;
byte Color_B = 0;
void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(255);
}

void loop() {
  for (int i = 0; i < 10; i++) {
    leds[i].setRGB(Color_R, Color_G, Color_B);
    FastLED.show();
    delay(300);
  }
  for (int i = 0; i < 10; i++) {
    leds[i].setRGB(0, 0, 0);
    FastLED.show();
    delay(300);
  }
}
