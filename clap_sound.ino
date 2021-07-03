/* This project uses a sound sensor to light up the builtin LED at Pin 13 and 
a external LED connected to Pin 8 of the Arduino Board.
On clapping, the LEDs will light up for about 2 seconds and then turn off.
View the serial monitor for LED status ie. high(1) or not.
*/

const int soundSensor=7;
boolean LEDStatus=false;
const int LED = 8;

void setup() {
 pinMode(soundSensor,INPUT);
 pinMode(LED_BUILTIN,OUTPUT);
 pinMode(LED,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  
  int SensorData=digitalRead(soundSensor); 
  digitalWrite(LED,LOW);
  digitalWrite(LED_BUILTIN,LOW);
 
  if(SensorData==1){
        if(LEDStatus==false){
        LEDStatus=true;
        digitalWrite(LED,HIGH);
        digitalWrite(LED_BUILTIN,HIGH);
        Serial.print("LED Status is ");
        Serial.println(LEDStatus);
        Serial.println("****************************");
        delay(2000);
    }
    else{
        LEDStatus=false;
        digitalWrite(LED,LOW);
        digitalWrite(LED_BUILTIN,LOW);
    } 
  }
}
