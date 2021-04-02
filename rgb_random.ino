// randomly set the brightness of each led in the RGB LED
const int RED = 11; // PWM pin
const int GREEN = 6;// PWM pin
const int BLUE = 9; // PWM pin
// in Tinkercad, place cursor on RGB pin to know pin type.
const int MINRANDOM = 0;
const int MAXRANDOM = 256;//range is 0 to 255
// MIN is in the range, MAX is excluded
int red;
int blue;
int green;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  red = random(MINRANDOM, MAXRANDOM);
  green = random(MINRANDOM, MAXRANDOM);
  blue = random(MINRANDOM, MAXRANDOM);
  
  analogWrite(RED, red);
  analogWrite(GREEN, green);
  analogWrite(BLUE, blue);
  
  delay(1000);
}
