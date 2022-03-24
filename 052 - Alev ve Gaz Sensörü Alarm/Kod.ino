int alev = 8;
int ledYesil = 2;
int ledKirmizi = 3;
int buzzer = 4;
void setup() {
  pinMode(alev, INPUT);
  pinMode(ledYesil, OUTPUT);
  pinMode(ledKirmizi, OUTPUT);
  pinMode(buzzer, OUTPUT);
}
void loop() {
  if (analogRead(A0) > 200 || digitalRead(9)==0)
    AlarmVer(200);  // Gaz Veya Alev Varsa
  else //Yoksa
    AlarmYok();
}
void AlarmVer(int sure) {
  digitalWrite(ledYesil, 0);
  for (int i = 0; i < 10; i++) {
    digitalWrite(buzzer, 1);
    digitalWrite(ledKirmizi, 1);
    delay(sure);
    digitalWrite(ledKirmizi, 0);
    digitalWrite(buzzer, 0);
    delay(sure);
  }
}
void AlarmYok() {
  digitalWrite(ledYesil, 1);
  digitalWrite(buzzer, 0);
  digitalWrite(ledKirmizi, 0);
}
