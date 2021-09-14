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
    
    
    digitalWrite(sensor,HIGH);  
    this->encendido = true;
    
}

void Relay::desactivar(){

    digitalWrite(sensor,LOW);  
    this->encendido = false;
}

bool Relay::estado()
{
    return this->encendido;
}