#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#include<Arduino.h>

class Ultrasonic
{
private:
    int _trigPin;
    int _echoPin;

public:
    Ultrasonic(int trigPin, int echoPin);
    void begin();
    int distanceCm();
    int distanceMm();
};
#endif
