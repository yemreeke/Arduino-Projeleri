#include <IRremote.h> 
IRrecv irrecv(8); //IR alıcının data pini
decode_results results;
int Led1=11,Led2=12,Led3=13;
//           0x HEX KOD
#define TUS1 0x1CE36897
#define TUS2 0x1CE3A25D
#define TUS3 0x1CE36A95
#define TUS4 0x1CE3EA15
#define TUS5 0x1CE30AF5
#define TUS6 0x1CE3AA55
#define PowerTUS 0x1CE3F00F
#define MuteTUS  0x1CE332CD

void setup() {
  irrecv.enableIRIn(); //Aktif ediyoruz
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  pinMode(Led3,OUTPUT);
}
void loop() {
  if (irrecv.decode(&results)){ 
    //Eğer tuşa basıldığı algılandıysa
    if(results.value==TUS1)  //Led 1 Aç
      digitalWrite(Led1,HIGH);    
    else if(results.value==TUS2) //Led 2 Aç
      digitalWrite(Led2,HIGH);    
    else if(results.value==TUS3) //Led 3 Aç
      digitalWrite(Led3,HIGH);    
    else if(results.value==TUS4) //Led 1 Kapat
      digitalWrite(Led1,LOW);        
    else if(results.value==TUS5) //Led 2 Kapat
      digitalWrite(Led2,LOW);    
    else if(results.value==TUS6) //Led 3 Kapat
      digitalWrite(Led3,LOW);     
    else if(results.value==PowerTUS){ //Hepsini Aç
      digitalWrite(Led1,HIGH);
      digitalWrite(Led2,HIGH);
      digitalWrite(Led3,HIGH);
    }    
    else if(results.value==MuteTUS){//Hepsini Kapat
      digitalWrite(Led1,LOW); 
      digitalWrite(Led2,LOW);
      digitalWrite(Led3,LOW);
    }
    irrecv.resume();// Daha sonraki değer için bekle.
  } 
}
