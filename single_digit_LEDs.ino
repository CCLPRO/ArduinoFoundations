// This program will turn on and off, one by one all the LEDS in the 7 segment LED
// 5161BS (Common Anode) using for loop.
// initialize the pins
const int ledPinA=2;// pin A connected to Arduino pin 2
const int ledPinB=3;// pin B to pin 3
const int ledPinC=4;// pin C to pin 4
const int ledPinD=5;
const int ledPinE=6;
const int ledPinF=7;
const int ledPinG=8;
const int ledPinDP=9;// pin DP to pin 9

void setup() {
  // Setting up the pins to be an output using for loop
  for(int i=2;i<10;i++)
  {
    pinMode(i,OUTPUT);
  }
}
void loop() {
 // for loop to turn off the 7 segement LEDs  
  for(int i=2;i<10;i++)
  {
    digitalWrite(i,HIGH);// for common anode, HIGH will turn off LED
  }
 digitalWrite(ledPinA,LOW);// Turn on LED
 delay(1000);
 digitalWrite(ledPinA,HIGH);//Turn off LED

 digitalWrite(ledPinB,LOW);// Turn on LED
 delay(1000);
 digitalWrite(ledPinB,HIGH);//Turn off LED
 
 digitalWrite(ledPinC,LOW);// Turn on LED
 delay(1000);
 digitalWrite(ledPinC,HIGH);//Turn off LED

 digitalWrite(ledPinD,LOW);// Turn on LED
 delay(1000);
 digitalWrite(ledPinD,HIGH);//Turn off LED

 digitalWrite(ledPinE,LOW);// Turn on LED
 delay(1000);
 digitalWrite(ledPinE,HIGH);//Turn off LED

 digitalWrite(ledPinF,LOW);// Turn on LED
 delay(1000);
 digitalWrite(ledPinF,HIGH);//Turn off LED

 digitalWrite(ledPinG,LOW);// Turn on LED
 delay(1000);
 digitalWrite(ledPinG,HIGH);//Turn off LED

 digitalWrite(ledPinDP,LOW);//Turn on LED
 delay(1000);
 digitalWrite(ledPinDP,HIGH);//Turn off LED
}
