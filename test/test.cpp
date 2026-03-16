#include <Arduino.h>

const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);

  Serial.begin(115200);
  delay(1000);

  Serial.println("Arduino Nano Test gestartet");
}

void loop() {
  Serial.println("LED AN");
  digitalWrite(ledPin, HIGH);
  delay(1000);

  Serial.println("LED AUS");
  digitalWrite(ledPin, LOW);
  delay(1000);
}