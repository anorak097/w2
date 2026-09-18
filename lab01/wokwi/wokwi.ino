bool light_up;
bool light_status = HIGH;

unsigned long previous = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(3) == LOW){
    delay(50);
    while (digitalRead(3) == LOW){
      delay(50);
    }
    digitalWrite(2, light_status);
    light_status = !light_status;
  }

  unsigned long current = millis();
  
}
