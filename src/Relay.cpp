#include <Arduino.h>
#include <Relay.h>

Relay::Relay(byte sensor)
{
    this->sensor = sensor;
    this->encendido = false;
}

void Relay::init()
{
    pinMode(sensor, OUTPUT);
}

void Relay::activar()
{
    if (this->encendido){
        digitalWrite(sensor,LOW);  
        this->encendido = false;
    }else{
        digitalWrite(sensor,HIGH);  
        this->encendido = true;
    }

    
}

bool Relay::estado()
{
    return this->encendido;
}