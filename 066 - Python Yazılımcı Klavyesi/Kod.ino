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
    Keyboard.println("if ():");
    Keyboard.write(KEY_UP_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == '2' ) { //else if
    Keyboard.println("elif ():");
    Keyboard.write(KEY_UP_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == '3' ) { //else
    Keyboard.println("else:");
    Keyboard.releaseAll();
  }
  else if (x == 'A' ) { //break
    Keyboard.println("break");
    Keyboard.releaseAll();
  }
  else if (x == '4' ) { //while
    Keyboard.println("while ():");
    Keyboard.write(KEY_UP_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == '5' ) { //for
    Keyboard.println("for i in range():");
    Keyboard.write(KEY_UP_ARROW);
    for (int i; i < 11; i++) {
      Keyboard.write(KEY_RIGHT_ARROW);
    }
    Keyboard.releaseAll();
  }
  else if (x == '6' ) { //print
    Keyboard.print("print()");
    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == 'B' ) { //input
    Keyboard.print("input()");
    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.releaseAll();
  }
  else if (x == '7' ) { //not
    Keyboard.print("not ");
    Keyboard.releaseAll();
  }
  else if (x == '8' ) { // in
    Keyboard.print("in ");
    Keyboard.releaseAll();
  }
  else if (x == '9' ) { // is
    Keyboard.print("is ");
    Keyboard.releaseAll();
  }
  else if (x == 'C' ) { //class
    Keyboard.println("class Ornek:");
    Keyboard.println("def __init__(self):");
    Keyboard.println("\t  pass");
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.releaseAll();
  }
  else if (x == '*' ) {// dosya oku
    Keyboard.println("with open('file.txt', 'r', encoding='UTF-8') as txt:");
    Keyboard.println("yazi = txt.read()");
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.releaseAll();
  }
  else if (x == '0' ) {//dosya yaz
    Keyboard.println("with open('file.txt', 'w', encoding='UTF-8') as txt:");
    Keyboard.println("txt.write('Instagram : BlueGrays.ino')");
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.releaseAll();
  }
  else if (x == '#' ) { //Pass
    Keyboard.println("pass");
    Keyboard.releaseAll();
  }
  else if (x == 'D' ) { //F5
    Keyboard.write(KEY_F5);
    Keyboard.releaseAll();
  }
}
