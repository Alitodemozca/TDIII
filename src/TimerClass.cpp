#include "TimerClass.h"
#include <Arduino.h>

void Timer::reset()
{
    tstart =(uint32_t)(~ millis())+ (uint32_t) 1;
}

uint32_t Timer::elapsed()
{
    return tstart + (uint32_t)( millis());
}