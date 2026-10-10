#include <Arduino.h>
#include <Buzzer.h>
#include <Potentiometer.h>
#include <Led.h>
#include <Ultrasonic.h>

Ultrasonic ultras_sensor(9,10);
Led led(13);
Buzzer buzzer(8, 1000);
Potentiometer pot(A0);

unsigned long dernierBip= 0;

void setup() {
  Serial.begin(9600);
  ultras_sensor.begin();
  buzzer.begin();
  pot.begin();
  led.begin();
}

void loop() {
  unsigned long maintenant = millis();
  int distance= ultras_sensor.distanceCm();
  int seuil = map(pot.readRaw(),0,1023,5,50);
  Serial.print("la distance actuelle est:");
  Serial.println(distance);
  Serial.print("et le seuil actuel:");
  Serial.println(seuil);

  if (distance<=(seuil/2)){
    led.allumer();

    if (maintenant - dernierBip>= 200){
      buzzer.beep(); 
      delay(50);
      buzzer.stop();
      dernierBip=maintenant;
    }
  }
  else if (distance<=seuil){
    led.allumer(); 
    if(maintenant - dernierBip>= 1000){
      buzzer.beep(); 
      delay(50);
      buzzer.stop();
      dernierBip=maintenant;
    }
  }
  
  else {
    led.eteindre();
    buzzer.stop();
  }
}

