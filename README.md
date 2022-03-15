# Update!
Pictures of this working will be avilible soon. 
# Arduino6LCD
This is some code and plans to runs 6 16x2 LCD displays off a single Arduino UNO board. This works by altering what LCD gets the enable signal from the board so that they all can share the same data lines. To understand this some background on how theese screens is needed. For a normal one to accept the data being sent the enable pin needs to be connected. This code works by ahving all the data lines in paralell, and the enable lines seperate. The screen can then be cosen by setting a different enable pin.
## Other Stuff
A good set of videos on these LCDs is on youtube made by The 8-bit Guy
This circuit can be simulated on Tinkercad here,
https://www.tinkercad.com/things/fRulM8C3M2v
## Schematic
![alt text](https://raw.githubusercontent.com/waarn/Arduino6LCD/main/Circuit.png)

