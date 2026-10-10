#ifndef LED_H
#define LED_H
#include <Arduino.h>

class Led
{
private:
    int _pin;
public:
    Led(int _pin);
    void begin();
    void allumer();
    void eteindre();
};
#endif








