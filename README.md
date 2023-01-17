# FSM House Lights
![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052499794473517066/image.png)

  At the intial state in the house, all lights are turned off. If one of the buttons is pressed (B1/B2) then L1 will turn on.  After L1 is turned on, if B1 is pressed then L1 will turn off and L2 will turn on, but if B2 is pressed then L1 will turn off and L3 will turn on. Finally, if any of the buttons Is pressed(B1/B2) then, the current light that is on will be turned off and we’ll get back at the initial state of the system
  
## So there’s 4 states:
### -	No lights turned on (Initial state)
At this state the system will wait for one of the buttons to be pushed or both of the buttons to be pushed, all the lights will remain turned off like this until so. Once one of the conditions are done, it will transition to the 2d state where L1 will be turned on.
### -	L1 turned on (2nd state)
At this state the system has 3 possbile states, if the user pushes B1 then L1 blub will turn off and the L2 bulb will turn on, which is the 3rd state. But if the user pushes B2 then L3 bulb will turn on and L1 bulb will turn off. And finally if both the buttons are pushed or the user doesn't push any button, both actions will result in the system staying in the system until either one of the buttons is pushed but not both at the same time.
### -	L2 turned on (3rd state)
At this state by pushing any of the button (B1/B2) the L2 bulb will turn off and return to the inital state, and again if the user doesnt't push any of the buttons or if the user presses both buttons, the current state will remain the same and wait for a valid input.
### -	L3 turned on (4th state)
Same as the 3rd state, at this state by pushing any of the button (B1/B2) the L3 bulb will turn off and return to the inital state, and again if the user doesnt't push any of the buttons or if the user presses both buttons, the current state will remain the same and wait for a valid input.

## And we have 2 inputs:
-	B1
-	B2

## Below is how it works visualized for the state transitions: 

### So, at the start, all lights are turned off by default (B1, B2, B3 = OFF), which will be our initial state.

![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052499794473517066/image.png)

### Then, if button 1 (b1) or button 2 (b2) or if both the buttons are pressed (b1 & b2), L1 will be turned on.

![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052958324032802837/image.png)

### At this state, there can be three possible states according to the input, if we press b1 then L1 will turn off and L2 will turn on:

![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052962252954812416/image.png)

### But if we press b2 instead of b1, then L3 will turn on and L1 will turn off:

![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052962058573979729/image.png)

### And finally if we don't press either b1 or b2, and we instead press both of the buttons together, there won't be any changes, L1 will still be turned on and L2 & L3 is turned off. And stay like this until one of the buttons is pressed but not at the same time.

![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052958324032802837/image.png)

### If we end up with the two states, where either one of the buttons is pressed and not both, if we press either button 1 or 2 (b1/b2), then the current light that's turned on (L2/L3) will be turned off and we will back at our initial state. ( If both buttons are instead pressed then it will also stay in the current state, depending on either L2 or L3 was turned on.)

![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052964504281026590/image.png)
![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052964678428528670/image.png)

Here's a simplified sequence of all the states.

![FSMLights](https://cdn.discordapp.com/attachments/1025308569882599476/1063121364162203668/image.png)

 # From this we end up with:
 
![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052500250637631501/image.png)
 
![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052500271441387520/image.png)

## And so, we end up with 4 K-maps, each according to the next states and the outputs

![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052500512710328330/image.png)
![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052500531161079808/image.png)
![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052500535082745876/image.png)
![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052500546017316894/image.png)

## From each K-map we can derive combinatorial boolean equations

- S0 = s0 B1’ B2’ + s0 B1 B2 + s0’ s1 B1’ B2 + s0’ s1 B1 B2’
- S1 = s0’ B2 + s1 B1’ B2’ + s1 B1 B2 + s0’ s1’ B1
- O0  = s0
- O1 = s1

# Implementation in C

To run the code, we must first run "make", as for myself I am on Windows and am using visual studio code, so for me I'll have to run "wsl" first and "make" afterwads, after running "make", the program will automatically run on a forever loop, and will behave according to the description above. For my program, I used cs50's library for help in taking input.

## This is a few screenshots example of how it will look like when running the program

![watch](https://i.gyazo.com/d50bc7d4f5b4396318d2c1abf960630b.mp4)

