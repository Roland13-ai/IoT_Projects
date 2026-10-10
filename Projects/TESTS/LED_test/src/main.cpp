#include <Arduino.h>
#include"Led.h"
Led maLed(13);
void setup() {
  maLed.begin();
}

void loop() {
  maLed.allumer();
  delay(1000);
  maLed.eteindre();
  delay(1000);

}
