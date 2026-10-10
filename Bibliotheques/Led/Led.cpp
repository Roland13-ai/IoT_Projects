#include "Led.h"
Led::Led(int pin){
    _pin = pin;

}

void Led::begin(){
    pinMode(_pin, OUTPUT);
}
void Led::allumer(){
    digitalWrite(_pin, HIGH);
}

void Led::eteindre(){
    digitalWrite(_pin, LOW);
}
