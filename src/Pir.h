#ifndef PIR_H
#define PIR_H
#include <Arduino.h>
class Pir
{
    private:
        byte sensor;
        boolean presencia;
    public: 
        Pir(byte sensor);
        void init();
        int read();
};
#endif