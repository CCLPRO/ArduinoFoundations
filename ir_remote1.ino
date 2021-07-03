#include <IRremote.h>

// In this project, use the HEX values as read from the ir_remote.ino project
// to control LED and buzzer.
// The builtin LED at pin 13 will blink with each detected signal



const int ledPin = 9;// LED pin conected to pin 9
int ledState = LOW;   // initialialize LED as off
const int buzzerPin = 7;
  
const int RECV_PIN = 8; // define input pin on Arduino 
IRrecv irrecv(RECV_PIN); // create receiving object
decode_results results; // decode_results class is defined in IRremote.h

void setup() { 
  Serial.begin(9600); 
  irrecv.enableIRIn(); // start the receiver 
  pinMode(ledPin, OUTPUT); 
  pinMode(buzzerPin, OUTPUT);
  irrecv.blink13(true);// LED at pin 13 to blink when there is infrared transmission
}

void loop() { 
  
  if (irrecv.decode(&results)) {
      Serial.println(results.value, HEX); 
      if (results.value == 0xFD30CF) {//if 0 is pressed,prefix with 0x to indicate that number is HEX
          digitalWrite(ledPin,HIGH);
          Serial.println("You Pressed 0,LED is ON");}
      else if (results.value == 0xFD08F7) {// if 1 is pressed
        digitalWrite(buzzerPin, HIGH);
        Serial.println("You Pressed 1, Buzzer is ON");}
      else  { // if any number other than 0 or 1 is pressed
         digitalWrite(ledPin,LOW);
         digitalWrite(buzzerPin,LOW);
         Serial.println("LED & Buzzer are OFF");
       }
    irrecv.resume(); // Receive the next value 
    }
  delay (100); // small delay to prevent reading errors
}
