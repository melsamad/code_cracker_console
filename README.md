# code_cracker_console
Code cracker game but on a console! (you technically need two?)

## Inspiration

I realized that it's been a while since I used my arduino uno r3, and that I have a bunch of electronic components I've never actually used. So, I decided to challenge myself: what's the most creative project I can make using only things around the house? I thought about this for a while, then stumbled upon this: code cracker. A game I often play with my friends when we're bored using pen and paper. So, let's make a console for it! Technically you would need two of them to actually play against someone, but this is just a prototype I'm making with a breadboard and a cake box I found in the kitchen. Hopefully my next iteration is 3D printed with a PCB!

## Game Concept 

If you don't know what code cracker is, here's a simple explanation along with how this game is supposed to function on the console:

The console is turned on. Once it is, the user gives it to his opponent, who will write the code without him looking. Then, he will initialize the game by clearing the code from the lcd screen and passing the console to his opponent. Then, the user starts guessing the code by entering 4 characters at a time. Everytime he presses the side button, his answer gets registered. If any of the characters match the secret code, the LED representing that character lights up. Once the user cracks the code, all LEDs light up and form a little dance, announcing his win!

## Prototype Components

- Arduino Uno R3
- 4x4 Keypad
- 7-segment serial clock
- LCD Screen Module
- LED lights (the amount depends on how long your code is!)
- buttons
- breadboard power supply module
- battery
- breadboard
- wires
- some sort of box or body for the console
- art tools to really make it feel like you!

## 3D Model

Find the full 3D model [here](https://cad.onshape.com/documents/b488efd8ceefd9861cc477bf/w/53b2ec3882eb2ce6429910d9/e/bfc96b98d67b43bed1ac08e5?renderMode=0&uiState=6a331176dfe1f28658a9ef0b)

<img width="1087" height="772" alt="Screenshot 2026-06-18 at 12 29 02 AM" src="https://github.com/user-attachments/assets/83b821e0-b6a5-4cbd-bcc9-c30567473cdb" />

## Circuit (Tinkercad)

You can also fint it [here](https://www.tinkercad.com/things/0hk3RXVjEtS-code-cracker?sharecode=_kKq5_84vMyC2fsW77Jfon-yHiKRnuw90B278CqT3yU)
<img width="1087" height="772" alt="Screenshot 2026-06-18 at 12 29 54 AM" src="https://github.com/user-attachments/assets/bab971fe-e3d2-4846-87c7-20294850548c" />


## BOM (Bill Of Materials)

All components can be found at any electronics store and Arduino learning kits (first thing I ever bought to get into hardware!) 

| Component | Designator | Quantity | Link |
| :--- | :--- | :--- | :--- | 
| Microcontroller | Arduino Uno R3 | 1 | https://electroslab.com/products/arduino-uno-r3-official-genuine-chinese-version-usb-cable?_pos=2&_sid=0573f5332&_ss=r |
| Keypad | 4*4 Matrix Array/Matrix Keyboard 16 Key Membrane Switch | 1 | https://electroslab.com/products/4-4-matrix-array-matrix-keyboard-16-key-membrane-switch?variant=22177144832100&country=LB&currency=USD&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic&gad_source=1&gad_campaignid=22751656480&gbraid=0AAAAA-EA96JJmQV-2GsnTNAa6sfm9MLSb&gclid=Cj0KCQjwi8nRBhDhARIsAHZf_pac8AP6zCSeQOJmu-EiOT9ZKHu_fW9uXi8mPzR-XAtxq2xVWKMn270aAnaAEALw_wcB | 
| Timer | 0.56 inch Red 4 Digit 7 Segment LED Display CC | 1 | https://electroslab.com/products/0-56-inch-red-4-digit-7-segment-led-display-cc |
| Screen Module | LCD1602 LCD 1602 IIC/I2C Blue Backlight | 1 | https://electroslab.com/products/lcd1602-iic-i2c-blue-backlight | 
| Button | Push Button 2 Pins | 2 | https://electroslab.com/products/push-button-2-pins | 
| Breadboard Power Supply Module | MB102 Breadboard Power Supply Module 3.3V 5V | 1 | https://electroslab.com/products/mb102-breadboard-power-supply-module-3-3v-5v | 
| LED | 28mm Leg LED 10MM (any color) | 4 (less or more) | https://electroslab.com/products/28mm-leg-led-10mm-red |
| Breadboard | 830 Points Soldless Breadboard | 1 | https://electroslab.com/products/830-ponits-soldless-breadboard | 
