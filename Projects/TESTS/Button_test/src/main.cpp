#include <Arduino.h>
#include <Bouton.h>
#include <Led.h>

Bouton myBouton(2);
Led maLed(13);
void setup(){
    myBouton.begin();
    maLed.begin();

}

void loop(){
    if (myBouton.estAppuye()){
        maLed.allumer();
    } else{
        maLed.eteindre();
    }
}