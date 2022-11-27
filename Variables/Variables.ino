#define LED_PIN 12

int a = 5;
int b;

void setup() {
  // put your setup code here, to run once:
  a = 7 + 4;
  b = a + 4;
  Serial.begin(9600);
  Serial.println(b);
}

void loop() {
  // put your main code here, to run repeatedly:

}
