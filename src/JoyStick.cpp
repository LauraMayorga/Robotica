#include <Arduino.h>
#include <JoyStick.h>

JoyStick::JoyStick(byte pinJoyButton)
{
    this->pinJoyX = A1;
    this->pinJoyY = A2;
    this->pinJoyButton = pinJoyButton;
}

void JoyStick::init()
{
    pinMode(A1, INPUT);
    pinMode(A2, INPUT);
    pinMode(pinJoyButton,INPUT_PULLUP);
}

int JoyStick::readX()
{
    int Xvalue = analogRead(pinJoyX);
    delay(100);                 //es necesaria una pequeña pausa entre lecturas analógicas
    return Xvalue;
}

int JoyStick::readY()
{
    int Yvalue = analogRead(pinJoyY);
    delay(100);                 //es necesaria una pequeña pausa entre lecturas analógicas
    return Yvalue;
}

bool JoyStick::readButton()
{
    bool buttonValue = digitalRead(pinJoyButton);
    return buttonValue;
}

