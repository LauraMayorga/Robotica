#ifndef RELAY_H
#define RELAY_H
#include <Arduino.h>
class Relay
{
    private:
    byte sensor;
    bool encendido;
    public: 
        Relay(byte sensor);
        void init();
        void activar();
        void estado();
};
#endif