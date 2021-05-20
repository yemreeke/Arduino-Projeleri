int BuzzerPin=9;
int Led=8;
int LDR_Deger=0;
void setup(){
  pinMode(BuzzerPin,OUTPUT);  
  pinMode(Led,OUTPUT);
  pinMode(A0,INPUT);
}
void loop(){
  LDR_Deger=analogRead(A0);//LDR Değer Okuduk
  if(LDR_Deger<300){  //300'den küçükse
    digitalWrite(Led,HIGH);   //Led Yak
    digitalWrite(BuzzerPin,HIGH); //Buzzer Aç
  }
  else{   //Büyükse  kapat
    digitalWrite(Led,LOW);   
    digitalWrite(BuzzerPin,LOW);
  }
}
