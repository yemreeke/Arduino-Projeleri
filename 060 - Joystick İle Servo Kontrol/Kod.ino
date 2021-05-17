#include <Servo.h>
Servo servo1;
Servo servo2;
int x, y;
int s1 = 0;
int s2 = 0;
void setup() {
  servo1.attach(5);
  servo2.attach(6);
}
void loop() {
  y = analogRead(A0);
  x = analogRead(A1);
  if (x < 10) {
    if (s1 != 0) {
      servo1.write(--s1);
    }
  }
  if (x > 1000) {
    if (s1 != 180) {
      servo1.write(++s1);
    }
  }
  if (y < 10) {
    if (s2 != 0) {
      servo2.write(--s2);
    }
  }
  if (y > 1000) {
    if (s2 != 180) {
      servo2.write(++s2);
    }
  }
}
