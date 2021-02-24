#include "DigiKeyboard.h"

void setup() {
  
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cls");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("mkdir Teste_Digispark");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("cd Teste_Digispark");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("echo Oi Mundo > saida.txt");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(800);
  DigiKeyboard.print("type saida.txt");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){}

}
