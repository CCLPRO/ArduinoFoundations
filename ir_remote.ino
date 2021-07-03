// IR sensor will receive signals from the IR remote and print the
// values in HEX in the serial monitor


#include <IRremote.h>

const int input_pin = 8; //set D8 as input signal pin
IRrecv irrecv(input_pin);//create a receiver object named 'irrecv' with input pin 8
decode_results signals;//received signals are decoded and stored in 'signals'.
void setup()
{
    Serial.begin(9600);
    irrecv.enableIRIn(); // enable input from IR receiver
}
void loop() {
if (irrecv.decode(&signals)) {//if signals are received, print values in HEX
        Serial.println(signals.value, HEX);
        irrecv.resume(); // get the next signal
    }
}
