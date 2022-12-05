#define LED_PIN 12

int a = 5; //-32,768 to 32,767
int b;

long l = 400000; // -2,147,483,648 to 2,147,483,647

double c = 3.14;

String d = "Hello Arduino";

bool e = false;

int userAge = 43;
double temperature;
String userName;
bool isAlive;

void setup() {
  // put your setup code here, to run once:
  a = 7 + 4;
  b = a + 4;
  Serial.begin(9600);
  //Serial.println(b);
  Serial.println(l);
}

void loop() {
  // put your main code here, to run repeatedly:

}
