#include <FastLED.h>
#define NUM_LEDS 10
#define DATA_PIN 7
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(255);
}
void loop() {
  leds[0].setRGB(255, 0, 0);
  leds[1].setRGB(255, 0, 0);
  leds[2].setRGB(255, 0, 0);
  leds[3].setRGB(255, 0, 0);
  leds[4].setRGB(255, 0, 0);
  FastLED.show();
  delay(1000);
  leds[5].setRGB(0, 0, 255);
  leds[6].setRGB(0, 0, 255);
  leds[7].setRGB(0, 0, 255);
  leds[8].setRGB(0, 0, 255);
  leds[9].setRGB(0, 0, 255);
  FastLED.show();
  delay(1000);
  leds[0].setRGB(0, 0, 0);
  leds[1].setRGB(0, 0, 0);
  leds[2].setRGB(0, 0, 0);
  leds[3].setRGB(0, 0, 0);
  leds[4].setRGB(0, 0, 0);
  leds[5].setRGB(0, 0, 0);
  leds[6].setRGB(0, 0, 0);
  leds[7].setRGB(0, 0, 0);
  leds[8].setRGB(0, 0, 0);
  leds[9].setRGB(0, 0, 0);
  FastLED.show();
  delay(1000);
}
