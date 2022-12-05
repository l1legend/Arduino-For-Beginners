int encodeNumber(int number)
{
  return (number + 3) * 5;
}

void printEncodedNumber(int number)
{
  Serial.println(encodeNumber(number));
}

int number1 = 5;
int number2 = 6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int encodedNumber1 = encodeNumber(number1);
  int encodedNumber2 = encodeNumber(number2);

  printEncodedNumber(number1);
}

void loop() {
  // put your main code here, to run repeatedly:

}
