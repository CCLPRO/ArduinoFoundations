
  const int soundSensor=7;
  boolean LEDStatus=false;
  const int LED = 8;
  const int sensorAnalogPin=A1;

  void setup() {
   pinMode(soundSensor,INPUT);
   pinMode(LED_BUILTIN,OUTPUT);
   pinMode(LED,OUTPUT);
   Serial.begin(9600);
  }

  void loop() {
    int SensorData=digitalRead(soundSensor);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(LED,LOW);

    if(SensorData==1){
      if(LEDStatus==false){
          LEDStatus=true;
          digitalWrite(LED,HIGH);
          digitalWrite(LED_BUILTIN,HIGH);
          Serial.print("LED Status is ");
          Serial.println(LEDStatus);
          Serial.print("Analog Sound Reading is ");
          Serial.println(analogRead(A1));
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
