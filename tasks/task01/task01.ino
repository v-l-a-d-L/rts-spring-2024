const long intervalPin3 = 10000; // мкс
const long intervalPin5 = 1000;
const long intervalPin6 = 500;
const long intervalPin9 = 100;
const long intervalPin10 = 50;

int ledState3 = LOW;
int ledState5 = LOW;
int ledState6 = LOW;
int ledState9 = LOW;
int ledState10 = LOW;

unsigned long previousMillis3 = 0;
unsigned long previousMillis5 = 0;
unsigned long previousMillis6 = 0;
unsigned long previousMillis9 = 0;
unsigned long previousMillis10 = 0;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis3 >= intervalPin3) {
    previousMillis3 = currentMillis;
    ledState3 = (ledState3 == LOW) ? HIGH : LOW;
    digitalWrite(3, ledState3);
  }

  if (currentMillis - previousMillis5 >= intervalPin5) {
    previousMillis5 = currentMillis;
    ledState5 = (ledState5 == LOW) ? HIGH : LOW;
    digitalWrite(5, ledState5);
  }

  if (currentMillis - previousMillis6 >= intervalPin6) {
    previousMillis6 = currentMillis;
    ledState6 = (ledState6 == LOW) ? HIGH : LOW;
    digitalWrite(6, ledState6);
  }

  if (currentMillis - previousMillis9 >= intervalPin9) {
    previousMillis9 = currentMillis;
    ledState9 = (ledState9 == LOW) ? HIGH : LOW;
    digitalWrite(9, ledState9);
  }

  if (currentMillis - previousMillis10 >= intervalPin10) {
    previousMillis10 = currentMillis;
    ledState10 = (ledState10 == LOW) ? HIGH : LOW;
    digitalWrite(10, ledState10);
  }
}
