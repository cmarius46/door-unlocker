#include "Servo.h"

#define micPin 7
#define fingerPin 6


Servo finger;

int val;

void setup() {
  // put your setup code here, to run once:
  // servos;
  finger.attach(fingerPin);
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(micPin);
  Serial.println(val);
  delay(50);
}
