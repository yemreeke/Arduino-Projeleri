#include <Keypad.h>//Keypad Kütüphane ve Ayarlama
#define Satir 4
#define Sutun 3
char key[Satir][Sutun] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};
byte SatirPin[Satir] = {8, 7, 6, 5};
byte SutunPin[Sutun] = {4, 3, 2};
Keypad Tus = Keypad(makeKeymap(key), SatirPin, SutunPin, Satir, Sutun);
char basilanTus;
int Led1 = 12;
int Led2 = 11;
int Led3 = 10;
void setup() {
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
}
void loop() {
  basilanTus = Tus.getKey(); //Basılan tuşu kaydediyoruz.
  if (basilanTus != NO_KEY ) {  //Boş tuş değilse
    if (basilanTus == '1') 
      digitalWrite(Led1, 1);
    else if (basilanTus == '2') 
      digitalWrite(Led2, 1);
    else if (basilanTus == '3')
      digitalWrite(Led3, 1);
    else if (basilanTus == '4')
      digitalWrite(Led1, 0);
    else if (basilanTus == '5')
      digitalWrite(Led2, 0);
    else if (basilanTus == '6')
      digitalWrite(Led3, 0);
    else if (basilanTus == '*') {
      digitalWrite(Led1, 1);
      digitalWrite(Led2, 1);
      digitalWrite(Led3, 1);
    }
    else if (basilanTus == '#') {
      digitalWrite(Led1, 0);
      digitalWrite(Led2, 0);
      digitalWrite(Led3, 0);
    }
  }
}
