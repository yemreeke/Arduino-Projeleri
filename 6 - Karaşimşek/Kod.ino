int Ledler[] = {2,3,4,5,6,7};
void setup() {
  for(int i=0;i<6;i++){
    pinMode(Ledler[i],OUTPUT);
  }
}
void loop() {
  for(int i=0;i<6;i++){
    digitalWrite(Ledler[i],HIGH);
    delay(100); // 1 2 3 4 5 6. Ledleri Yaktık
    digitalWrite(Ledler[i],LOW);
  }
  //Sırasıyla 1 2 3 4 5 6. Ledleri Yaktık
  for(int i=4;i>0;i--){
    digitalWrite(Ledler[i],HIGH);
    delay(100);
    digitalWrite(Ledler[i],LOW);
  }
  //Sırasıyla 5 4 3 2 Ledleri Yaktık
}
