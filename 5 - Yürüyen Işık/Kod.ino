int Ledler[] = {2,3,4,5,6,7};
//Ledler dizi(liste)'sini oluşturduk.
void setup() {
  for(int i=0;i<6;i++){
    pinMode(Ledler[i],OUTPUT); 
  }
//Ledler dizisindeki pin numaralarını
//çıkış pini olarak sırayla ayarladık.
}
void loop() {
  for(int i=0;i<6;i++){
    digitalWrite(Ledler[i],HIGH);
    delay(150);
    digitalWrite(Ledler[i],LOW);  
    }
//Ledler dizisindeki pin numaralarına
//sırayla yakıp söndürdük.  
}
