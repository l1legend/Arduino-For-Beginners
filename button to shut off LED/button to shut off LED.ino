#define LED_1_PIN 12
#define LED_2_PIN 11
#define LED_3_PIN 10

#define BUTTON_PIN 2

void setup() {
  pinMode(BUTTON_PIN, INPUT);

  pinMode(LED_1_PIN, OUTPUT);
  pinMode(LED_2_PIN, OUTPUT);
  pinMode(LED_3_PIN, OUTPUT);

  digitalWrite(LED_1_PIN, LOW);
  digitalWrite(LED_2_PIN, LOW);
  digitalWrite(LED_3_PIN, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  //check button's state

  //LED 1 and LED 3 power on, LED 2 power off
  //300 ms
  //LED 1 and LED 3 power off, LED 2 power on
  //300 ms
}
