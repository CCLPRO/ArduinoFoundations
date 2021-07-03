// Use a Ultrasonic Sensor HC-SR04 to detect distance and display
//results in serial monitor and LCD 1602
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int trigPin = 7; // Trig (Trigger) Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor
long duration, inches, cm;
void setup() {
   lcd.begin(16,2);// initialize the lcd
   Serial.begin(9600); // Starting Serial Terminal
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
}
void loop() { 
   digitalWrite(trigPin, LOW);
   delayMicroseconds(2);
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);
   duration = pulseIn(echoPin, HIGH);
   inches = duration/74/2;
   cm = duration/29/2;
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   
   lcd.setCursor(0,0);//to display first row
   lcd.print("Distance :- ");
   lcd.setCursor(0,1);//to display second row
   lcd.print(inches);
   lcd.setCursor(3,1);
   lcd.print(" in, ");
   lcd.setCursor(8,1);
   lcd.print(cm);
   lcd.setCursor(12,1);
   lcd.print("cm");    
   delay(100);
}
