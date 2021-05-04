int deger;//deger Değişkenini Tanımladık
void setup() {
  Serial.begin(9600);
}
void loop() {  
  deger = analogRead(A0); //Değer Okuduk
  Serial.print("Değer:");
  Serial.println(deger);
  delay(500);
}
