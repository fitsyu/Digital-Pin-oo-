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
2. add #include "dio.h" on top of your sketch file
