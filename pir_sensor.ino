/*
  This program turns on led connected to pin 12 and buzzer connected
  to pin 8 of the Arduino if motion detected. Both will be off when no 
  motion is detected after a delay of 1000 milliseconds
*/

const int ledPin = 12;         // LED pin 
const int pirPin = 2;          // PIR Out pin 
const int buzzerPin = 8;       // Buzzer pin 
int pirState = 0;        // PIR status
void setup() {
 pinMode(ledPin, OUTPUT);     
 pinMode(pirPin, INPUT); 
 pinMode(buzzerPin, OUTPUT); 
 Serial.begin(9600);
}
void loop(){
 pirState = digitalRead(pirPin); 
 if (pirState == HIGH) {        // if motion detected
   digitalWrite(ledPin, HIGH);  // turn LED ON 
   digitalWrite(buzzerPin, HIGH); // sound buzzer
   Serial.println("Motion Detected, LED/Buzzer is ON");
   delay(1000);
 } 
 else {
   digitalWrite(ledPin, LOW); // turn LED OFF if no motion
   digitalWrite(buzzerPin, LOW); // turn buzzer off
   Serial.println("No Motion, LED/Buzzer is OFF");
   delay(1000);
 }
} 
