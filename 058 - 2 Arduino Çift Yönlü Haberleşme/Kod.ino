//2 Arduino için de kod aynıdır.
int led = 8;
int buton = 7;
bool durum = false;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buton, INPUT);
}
void loop() {
  if (Serial.available()) {
    if (Serial.read() == 1) {
      durum = !durum;
      digitalWrite(led, durum);
    }
  }
  if (digitalRead(buton)) {
    Serial.write(1);
    delay(300);
  }
}
