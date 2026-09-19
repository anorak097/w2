/* 腳位模式警告:
 * 提示：腳位 3 已被設為 INPUT_PULLUP 模式，現在正被用作 INPUT 模式。若在同一程式流程中，可能需要重新設定腳位模式。
 */

#include <Arduino.h>

boolean light_up;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(3, INPUT_PULLUP);
  light_up = false;
}

void loop() {
  if ((digitalRead(3) == LOW)) {
  delay(50);
  while ((digitalRead(3) == LOW)) {
  delay(10);
  }
  }
  if ((light_up == true)) {
  digitalWrite(2, HIGH);
  }
  else if ((light_up == false)) {
  digitalWrite(2, LOW);
  }
}
