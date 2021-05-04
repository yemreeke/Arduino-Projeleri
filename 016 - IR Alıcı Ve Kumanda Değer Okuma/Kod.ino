//Kütüphane indirmediyseniz internetten indirebilirsiniz.
#include <IRremote.h> 
//Taslak->library ekle->IRremote tıklayın
IRrecv irrecv(2); //IR alıcının data pini
decode_results results;
void setup() {
  irrecv.enableIRIn(); //Aktif ediyoruz
  Serial.begin(9600); //Seri Haberleşme
}
void loop() {
  if (irrecv.decode(&results)){ 
    //Eğer tuşa basıldığı algılandıysa
    Serial.println(results.value, HEX); 
    //Seri ekranda hex formatta bu adresi yazdır.
    irrecv.resume();// Daha sonraki değer için bekle.
  } 
}
