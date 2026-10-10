#ifndef BOUTON_H
#define BOUTON_H
#include <Arduino.h>

class Bouton
{
private:
    int _boutonPin;
    bool _etatPrecedent;
    unsigned long _dernierChangement;
public:
    Bouton(int pin);
    void begin();
    bool estAppuye();
    bool nouvelAppuye();
    bool vienDEtreRelache();

};
#endif 

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    