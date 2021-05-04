int sure = 60; //Süreyi 60 ms Ayarladık.
void setup() {
  pinMode(2,OUTPUT);    //Mavi Led
  pinMode(3,OUTPUT); //Kırmızı Led
}
void loop() {
  for(int i=0;i<3;i++){
    digitalWrite(2,HIGH); 
    delay(sure);
    digitalWrite(2,LOW);
    delay(sure);  
  }       //Mavi Led 3 Defa Yandı Söndü.
  
  for(int i=0;i<3;i++){
    digitalWrite(3,HIGH); 
    delay(sure);
    digitalWrite(3,LOW);
    delay(sure);  
  }    //Kırmızı Led 3 Defa Yandı Söndü. 
}
