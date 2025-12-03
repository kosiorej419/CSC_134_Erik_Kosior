/*
@author: Erik Kosior
@Date: 11/24/2025
@Purpose: simple security system that checks the password from keypad
*/
#include <Keypad.h>
int ledRed = 2; //this is the red LED pin
int failDelay = 0;
int successDelay = 0;
int ledGreen = 4; //this is the green LED pin
const byte ROWS = 4; //this is the number of rows
const byte COLS = 4; //this is the number of columns
char  keyPadEntries[5];
char  keys[ROWS][COLS] = {{'1', '2', '3', 'A'},
						  {'4', '5', '6', 'B'},
						  {'7', '8', '9', 'C'},
						  {'*', '0', '#', 'D'}
                         };


byte rowPins[ROWS] = {13, 12, 11, 10}; //keypad rows
byte colPins[COLS] = {9, 8, 7, 6}; //keypad cols

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

int keyPressCount = 0;
String passKey = "47830#";
char entries[sizeof(passKey)];
String passEntered = "";

//executes when the arduino starts up
void setup()
{
  Serial.begin(9600);
}

//infinite loop
void loop()
{
  char key = keypad.getKey();
  
  //if a key was pressed
  if (key){
	entries[keyPressCount] = key;
    Serial.print("Key presed: ");
    Serial.print(key);
    Serial.print("\n");
    keyPressCount++;

    if (key == '#'){
      String passEntered = "";
      
      for (int i = 0; i < sizeof(entries); i++){
        passEntered += entries[i];
      }
      
      if (passEntered == passKey){
        Serial.print("Correct password.");
        Serial.print("\n");
        digitalWrite(ledGreen, HIGH);
        delay(3000);
        digitalWrite(ledGreen, LOW);
        keyPressCount = 0;
        passEntered = "";
      }
      else{
		Serial.print("Incorrect password.");
        Serial.print("\n");
        digitalWrite(ledRed, HIGH);
        delay(3000);
        digitalWrite(ledRed, LOW);
        keyPressCount = 0;
        passEntered = "";
      }
    }
    
  }
  
}