#include <IRremote.h> 
IRrecv irrecv(7); //IR alıcının data pini
decode_results results;
int Role=8;
#define PowerTUS 0x1CE3F00F
#define MuteTUS  0x1CE332CD
void setup() {
  irrecv.enableIRIn(); //Aktif ediyoruz
  pinMode(Role,OUTPUT);
}
void loop() {
  if (irrecv.decode(&results)){ 
    //Eğer tuşa basıldığı algılandıysa
    if(results.value==PowerTUS) //Röle Aç
      digitalWrite(Role,HIGH);
    else if(results.value==MuteTUS)//Röle Kapat
      digitalWrite(Role,LOW); 
    irrecv.resume();// Daha sonraki değer için bekle.
  } 
}
