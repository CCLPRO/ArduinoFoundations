// blink 2 led with delay() function
      const int GreenLed = LED_BUILTIN;
      const int RedLed =8;

      void setup() {
      // put your setup code here, to run once:
      pinMode(GreenLed,OUTPUT);
      pinMode(RedLed,OUTPUT);
      digitalWrite(GreenLed,LOW);
      digitalWrite(RedLed,LOW);

      Serial.begin(9600);
      }
      void loop() {
      digitalWrite(GreenLed,HIGH);
      digitalWrite(RedLed,LOW);

      Serial.println(" Green LED is ON, Red LED is OFF ");
      delay(3000);

      Serial.println("********************************");

      digitalWrite(GreenLed,LOW);
      digitalWrite(RedLed,HIGH);

      Serial.println(" Red LED is ON, Green LED is OFF ");
      delay(3000);

      Serial.println("********************************");
      }
