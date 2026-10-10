#include <Arduino.h>
#include <Ultrasonic.h>

Ultrasonic sensor(9,10);

void setup() {
  Serial.begin(9600);
  sensor.begin();

  

void loop() {
  int cm = sensor.distanceCm();
  int mm = sensor.distanceMm();
  
  Serial.print("Distance");
  Serial.print(cm);
  Serial.print("cm  | ");
  Serial.print(mm);
  Serial.println("mm");

  delay(500);
}

