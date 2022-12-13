#define LED_1_PIN 12
#define LED_2_PIN 11
#define LED_3_PIN 10


void setup() {
  pinMode(LED_1_PIN, OUTPUT);
  pinMode(LED_2_PIN, OUTPUT);
  pinMode(LED_3_PIN, OUTPUT);

  digitalWrite(LED_1_PIN, LOW);
  digitalWrite(LED_2_PIN, LOW);
  digitalWrite(LED_3_PIN, LOW);
}

void loop() {
  digitalWrite(LED_1_PIN, HIGH); //red on
  digitalWrite(LED_2_PIN, LOW); // yellow on
  delay(3000);
  digitalWrite(LED_1_PIN, LOW); // red off
  digitalWrite(LED_3_PIN, HIGH); // green on
  delay(3000);
  digitalWrite(LED_3_PIN, LOW); // green off
  digitalWrite(LED_2_PIN, HIGH); // yellow on
  delay(1000);
}
