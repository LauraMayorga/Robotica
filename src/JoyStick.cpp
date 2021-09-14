#include <Arduino.h>
#include <Temperatura.h>

JoyStick::JoyStick(String pinJoyX, String pinJoyY, byte pinJoyButton)
{
    this->pinJoyX = pinJoyX;
    this->pinJoY = pinJoyY;
    this->pinJoyButton = pinJoyButton;
}

void JoyStick::init()
{
    pinMode(pinJoyX, INPUT);
    pinMode(pinJoyY, INPUT);
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
    delay(100);                 //es necesaria una pequeña pausa entre lecturas analógicas
    return buttonValue;
}

