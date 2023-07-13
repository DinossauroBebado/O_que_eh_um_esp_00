#include <Arduino.h>


#define LED 2 

void setup() {
  Serial.begin(112500);
  pinMode(LED,OUTPUT);

}

void loop() {

  digitalWrite(LED,HIGH);
  Serial.println("ON");
  delay(500);
  digitalWrite(LED,LOW);
  Serial.println("OFF");
  delay(500);

}

