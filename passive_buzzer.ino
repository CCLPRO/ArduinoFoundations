int buzzer = 9; //The passive buzzer has one pin at pin 9
// the other pin is to ground
int freq = 0; // start with frequency of 50Hz

void setup()
{
pinMode (buzzer, OUTPUT);
Serial.begin(9600);
}
void loop(){
tone(buzzer,freq);
freq += 100;  // freq increment
Serial.println("Frequency is ");
Serial.println(freq);
delay(2000); //adjust delay to have diff sound performance 
if (freq > 1000) {
noTone(buzzer);// buzzer stops
delay(5000);//delay of 5 sec before restart at freq = 0
freq = 0;}
}
// try this using active buzzer to compare the tone output performance.
// for active buzzer, the longer leg is to pin 9. 
