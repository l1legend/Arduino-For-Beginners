void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  for (int i = 0; i < 10; i++) {
    Serial.println("Hello for");
  }

  int i = 0;
  while (i < 10) {
    Serial.println("Hello while");
    i++;
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
