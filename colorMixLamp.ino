/*
  Arduino Starter Kit example
  Project 4 - Color Mixing Lamp
  This sketch is amended from Project 3 in the Arduino Starter Kit
  Parts required:
  - one RGB LED
  - three 220 ohm resistors
  - three potentiometers
  Originally:
  created 13 Sep 2012
  modified 14 Nov 2012
  by Scott Fitzgerald
  Thanks to Federico Vanzati for improvements

  http://www.arduino.cc/starterKit

  This example code is part of the public domain.
*/
const int greenLEDPin = 6;    // LED connected to digital pin 9
const int redLEDPin = 11;     // LED connected to digital pin 10
const int blueLEDPin = 9;    // LED connected to digital pin 11

const int redSensorPin = A0;  // pin with potentiometer P1
const int greenSensorPin = A1;   // pin with potentiometer P2
const int blueSensorPin = A2;   // pin with potentiometer P3

int redValue = 0; // value to write to the red LED
int greenValue = 0; // value to write to the green LED
int blueValue = 0; // value to write to the blue LED

int redSensorValue = 0; // variable to hold the value from the red sensor
int greenSensorValue = 0; // variable to hold the value from the green sensor
int blueSensorValue = 0; // variable to hold the value from the blue sensor

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);

  // set the digital pins as outputs
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  // Read the potentiometers analog inputs first:

  // read the value from potentiometer P1(red LED):
  redSensorValue = analogRead(redSensorPin);
  // give the ADC a moment to settle
  delay(1000);
  // read the value potentiometer P2(green LED):
  greenSensorValue = analogRead(greenSensorPin);
  // give the ADC a moment to settle
  delay(1000);
  // read the value from potentiometer P3(blue LED):
  blueSensorValue = analogRead(blueSensorPin);

  // print out the values to the Serial Monitor
  Serial.print("Analog sensor Values \t red: ");
  Serial.print(redSensorValue);
  Serial.print("\t green: ");
  Serial.print(greenSensorValue);
  Serial.print("\t Blue: ");
  Serial.println(blueSensorValue);

  /*
  use the map function to map the analog values from the 
  pots to the digital LEDs. The map function is 
  "toValue=map(fromValue,from Low,from High, to Low, to High)"  
  */
  redValue = map(redSensorValue,0,1023,0,255);
  greenValue = map(greenSensorValue,0,1023,0,255);
  blueValue = map(blueSensorValue,0,1023,0,255);

  // print out the mapped values
  Serial.print("Mapped sensor Values \t red: ");
  Serial.print(redValue);
  Serial.print("\t green: ");
  Serial.print(greenValue);
  Serial.print("\t Blue: ");
  Serial.println(blueValue);

  /*
    Now that you have a usable value, it's time to PWM the LED.
  */
  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
}
