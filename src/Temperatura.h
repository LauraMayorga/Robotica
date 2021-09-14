//Aquí definiciones
#ifndef TEMPERATURA_H
#define TEMPERATURA_H
#include <Arduino.h>
class Temperatura
{
    private:
        byte sensorPinDigital;
        byte sensorPinAnalog;
        boolean presencia;
    public: 
        Temperatura(byte sensorPinDigital);
        void init();
        int read();
};
#endif