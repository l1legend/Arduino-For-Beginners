#define BUTTON_PIN 2
#define LED_PIN 11

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode (LED_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH) {
    //analogWrite(LED_PIN, 255);
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    //analogWrite(LED_PIN, 0);
    digitalWrite(LED_PIN, LOW);
  }
  delay(100);
}
