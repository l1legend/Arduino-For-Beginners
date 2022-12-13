#define LED_1_PIN 12 //red
#define LED_2_PIN 11 //yellow
#define LED_3_PIN 10//green


void setup() {
  pinMode(LED_1_PIN, OUTPUT);
  pinMode(LED_2_PIN, OUTPUT);
  pinMode(LED_3_PIN, OUTPUT);

  digitalWrite(LED_1_PIN, LOW);
  digitalWrite(LED_2_PIN, LOW);
  digitalWrite(LED_3_PIN, LOW);
}

void loop() {
  digitalWrite(LED_1_PIN, HIGH); //red
  digitalWrite(LED_2_PIN, LOW);
  digitalWrite(LED_3_PIN, LOW);
  delay(500);
  digitalWrite(LED_1_PIN, LOW);
  digitalWrite(LED_2_PIN, LOW);
  digitalWrite(LED_3_PIN, HIGH); //green
  delay(1000);
  digitalWrite(LED_1_PIN, LOW);
  digitalWrite(LED_2_PIN, HIGH); //yellow
  digitalWrite(LED_3_PIN, LOW); 
  delay(500);
}
