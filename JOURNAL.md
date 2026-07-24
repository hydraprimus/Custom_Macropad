7/23/26
9:05pm - Today I spent 25 minutes working on the basic macropad guide tutorial to get an understanding of how Kicad and Fusion360 work. 

9:30pm - I spent 41 minutes researching microprocessors and macropads, as well as brainstorming macropad designs. I specifically looked into the Seeeduino XIAO rp2040 and micropython.

7/24/26
9:02am-10:05am - began studying and working on designing my 9x9 matrix keypad. Originally, my idea was to simply make a 9x9 keypad, but I after taking a look at the kit contents, i just kept adding more features. My new plan has a 9x9 keypad, with a volume rotary encoder and a OLED display above it. It took me some time to figure out the wiring, but I was able to finish my schematics diagram.

10:37-11:30am - worked on the pcb in the pcb editor. It was very challenging to connect the front and back columns and rows correctly, but I figured it out. The problem i ran into was that i placed the diodes on the front, where the switches were overlapping, so I had to fix that problem and move the diodes to the back. The problem with this, however, was that one of the diodes was overlapping the XIAO rp2040, so i had to move the diodes and copper rails a lot.

11:45am-12:18am redid the copper tracks and labels because my current one was hard to read and would probably be hard to solder. I also switched the matrix columns to be on the front while putting the rows on the back so that the diode placement would be easier.
