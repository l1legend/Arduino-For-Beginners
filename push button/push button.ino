#define BUTTON_PIN 2
#define LED_PIN 11

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT);
  pinMode (LED_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH) {
    Serial.println("Button is pressed!");
    analogWrite(LED_PIN, 255);
  }
  else {
    Serial.println("Button is not pressed.");
    analogWrite(LED_PIN, 0);
  }
  delay(100);
}
