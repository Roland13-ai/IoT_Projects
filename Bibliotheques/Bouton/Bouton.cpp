#include "Bouton.h"

Bouton::Bouton(int pin)
{
    _boutonPin= pin;
    _etatPrecedent= false;
    _dernierChangement= 0;
}
void Bouton::begin()
{
    pinMode(_boutonPin,INPUT_PULLUP);
}

bool Bouton::estAppuye()
{    return digitalRead(_boutonPin)==LOW;
}
bool Bouton::nouvelAppuye()
{   bool etatActuel = estAppuye();
    bool changement = (etatActuel != _etatPrecedent);
    
    if (changement && etatActuel){
        _etatPrecedent = etatActuel;
        _dernierChangement= millis();
        return true;
    }
    _etatPrecedent = etatActuel;
    return false;
}

bool Bouton::vienDEtreRelache(){
    bool etatActuel = estAppuye();
    bool changement = (etatActuel != _etatPrecedent);
    
    if (changement && !etatActuel){
        _etatPrecedent = etatActuel;
        _dernierChangement= millis();
        return true;
    }
    _etatPrecedent = etatActuel ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    return   false;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              