#define BUTTON_PIN 2
#define LED_PIN 11

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode (LED_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH) {
    analogWrite(LED_PIN, 255);
  }
  else {
    analogWrite(LED_PIN, 0);
  }
  delay(100);
}
