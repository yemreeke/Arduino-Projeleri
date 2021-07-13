#include "Keyboard.h"
#include <Keypad.h>
#define Satir 4
#define Sutun 4
char key[Satir][Sutun] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte SatirPin[Satir] = {9, 8, 7, 6};
byte SutunPin[Sutun] = {5, 4, 3, 2};
Keypad Tus = Keypad(makeKeymap(key), SatirPin, SutunPin, Satir, Sutun);
void setup() {
  Serial.begin(9600);
  Keyboard.begin();
}
void loop() {
  char x = Tus.getKey();
  if (x == '1' ) { //İf
    Keyboard.println("if (){");
    Keyboard.write(KEY_UP_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == '2' ) { //else if
    Keyboard.println("else if (){");
    Keyboard.write(KEY_UP_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == '3' ) { //else
    Keyboard.println("else {");
    Keyboard.releaseAll();
  }
  else if (x == 'A' ) { //break
    Keyboard.print("break;");
    Keyboard.releaseAll();
  }
  else if (x == '4' ) { //while
    Keyboard.println("while () {");
    Keyboard.write(KEY_UP_ARROW);
    Keyboard.write(KEY_UP_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == '5' ) { //for
    Keyboard.println("for (int i; i < ; i++) {");
    Keyboard.write(KEY_UP_ARROW);
    for (int i; i < 14; i++) {
      Keyboard.write(KEY_RIGHT_ARROW);
    }
    Keyboard.releaseAll();
  }
  else if (x == '6' ) { //digitalWrite
    Keyboard.print("digitalWrite(,);");
    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == 'B' ) { //digitalRead
    Keyboard.print("digitalRead();");
    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == '7' ) { //Serial begin
    Keyboard.println("Serial.begin(9600);");
    Keyboard.releaseAll();
  }
  else if (x == '8' ) { // Serial println
    Keyboard.print("Serial.println();");
    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == '9' ) { //analogWrite
    Keyboard.println("analogWrite(,);");
    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == 'C' ) { //analogRead
    Keyboard.println("analogRead();");
    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == '*' ) {//pinMode(,INPUT);
    Keyboard.print("pinMode(,INPUT);");
    for (int i = 0; i < 8; i++)
      Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == '0' ) {//pinMode(,OUTPUT)
    Keyboard.print("pinMode(,OUTPUT);");
    for (int i = 0; i < 9; i++)
      Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == '#' ) { //Derle
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('r');
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('r');
    delay(500);
    Keyboard.releaseAll();
  }
  else if (x == 'D' ) { //Yükle
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('U');
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('U');
    delay(500);
    Keyboard.releaseAll();
  }
}
