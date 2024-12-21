#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  pinMode(15, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println();
  Serial.println(analogRead(15)/*(3.3/4095)*/);
  sleep(0.1);
  // put your main code here, to run repeatedly:
}
