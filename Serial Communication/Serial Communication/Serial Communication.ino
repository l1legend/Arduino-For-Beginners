void setup() {
  Serial.begin(9600);
}

void loop() {
  int i = 7;
  Serial.print("This value is : ");
  Serial.print(i);
  Serial.println(".");
}
