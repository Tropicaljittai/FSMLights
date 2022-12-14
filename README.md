# FSM House Lights
![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052499794473517066/image.png)

  At the starting state in the house, all lights are turned off. If one of the buttons is pressed (B1/B2) then L1 will turn on.  After L1 is turned on, if B1 is pressed then L1 will turn off and L2 will turn on, but if B2 is pressed then L1 will turn off and L3 will turn on. Finally, if any of the buttons Is pressed(B1/B2) then, the current light that is on will be turned off and we’ll get back at the initial state of the system
  
## So there’s 4 states:
-	No lights turned on
-	L1 turned on
-	L2 turned on
-	L3 turned on

## And we have 2 inputs:
-	B1
-	B2

Below is how it works visualized: 

![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052499988883701780/image.png)

  As you can see, at the initial state all lights are turned off and there are 2 buttons, then if b1 or b2 is pressed L1 will turn on, after this if we press b1, L1 will turn off and L2 will turn on, but if instead b2 is pressed L1 will turn off and L3 will turn on, and finally after either of the two state the machine is in, if any of the buttons is pressed then all lights will turn off, returning to our initial state.
 
 # From this we end up with:
 
![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052500250637631501/image.png)
 
![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052500271441387520/image.png)

## And so, we end up with 4 K-maps, each according to the next states and the outputs

![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052500512710328330/image.png)
![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052500531161079808/image.png)
![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052500535082745876/image.png)
![FSMLights](https://cdn.discordapp.com/attachments/734045662169137234/1052500546017316894/image.png)

## From each K-map we will have these equations

- S0 = s0 B1’ B2’ + s0 B1 B2 + s0’ s1 B1’ B2 + s0’ s1 B1 B2’
- S1 = s0’ B2 + s1 B1’ B2’ + s1 B1 B2 + s0’ s1’ B1
- O0  = s0
- O1 = s1

# Implementation in C

To run the code, we must first run "make", as for myself I am on Windows and am using visual studio code, so for me I'll have to run "wsl" first and "make" afterwads, after running "make", the program will automatically run on a forever loop, and will behave according to the description above.

## This is a few screenshots example of how it will look like when running the program

![image](https://user-images.githubusercontent.com/93302274/207544401-9a159880-8e11-4d10-b25b-ffd8876f48e6.png)

![image](https://user-images.githubusercontent.com/93302274/207544316-a657c564-0b4b-4a8a-8835-48f1161a2bfa.png)

![image](https://user-images.githubusercontent.com/93302274/207544431-5a7ad488-2bf0-44bc-8ec8-da57af68907b.png)

