#include <Arduino.h>


#define POT 33 

int read_pot;

void setup() {
  Serial.begin(112500);
  pinMode(POT,INPUT);

}

void loop() {
    read_pot = analogRead(POT);
    Serial.print(read_pot);
    Serial.println("");
}

