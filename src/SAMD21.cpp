#include <Arduino.h> 
#include "Parms.h"

//https://docs.platformio.org/en/latest/faq.html#convert-arduino-file-to-c-manually

void setup() {
  if (SUSB == true) { Output.println("setup()"); };
}

void loop() {
  if (SUSB == true) { Output.println("loop()"); };
  delay(1000);
}