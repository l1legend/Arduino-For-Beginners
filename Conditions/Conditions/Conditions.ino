void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int temperature = 35;

  // if ((temperature >= 20) && (temperature < 30)) {
  //   Serial.println("OK");
  // }

  if (temperature == 40) {
    Serial.println("OK");
  }
  else if (temperature == 35) {
    Serial.println("else if");
  }
  else {
    Serial.println("not OK");
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
