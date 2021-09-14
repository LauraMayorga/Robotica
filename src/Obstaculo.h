#ifndef OBSTACULO_H
#define OBSTACULO_H
#include <Arduino.h>
class Obstaculo
{
    private:
    byte sensor;
    boolean presencia;
    public: 
        Obstaculo(byte sensor);
        void init();
        int read();
};
#endif