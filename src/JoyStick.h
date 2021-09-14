#ifndef JOYSTICK_H
#define JOYSTICK_H
#include <Arduino.h>
class JoyStick
{
    private:
        String pinJoyX;
        String pinJoyY;
        byte pinJoyButton;
    public: 
        JoyStick(byte sensorPinDigital,byte sensorPinAnalog);
        void init();
        int readX();
        int readY();
        bool readButton();
};
#endif