/* This project turns on the LED and buzzer when the tilt sensor is tilted.
 *  State of tilt sensor is output to serial monitor
*/
const int tiltPin = 5;   //Tilt sensor input to Arduino pin 5,connect other pin to ground
int tilt;          //The current reading from the input pin of the tilt sensor    
const int RedLedPin = 13;  // LED output pin is Arduino pin 13
const int BuzzerPin = 6; // Active Buzzer pin (longer leg) connect to Arduino pin 6, other leg to ground 

void setup(){
  pinMode (tiltPin, INPUT_PULLUP);  //tiltPin use with Arduino's internal pull-up resistor, estimated at 
                                    // between 20k and 50k ohm    
  pinMode (RedLedPin, OUTPUT); // To set RedLedPin as OUTPUT
  Serial.begin(9600);
}

void loop () {
  tilt = digitalRead(tiltPin);  //Read the output from the tilt sensor
  if (tilt == HIGH) {           //If the reading is 1 or HIGH, code below will run 
    digitalWrite(RedLedPin, HIGH);   // Red LED will turn ON
    tone(BuzzerPin, 400,500);      // Buzzer will sound at 400Hz for 0.5secs.
    Serial.print("Tilt Sensor is HIGH ie ");
    Serial.println(tilt);
    delay(1000);                       //pause for 1 second
   
  } else { // If the reading from tilt sensor is 0 or LOW, code below will run
    digitalWrite(RedLedPin, LOW);    //LED will turn OFF
    Serial.print("Tilt Sensor is LOW ie ");
    Serial.println(tilt);
    delay(1000);
  }
  delay(500);   // pause 500 milliseconds between readings
}
                                                           
