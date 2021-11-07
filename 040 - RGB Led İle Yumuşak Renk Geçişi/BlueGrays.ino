int rgb_Kirmizi = 11;
int rgb_Yesil = 10;
int rgb_Mavi = 9;
void setup() {
  pinMode(rgb_Kirmizi, OUTPUT);
  pinMode(rgb_Yesil, OUTPUT);
  pinMode(rgb_Mavi, OUTPUT);
}
void loop() {
  for (int i = 0; i <= 255; i++){
    analogWrite(rgb_Kirmizi, 255 - i);
    analogWrite(rgb_Yesil, i);
    delay(10);
  }
  for (int i = 0; i <= 255; i++){
    analogWrite(rgb_Yesil, 255 - i);
    analogWrite(rgb_Mavi, i);
    delay(10);
  }
  for (int i = 0; i <= 255; i++){
    analogWrite(rgb_Mavi, 255 - i);
    analogWrite(rgb_Kirmizi, i);
    delay(10);
  }
}
