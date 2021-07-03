
const int GreenLed=8;
const int YellowLed=10;
const int RedLed=12;

void setup() {
  // put your setup code here, to run once:
pinMode(GreenLed,OUTPUT);
pinMode(YellowLed,OUTPUT);
pinMode(RedLed,OUTPUT);

digitalWrite(GreenLed,LOW);
digitalWrite(YellowLed,LOW);
digitalWrite(RedLed,LOW);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//Ready To Stop
digitalWrite(GreenLed,LOW);
digitalWrite(YellowLed,HIGH);
digitalWrite(RedLed,LOW);

Serial.println(" Yellow : READY TO STOP ");
delay(2000);

// Stop 
digitalWrite(GreenLed,LOW);
digitalWrite(YellowLed,LOW);
digitalWrite(RedLed,HIGH);

Serial.println(" Red : STOP ");
delay(2000);

// Go 
digitalWrite(GreenLed,HIGH);
digitalWrite(YellowLed,LOW);
digitalWrite(RedLed,LOW);

Serial.println(" Green : GO ");
delay(2000);
}
