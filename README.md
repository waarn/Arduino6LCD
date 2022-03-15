# Arduino6LCD
This is some code and plans to runs 6 16x2 LCD displays off a single Arduino UNO board. This works by altering what LCD gets the enable signal from the board so that they all can share the same data lines. To understand this some background on how theese screens is needed. For a normal one to accept the data being sent the enable pin needs to be connected. This code works by ahving all the data lines in paralell, and the enable lines seperate. The screen can then be cosen by setting a different enable pin.
## Schematic
![alt text](http://url/to/img.png)
