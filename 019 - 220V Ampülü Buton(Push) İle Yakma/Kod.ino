int Buton = 7;
int Role = 8;
void setup() {
  pinMode(Buton,INPUT);
  pinMode(Role,OUTPUT);
}
void loop() {
  if(digitalRead(Buton)==HIGH){ //Butona basınca
    digitalWrite(Role,HIGH);//Röle Aç
  }
  else{ //Butona basmayı bırakınca
    digitalWrite(Role,LOW); //Röle Kapat
  }
}
