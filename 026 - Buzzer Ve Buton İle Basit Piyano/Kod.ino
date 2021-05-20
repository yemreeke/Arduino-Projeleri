#define Dok  264//Kalın Do
#define Re   297
#define Mi   330
#define Fa   352
#define Sol  396
#define La   440
#define Si   495
#define Doi  528//İnce Do
const int ButonDok =2;
const int ButonRe  =3;
const int ButonMi  =4;
const int ButonFa  =5;
const int ButonSol =6;
const int ButonLa  =7;
const int ButonSi  =8;
const int ButonDoi =9;
const int BuzzerPin=10;
void setup() {
  pinMode(ButonDok,INPUT);
  pinMode(ButonRe,INPUT);
  pinMode(ButonMi,INPUT);
  pinMode(ButonFa,INPUT);
  pinMode(ButonSol,INPUT);
  pinMode(ButonLa,INPUT);
  pinMode(ButonSi,INPUT);
  pinMode(ButonDoi,INPUT);
  pinMode(BuzzerPin,OUTPUT);
}
void loop() { 
  if(digitalRead(ButonDok)==HIGH)
    tone(BuzzerPin,Dok,100);
  else if(digitalRead(ButonRe)==HIGH)
    tone(BuzzerPin,Re,100);
  else if(digitalRead(ButonMi)==HIGH)
    tone(BuzzerPin,Mi,100);
  else if(digitalRead(ButonFa)==HIGH)
    tone(BuzzerPin,Fa,100);
  else if(digitalRead(ButonSol)==HIGH)
    tone(BuzzerPin,Sol,100);
  else if(digitalRead(ButonLa)==HIGH)
    tone(BuzzerPin,La,100);
  else if(digitalRead(ButonSi)==HIGH)
    tone(BuzzerPin,Si,100);
  else if(digitalRead(ButonDoi)==HIGH)
    tone(BuzzerPin,Doi,100);
  else
    noTone(BuzzerPin);
}
