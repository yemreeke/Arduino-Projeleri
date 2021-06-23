//Keypad Kütüphane ve Ayarlama
#include <Keypad.h>
#define Satir 4
#define Sutun 4
char key[Satir][Sutun] = {
  {'1', '2', '3','A'},
  {'4', '5', '6','B'},
  {'7', '8', '9','C'},
  {'*', '0', '#','D'}
};
byte SatirPin[Satir] = {9,8, 7, 6};
byte SutunPin[Sutun] = {5,4, 3, 2};
Keypad Tus = Keypad(makeKeymap(key), SatirPin, SutunPin, Satir, Sutun);
char basilanTus;
void setup() {
  Serial.begin(9600);
}
void loop() {
  basilanTus = Tus.getKey(); //Basılan tuşu kaydediyoruz.
  if (basilanTus != NO_KEY ) {  //Boş tuş değilse ekranda gösteriyor.
    Serial.print("Basılan Tus:");
    Serial.println(basilanTus);
  }
}
