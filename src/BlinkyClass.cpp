#include "BlinkyClass.h"

void Blinky::init(uint8_t pin,
                  uint32_t period)
{
    pinMode(pin,OUTPUT);
    _st=TOGGLE;
    _pin=pin;
    _period=period;
};

void Blinky:: task()
{
    if(_st==SHOTDOWN)// funciona igual si pregunto por 0
    {
        return;
    }
    if(_st==TOGGLE)
    {
        digitalWrite(
            _pin,
            !digitalRead(_pin));
        _tim.reset();
        _st = WAIT; // la enum no permite el ++
        return;   
    }
     if(_st==WAIT)
    {
        if(_tim.elapsed()<_period)
            return;
        _st==TOGGLE;
        return;
    }        
};