// IMPORTANT: this code is not tested or completed it yet. This is just to initialize everything and virtually test on tinkercad.

#include <Keypad.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// opponent's code 
char inputString[5];      
int keyCounter = 0;       
bool sequenceComplete = false; 

// keypad stuff
const byte rows = 4;
const byte columns = 4;

char hexaKeys[rows][columns] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[rows] = {9, 8, 7, 6};
byte columnPins[columns] = {5, 4, 3, 2};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, 
	columnPins, rows, columns
);

// led stuff 
int redLed = 13;
int blueLed = 12;
int yellowLed = 11;
int greenLed = 10;

// screen stuff
LiquidCrystal_I2C lcd(0x21, 16, 2);

// timer stuff


// button
int button = 1; 

void setup() {
  Serial.begin(9600);
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(button, INPUT);
  
  lcd.init();
  lcd.clear();
  lcd.display();
  lcd.backlight();
  lcd.setCursor(0, 0);
  
}

void loop() {
  
  char customKey = customKeypad.getKey();
  
  if (customKey) {
    Serial.println(customKey);
    lcd.print(customKey);
    
    
  if (pressedKey && !sequenceComplete) {
    
  
    inputString[keyCounter] = pressedKey;
    keyCounter++; 
    
    inputString[keyCounter] = '\0'; 

   
    Serial.print("Recorded: ");
    Serial.println(pressedKey);

    
    if (keyCounter == 4) {
      sequenceComplete = true;
      
     
      Serial.print("Success! The code your opponent needs to crack is:");
      Serial.println(inputString);
    }
    
  } 
  
}


