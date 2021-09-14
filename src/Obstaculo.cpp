#include <Arduino.h>
#include <Obstaculo.h>

Obstaculo::Obstaculo(byte sensor)
{
    this->sensor = sensor;
}

void Obstaculo::init()
{
    pinMode(sensor, INPUT);
}

int Obstaculo::read()
{
    int valor;
    valor = digitalRead(sensor);
    return(valor);
}