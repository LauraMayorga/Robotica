#include <Arduino.h>
#include <Temperatura.h>

Temperatura::Temperatura(byte sensorPinDigital)
{
    this->sensorPinDigital = sensorPinDigital;
    this->sensorPinAnalog = A0;
}

void Temperatura::init()
{
    pinMode(sensorPinDigital, INPUT);
    pinMode(A0, OUTPUT);
}

int Temperatura::read()
{
    int digitalVal = digitalRead(sensorPinDigital); 
    // Read the analog interface
    int analogVal = analogRead(A0); 
    Serial.println(analogVal); // print analog value to serial
    return digitalVal;
}
