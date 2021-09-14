#ifndef JOYSTICK_H
#define JOYSTICK_H
#include <Arduino.h>
class JoyStick
{
    private:
        byte pinJoyX;
        byte pinJoyY;
        byte pinJoyButton;
    public: 
        JoyStick(byte sensorPinDigital);
        void init();
        int readX();
        int readY();
        bool readButton();
};
#endif