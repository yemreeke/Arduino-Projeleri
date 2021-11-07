int reedRolePin = 8;
int deger;
void setup() {
  Serial.begin(9600);
  pinMode(reedRolePin,INPUT);
}
void loop() {
  deger = digitalRead(reedRolePin);
  Serial.print("Değer:");
  Serial.println(deger);
  delay(1000);
}
