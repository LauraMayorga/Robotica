//Aquí definiciones
#ifndef TEMPERATURA_H
#define TEMPERATURA_H
#include <Arduino.h>
class Temperatura
{
    private:
        String sensorPinAnalog;
        byte sensorPinDigital;
        boolean presencia;
    public: 
        Temperatura(byte sensorPinDigital,byte sensorPinAnalog);
        void init();
        int read();
        void setPinesConexion(byte eleccion, String pinModificar);
};
#endif