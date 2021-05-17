int ledSari = 2;
int ledMavi = 3;
int ledKirmizi = 4;
int ledYesil = 5;
int x;
int y;
void setup() {
  pinMode(ledSari, OUTPUT);
  pinMode(ledMavi, OUTPUT);
  pinMode(ledKirmizi, OUTPUT);
  pinMode(ledYesil, OUTPUT);
}
void loop() {
  y = analogRead(A0);
  x = analogRead(A1);
  if (x < 10)
    digitalWrite(ledKirmizi, 1);
  else
    digitalWrite(ledKirmizi, 0);
  if (x > 1000)
    digitalWrite(ledMavi, 1);
  else
    digitalWrite(ledMavi, 0);
  if (y < 10)
    digitalWrite(ledSari, 1);
  else
    digitalWrite(ledSari, 0);
  if (y > 1000)
    digitalWrite(ledYesil, 1);
  else
    digitalWrite(ledYesil, 0);
}
