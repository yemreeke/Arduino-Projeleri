#include <Servo.h>
int servoPin = 2;
Servo Servo1;
void setup() {
  Servo1.attach(servoPin);
}
void loop() {
  Servo1.write(0);     //0 Derece Ayarla
  delay(2000);  //Bekle
  Servo1.write(90);   //90 Derece Ayarla
  delay(2000);  //Bekle
  Servo1.write(180); //180 Derece Ayarla
  delay(2000);  //Bekle
}
