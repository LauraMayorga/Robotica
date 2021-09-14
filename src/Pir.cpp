#include <Arduino.h>
#include <Pir.h>

Pir::Pir(byte sensor)
{
    this->sensor = sensor;
}

void Pir::init()
{
    pinMode(sensor, INPUT);
}

int Pir::read()
{
    int valor;
    valor = digitalRead(sensor);
    return(valor);
}