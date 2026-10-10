#include "Potentiometer.h"


Potentiometer::Potentiometer(int potPin)
{ _potPin = potPin;
}

void Potentiometer:: begin()
{   pinMode(_potPin, INPUT);
}

int Potentiometer:: readRaw()
{   return analogRead(_potPin);
}

int Potentiometer:: readPercent()
{   return (int)map(analogRead(_potPin),0,1023,0,100);
}
float Potentiometer:: readVolts()
{  return analogRead(_potPin)*(5.0/1023.0);
}