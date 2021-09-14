#include <Arduino.h>
#include <Temperatura.h>

Temperatura::Temperatura(byte sensorPinDigital, String sensorPinAnalog)
{
    this->sensorPinDigital = sensorPinDigital;
    this->sensorPinAnalog = sensorPinAnalog;
}

void Temperatura::init()
{
    pinMode(sensorPinDigital, INPUT);
    pinMode(sensorPinAnalog, OUTPUT);
}

int Temperatura::read()
{
    int digitalVal = digitalRead(sensorPinDigital); 
    // Read the analog interface
    int analogVal = analogRead(sensorPinAnalog); 
    Serial.println(analogVal); // print analog value to serial
    return digitalVal;
}


void Temperatura::setPinesConexion(byte eleccion, String pinModificar)
{
    if(eleccion == 1 ){
        this->sensorPinDigital = pinModificar;
    }else{
        this->sensorPinAnalog = pinModificar;
    }
}