// active buzzer - set to HIGH and LOW to produce single tone
// no frequency setting
// if use passive buzzer, you will only hear a soft 'click sound'

const int buzzerPin = 8;//long pin to pin 8, short pin to ground 

void setup ()
{
  pinMode (buzzerPin, OUTPUT);
}

void loop ()
{
  
  digitalWrite (buzzerPin, HIGH);
  delay (1000); // buzzer sound for 1000 milliseconds
  digitalWrite (buzzerPin, LOW);
  delay (3000); // delay of 3 seconds before next buzzer sound
}
