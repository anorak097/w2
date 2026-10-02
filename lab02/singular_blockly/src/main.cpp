#include <Arduino.h>

int8_t light_up;
int light_status;
int8_t flashing;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(3, INPUT_PULLUP);
  pinMode(0, INPUT); // 自動設定腳位模式
  light_up = 0;
  light_status = HIGH;
  flashing = 1;
}

void loop() {
  if ((digitalRead(0) == LOW)) {
  delay(50);
  while ((digitalRead(0) == LOW)) {
  delay(10);
  }
  light_up = !(light_up);
  if (light_up) {
  flashing = !(flashing);
  }
  }
  if ((light_up && !(flashing))) {
  digitalWrite(2, HIGH);
  }
  else if ((light_up && flashing)) {
  digitalWrite(2, light_status);
  light_status = !(light_status);
  delay(200);
  }
  else {
  digitalWrite(2, LOW);
  }
}
