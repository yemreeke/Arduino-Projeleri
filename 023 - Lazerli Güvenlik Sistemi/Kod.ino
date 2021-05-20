#include <IRremote.h> 
int BuzzerPin=9,Led1=8;
int Led2=7,Buton=6,control=0;
IRrecv irrecv(4);
decode_results results;
#define PowerTUS 0x1CE3F00F
void setup(){
  irrecv.enableIRIn();
  pinMode(BuzzerPin,OUTPUT);  
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  pinMode(Buton,INPUT);
  pinMode(A0,INPUT);
}
void loop(){
  if(analogRead(A0)<300)
    control=1; //Hırsız var 
  if(digitalRead(Buton)==1)
    control=0;  //Alarmı kapat
  if (irrecv.decode(&results)){  
    if(results.value==PowerTUS)
      control=0; //Alarm Kapat
    irrecv.resume();
  }  
  
  if(control==1){  //Alarmı Aç
    digitalWrite(Led1,HIGH);
    digitalWrite(BuzzerPin,HIGH);
    digitalWrite(Led2,LOW);
  }
  else{        //Alarmı Kapat
    digitalWrite(Led1,LOW);
    digitalWrite(BuzzerPin,LOW);
    digitalWrite(Led2,HIGH);
  }
}
