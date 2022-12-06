int temperatureArray[5] = {23, 24, 56, 12, 40};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //Serial.println(temperatureArray[1]);

  temperatureArray[1] = 30;
  //Serial.println(temperatureArray[1]);

  for (int i = 0; i < 5; i++) {
    Serial.println(temperatureArray[i]);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
