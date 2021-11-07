int reedRolePin = 2;
int deger;
int led1 = 5; //Kırmızı
int led2 = 7; //Yeşil
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(reedRolePin,INPUT);
}
void loop() {
  deger = digitalRead(reedRolePin);
  if(!deger){ // (deger==0) 
    digitalWrite(led1,0);
    digitalWrite(led2,1);
  }
  else{ //Kapı Açılırsa
    digitalWrite(led1,1);
    digitalWrite(led2,0);
  }
  delay(100);
}
