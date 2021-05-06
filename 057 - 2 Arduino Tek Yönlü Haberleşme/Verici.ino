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
