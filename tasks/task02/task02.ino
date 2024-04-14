#include <TaskManagerIO.h>

const int ledPin3 = 3;  
const int ledPin5 = 5;  
const int ledPin6 = 6;  
const int ledPin9 = 9;  
const int ledPin10 = 10;  

const int interval3 = 10000;  
const int interval5 = 1000;  
const int interval6 = 500;  
const int interval9 = 100;  
const int interval10 = 50;

int ledStatePin3 = LOW;
int ledStatePin5 = LOW;
int ledStatePin6 = LOW;
int ledStatePin9 = LOW;
int ledStatePin10 = LOW;

TaskManagerIO taskManager;

void toggleLed(int pin, int &ledStatePin) {
  ledStatePin = (ledStatePin == LOW) ? HIGH : LOW;
  digitalWrite(pin, ledStatePin);
}

void setup() {
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin10, OUTPUT);

  taskManager.scheduleFixedRate(interval3, [] {
    toggleLed(ledPin3, ledStatePin3);
  });

  taskManager.scheduleFixedRate(interval5, [] {
    toggleLed(ledPin5, ledStatePin5);
  });

  taskManager.scheduleFixedRate(interval6, [] {
    toggleLed(ledPin6, ledStatePin6);
  });

  taskManager.scheduleFixedRate(interval9, [] {
    toggleLed(ledPin9, ledStatePin9);
  });

  taskManager.scheduleFixedRate(interval10, [] {
    toggleLed(ledPin10, ledStatePin10);
  });
}

void loop() {
  taskManager.runLoop();
}
