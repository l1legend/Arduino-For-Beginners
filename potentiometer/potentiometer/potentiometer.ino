#define POTENTIOMETER_PIN A2
#define LED_PIN 11

void setup() {
  Serial.begin(9600);
  pinMode(POTENTIOMETER_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(POTENTIOMETER_PIN) == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    digitalWrite(LED_PIN, LOW);
  }
  delay(100);
}
