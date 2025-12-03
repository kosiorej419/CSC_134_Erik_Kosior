//@author: Erik Kosior
//@date: 11/24/2025
//@purpose: make LED blink

int led = 8;


void setup(){
  //set the pin to output
  pinMode(led, OUTPUT);
  
  //set the Serial port speed
  Serial.begin(9600);
}


void loop(){
  //set the led pin to HIGH
  digitalWrite(led, HIGH); //turn LED on
  delay(500);
  digitalWrite(led, LOW); // turn LED off
  delay(500);
  
}