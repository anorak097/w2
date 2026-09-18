bool light_up;
bool flashing = true;
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
    light_up = !light_up;
    if (light_up){
      flashing = !flashing;
    }
  }

  unsigned long current = millis();
  
  if (light_up && !flashing){
    digitalWrite(2, HIGH);
  }
  else if (light_up && flashing){
    if (current - previous >= 200){
      previous = current;
      digitalWrite(2, light_status);
      light_status = !light_status;
    }
  }
  else{
    digitalWrite(2, LOW);
  }
}
