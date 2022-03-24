int ledYesil = 2;
int ledKirmizi = 3;
int buzzer = 4;
void setup() {
  pinMode(ledYesil, OUTPUT);
  pinMode(ledKirmizi, OUTPUT);
  pinMode(buzzer, OUTPUT);
}
void loop() {
  if (analogRead(A0)>100) { //Gaz Varsa
    digitalWrite(ledYesil, 0);
    digitalWrite(ledKirmizi, 1);
    digitalWrite(buzzer, 1);
  }
  else { //Gaz Yoksa 
    digitalWrite(ledYesil, 1);
    digitalWrite(ledKirmizi, 0);
    digitalWrite(buzzer, 0);
  }
}
