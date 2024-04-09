/// main para class Blinky
#include <Arduino.h>
#include "BlinkyClass.h"

Blinky blinky1;
//this is setup acction
void setup()
{
    blinky1.init(2,500);
    
}

void loop()
{
    blinky1.task();
}