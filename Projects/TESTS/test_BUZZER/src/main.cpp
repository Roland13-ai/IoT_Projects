#include <Arduino.h>
#include <Buzzer.h>

Buzzer myBuzzer(8,1000);

void setup() {
   myBuzzer.begin();
}

void loop() {
  myBuzzer.beep();
  delay(500);
  myBuzzer.stop();
  delay(500);
  
  myBuzzer.beep(2000);
  delay(500);
  myBuzzer.stop();
  delay(500);
}