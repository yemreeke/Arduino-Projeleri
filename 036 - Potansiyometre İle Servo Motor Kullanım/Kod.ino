#include <Servo.h>
int servoPin = 2;
int deger;
Servo Servo1;
void setup() {
  Servo1.attach(servoPin);
}
void loop() {
  deger = analogRead(A0);//Değer Okuduk
  deger = map(deger,0,1023,0,180);
  //0-1023 Arasındaki değeri 0-180 
  //Olarak Düzenledik
  Servo1.write(deger);
  delay(100);
}
