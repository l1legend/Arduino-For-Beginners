void setup() {
  // initial serial communication
  Serial.begin(9600); //baudrate, data transfer speed
  Serial.println("Hello Arduino");

}

void loop() {
  Serial.println("In the loop");
  delay(500);
}
