//Alıcı
int led = 8;
bool durum = false;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void loop() {
  if (Serial.available()) {
    if (Serial.read() == 1) {
      durum = !durum;
      digitalWrite(led, durum);
    }
  }
}

//Verici
int buton=8;
void setup() {
  Serial.begin(9600);
  pinMode(buton,INPUT);
}
void loop() {
  if(digitalRead(buton)){
    Serial.write(1);
    delay(300);
  }
}
