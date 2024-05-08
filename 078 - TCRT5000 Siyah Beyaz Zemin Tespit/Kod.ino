#define YESIL_LED 3
#define KIRMIZI_LED 2
void setup() {
  pinMode(YESIL_LED, OUTPUT);
  pinMode(KIRMIZI_LED, OUTPUT);
}
void loop() {
  int deger = analogRead(A0);
  if (deger < 300) {
    digitalWrite(KIRMIZI_LED, 0);
    digitalWrite(YESIL_LED, 1);
  }
  else {
    digitalWrite(KIRMIZI_LED, 1);
    digitalWrite(YESIL_LED, 0);
  }
}
