#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(int trigPin, int echoPin)
{   _trigPin= trigPin, 
    _echoPin= echoPin;
}

void Ultrasonic::begin()
{   pinMode(_trigPin,OUTPUT);
    pinMode(_echoPin,INPUT);
}
int Ultrasonic::distanceCm()
{   digitalWrite(_trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(_trigPin,HIGH);
    delayMicroseconds(10);  
    digitalWrite(_trigPin,LOW);
    
    unsigned long duration= pulseIn(_echoPin,HIGH,3000);
    return duration*0.034/2;
}
int Ultrasonic::distanceMm()
{   digitalWrite(_trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(_trigPin,HIGH);
    delayMicroseconds(10);  
    digitalWrite(_trigPin,LOW);
    
    unsigned long duration= pulseIn(_echoPin,HIGH,3000);
    return duration*0.34/2;
}