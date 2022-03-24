int alev = 3;
int ledYesil = 5;
int ledKirmizi = 6;
int buzzer = 7;
void setup() {
  pinMode(alev, INPUT);
  pinMode(ledYesil, OUTPUT);
  pinMode(ledKirmizi, OUTPUT);
  pinMode(buzzer, OUTPUT);
}
void loop() {
  if (digitalRead(alev)==0) { //Alev Varsa
    digitalWrite(ledYesil, 0);
    digitalWrite(ledKirmizi, 1);
    digitalWrite(buzzer, 1);
  }
  else { //Alev Yoksa 
    digitalWrite(ledYesil, 1);
    digitalWrite(ledKirmizi, 0);
    digitalWrite(buzzer, 0);
  }
}
