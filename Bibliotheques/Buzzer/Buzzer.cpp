#include "Buzzer.h"

Buzzer::Buzzer(int pin, int frequency)
{   _pinBuzzer= pin;
    _frequency= frequency;
}

void Buzzer::begin()
{   pinMode(_pinBuzzer, OUTPUT);
}

void Buzzer::beep()
{   tone(_pinBuzzer, _frequency);
}

void Buzzer::beep(int frequency)
{   tone(_pinBuzzer, frequency);
}

void Buzzer::stop()
{   noTone(_pinBuzzer);
}

