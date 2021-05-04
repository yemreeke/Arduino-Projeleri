#include <IRremote.h> 
IRrecv irrecv(8); //IR alıcının data pini
decode_results results;
int BuzzerPin = 2; //Buzzer'ın pin nosu 
#define TUS1 0x1CE36897
#define TUS2 0x1CE3A25D
#define TUS3 0x1CE36A95
void setup() {
  irrecv.enableIRIn(); //Aktif ediyoruz
  pinMode(BuzzerPin,OUTPUT);//Buzzer Çıkış
}
void loop() {
if (irrecv.decode(&results)){ 
    //Eğer tuşa basıldığı algılandıysa
    if(results.value==TUS1) //Mario Çal
      MarioCal();  
    else if(results.value==TUS2) //DDA Çal
      DahaDunAnnemizinCal();    
    else if(results.value==TUS3)//Yılbaşı Çal
      YilbasiCal();   
    irrecv.resume();// Daha sonraki değer için bekle.
  }  
}   

//--------MARİO KODLARI BAŞLANGIÇ ----//
void MarioCal(){
  int melody[] = {2637, 2637, 0, 2637,  0, 2093, 2637, 0,  3136, 0, 0,  0,  1568, 0, 0, 0,  2093, 0, 0, 1568,  0, 0, 1319, 0,  0, 1319, 0, 1976, 0, 1865, 1760, 0, 1568, 2637, 3136, 3520, 0, 2794, 3136, 0, 2637, 0, 2093, 2349, 1976, 0, 0,  2093, 0, 0, 1568, 0, 0, 1319, 0, 0, 1760, 0, 1976,   0, 1865, 1760, 0,  1568, 2637, 3136,  3520, 0, 2794, 3136,  0, 2637, 0, 2093,  2349, 1976, 0, 0};
  int tempo[] = {12, 12, 12, 12,  12, 12, 12, 12,  12, 12, 12, 12,  12, 12, 12, 12,  12, 12, 12, 12,  12, 12, 12, 12,  12, 12, 12, 12,  12, 12, 12, 12,  9, 9, 9, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,  12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,  9, 9, 9,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,};
  int underworld_melody[] = {262, 523, 220, 440,233, 466, 0,0,262, 523, 220, 440,233, 466, 0,0,175, 349,  147, 294,156, 311, 0,0,175, 349,  147, 294,156, 311, 0,0, 311, 277, 294,277, 311,311, 208, 196, 277, 262, 370, 349, 165, 466, 440, 415, 311, 247, 233, 220, 208, 0, 0, 0};
  int underworld_tempo[] = {12, 12, 12, 12,12, 12, 6,3,12, 12, 12, 12,12, 12, 6,3,12, 12, 12, 12,12, 12, 6,3,12, 12, 12, 12,12, 12, 6,6, 18, 18, 18,6, 6,6, 6, 6, 6, 18, 18, 18, 18, 18, 18, 10, 10, 10,  10, 10, 10, 3, 3, 3};
  int noteDuration,pauseBetweenNotes,size;
  for(int i=0; i<2;i++){
    size = sizeof(melody) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {
      noteDuration = 1000 / tempo[thisNote];
      MarioMelodiFonk(BuzzerPin, melody[thisNote], noteDuration);
      pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      MarioMelodiFonk(BuzzerPin, 0, noteDuration);
      }
    }
    size = sizeof(underworld_melody) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {
      noteDuration = 1000 / underworld_tempo[thisNote];
      MarioMelodiFonk(BuzzerPin, underworld_melody[thisNote], noteDuration);
      pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      MarioMelodiFonk(BuzzerPin, 0, noteDuration);
    }
}
void MarioMelodiFonk(int targetPin , long frequency, long length) {
  long delayValue = 1000000 / frequency / 2; 
  long numCycles = frequency * length / 1000; 
  for (long i = 0; i < numCycles; i++) { 
    digitalWrite(targetPin, HIGH);
    delayMicroseconds(delayValue); 
    digitalWrite(targetPin, LOW); 
    delayMicroseconds(delayValue); 
  }
}
//--------MARİO KODLARI BİTİŞ----//

//-----Daha Dün Annemizin Başlangıç ------//
char DDAnotes[] = "ccggaag ffeeddc ggffeed ggffeed ccggaag ffeeddc ";
int DDAbeats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 };
void DahaDunAnnemizinCal(){
    for (int i = 0; i < 15; i++) {
    if (DDAnotes[i] == ' ') {
      delay(DDAbeats[i] * 300); 
    } else {
      DDAplayNote(DDAnotes[i],DDAbeats[i]*300);
    }
    delay(150); 
  }
}
void DDAplayTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(BuzzerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(BuzzerPin, LOW);
    delayMicroseconds(tone);
  }
}

void DDAplayNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
  
  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      DDAplayTone(tones[i], duration);
    }
  }
}
//-----Daha Dün Annemizin Bitiş ------//

//-----------Yılbasi Başlangıç---------//
char notes[] = "eeeeeeegcde fffffeeeeddedg";
int beats[] = { 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};
void YilbasiplayTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(BuzzerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(BuzzerPin, LOW);
    delayMicroseconds(tone);
  }
}
void YilbasiplayNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
  
  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      YilbasiplayTone(tones[i], duration);
    }
  }
}
void YilbasiCal(){
    for (int i = 0; i < 26; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * 300); // rest
    } else {
      YilbasiplayNote(notes[i], beats[i] * 300);
    }
    delay(150); 
  }
}
//--------Yılbaşi Bitiş-------------//