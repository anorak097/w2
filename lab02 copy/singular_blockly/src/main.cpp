#include <Arduino.h>

int8_t light_status;
int8_t flashing;
int8_t light_up;

void setup() {
  pinMode(0, INPUT);
  light_status = 0;
  flashing = 1;
  light_up = 1;
}

void loop() {
}
