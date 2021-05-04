int Buton=7;
int Role=8;
int RoleDurum=0; //Röle Kapalı Olarak Tanımladık
void setup() {
  pinMode(Role,OUTPUT); 
  pinMode(Buton,INPUT); 
}
void loop() {  
  if(digitalRead(Buton)==1){ //Butona basınca
    RoleDurum = !RoleDurum; //RoleDurum tersi olsun
    digitalWrite(Role,RoleDurum); //Açıksa Kapansın
    delay(300); //Bekle       //Kapalıysa Açılsın
  }   
}
