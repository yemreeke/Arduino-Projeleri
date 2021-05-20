int echoPin = 6;
int trigPin = 7;
int maksimum=20; //Max 20 Cm Ayarladım
int mesafe;
int led1=8;
int led2=9;
int buzzerPin=10;
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}
void loop() {
  mesafe = MesafeOlc(); // 0 20cm arası
  if(mesafe==maksimum){  //Güvenli
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
  }
  else{   //Riskli
    digitalWrite(led1,LOW);
    tone(buzzerPin,70);
    digitalWrite(led2,HIGH);
    delay(mesafe*10);
    noTone(buzzerPin);
    digitalWrite(led2,LOW);
    delay(mesafe*10);
  }
}

int MesafeOlc(){
  digitalWrite(trigPin,HIGH); //Enerji Verdik
  delayMicroseconds(10); //10 bekledik
  digitalWrite(trigPin,LOW); //Enerji Kestik
  unsigned long sure = pulseIn(echoPin, HIGH);
  int mesafeOlc = sure*0.034/2;
  if(mesafeOlc>maksimum)
    mesafeOlc= maksimum;
  return mesafeOlc;
}
