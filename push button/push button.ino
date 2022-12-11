#define BUTTON_PIN 2
#define LED_PIN 11

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode (LED_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    digitalWrite(LED_PIN, LOW);
  }
  delay(100);
}
