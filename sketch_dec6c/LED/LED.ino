#define LED_PIN A5

void setup() {
  pinMode(LED_PIN, OUTPUT);
  // digitalWrite(LED_PIN, HIGH);
  // delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, LOW);
  delay(500);
  digitalWrite(LED_PIN, HIGH);
  delay(500);
}
