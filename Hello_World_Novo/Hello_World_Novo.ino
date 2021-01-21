#include "DigiKeyboard.h"

void setup() {
  
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("dir");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){}

}
