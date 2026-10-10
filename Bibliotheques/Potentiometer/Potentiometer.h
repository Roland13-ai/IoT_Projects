#ifndef POTENTIOMETER_H
#define POTENTIOMETER_H
#include <Arduino.h>

class Potentiometer
{
private:
    int _potPin;
public:
    Potentiometer(int potPin);
    void begin();
    int readRaw();
    int readPercent();
    float readVolts();
};
#endif

