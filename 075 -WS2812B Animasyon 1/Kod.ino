#include <FastLED.h>
#define NUM_LEDS  56
#define LED_PIN   7
int delays = 15;
CRGB leds[NUM_LEDS];
uint8_t num = 255;
void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(255);
}
void loop() {
    for (int i = 0; i < NUM_LEDS; ++i) {
    leds[i] = CHSV(num + (i * 10), 255, 255);
  }
  EVERY_N_MILLISECONDS(delays){
    num--;
  }
  FastLED.show();
}
