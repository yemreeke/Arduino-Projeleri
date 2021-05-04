void setup() {
  pinMode(2,OUTPUT);   // Çıkış 
  pinMode(3,OUTPUT);   // Pinlerini
  pinMode(4,OUTPUT);   // Tanımladık.
}
void loop() {
  digitalWrite(2,HIGH); //Kırmızı Led Açtık
  digitalWrite(3,LOW);  
  digitalWrite(4,LOW);  
  delay(2000); //2 saniye bekledik.
  digitalWrite(2,LOW);  
  digitalWrite(3,HIGH); //Sarı Led Açtık
  digitalWrite(4,LOW);  
  delay(300); //0.3 saniye bekledik.
  digitalWrite(2,LOW);  
  digitalWrite(3,LOW);  
  digitalWrite(4,HIGH); //Yeşil Led Açtık
  delay(2000);
  digitalWrite(2,LOW); 
  digitalWrite(3,HIGH); //Sarı Led Açtık
  digitalWrite(4,LOW);  
  delay(300); //0.3 saniye bekledik ve başa(loop) döndük
}
