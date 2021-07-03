 // To light up a led when the photoresistor (LDR) detects darkness.

    const int ledPin = 7;    // pin connecting to LED
    const int ldrPin = A0; // pin connecting to photoresistor

    int ldrValue = 0; // this variable is to store the value from photoresistor intensity
    int threshold = 500;   // if photoresistor falls below this value,LED will light up
    
    void setup() {
       Serial.begin(9600);  // start serial communication

       pinMode(ledPin,OUTPUT); //set pin 7 as output to HIGH or LOW

    }

    void loop() {
      ldrValue = analogRead(ldrPin); // read the values of photoresistor between 0-1023 depending on light intensity
      // if the value is below threshold, LED will light up
      if (ldrValue < threshold) {
        digitalWrite(ledPin,HIGH);  // LED will light up
        Serial.print("It's Dark, Turn On LED, ldrValue is = ");
        Serial.println(ldrValue);
      } else {
        digitalWrite(ledPin,LOW);   // LED will off
        Serial.print("It's Bright, Turn Off LED, ldrValue is = ");
        Serial.println(ldrValue);
      }
        delay(2000);                 // to allow for easier data reading
    }
