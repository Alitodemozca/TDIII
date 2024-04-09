#pragma once
#include <Arduino.h>
#include <stdint.h>
#include "TimerClass.h"

class Blinky
{
public:
    void init (uint8_t pin,
               uint32_t period);
    void task();
private:
    enum State
    {
    SHOTDOWN, //estado 0 ej SHOTDOWN =-1 si quiero un numero
    TOGGLE, //estado 1
    WAIT
    };
    State   _st=SHOTDOWN;
    uint8_t  _pin;
    uint32_t _period;
    Timer    _tim;
};