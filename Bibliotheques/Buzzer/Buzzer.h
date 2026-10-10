# ifndef BUZZER_H
# define BUZZER_H
# include<Arduino.h>

class Buzzer
{
private:
    int _pinBuzzer;
    unsigned long _frequency;
public:
    Buzzer(int pin, int frequency);
    void begin();
    void beep();
    void beep(int frequency);
    void stop();
};

# endif
