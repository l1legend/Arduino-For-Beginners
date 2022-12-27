void setup() {
  Serial.begin(9600);
  Serial.setTimeout(10);
}

void loop() {
  if (Serial.available() > 0) {
    //long var = Serial.parseInt(); //42
    //double var = Serial.parseFloat(); //3.14
    String var = Serial.readString();
    Serial.println(var);
  }
}
