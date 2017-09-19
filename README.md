# Digital-Pin-oo-
Reading and writing from/to digital pins on Arduino board using OO aproach

The most useful feature of OO is that attribute and behaviour are grouped into one unit (object) thus will simplify programming  overall.
So digitalRead(2) becomes simply d2.isLow() or d2.isHigh()
And digitalWrite(2, LOW) become d2.low()

# Plus (+)
- Reading and writing never this simpler

# Minus (-)
- Increase storage size for your program

# Installation
1. put the DIO folder to your local libraries path for Arduino e.g ~/Documents/Arduino/Libraries/ for Mac OSX

# Getting Started
1. add ```#include "dio.h"``` on top of your sketch file

2. setup the pins
```
DigitalPin button = DigitalPin(2, INPUT);
DigitalPin led    = DigitalPin(3, OUTPUT);
```

# Employ
``` 
// check if button is pressed
if ( button.isHigh() )
{
    // turn on the led by writing HIGH signal to pin that connected to led
    led.high();
}
else
{
    // turn off the led by writing LOW signal to pin that connected to led
    led.low();
}
```
