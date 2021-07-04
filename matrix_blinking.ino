  /* Program the common anode 8x8 matrix dot matrix display
     to blink 4 squares.
     At start of loop, anode pins are set HIGH and cathode to LOW.
     Next, anode pins are set LOW and cathode HIGH
  */
      const int pin2=12;//anode pin
      const int pin3=3;//cathode pin
      const int pin4=4;//cathode
      const int pin7=11;//anode
      const int pin8=5;//anode
      const int pin11=6; //cathode
      const int pin14=2;//anode
      const int pin15=7;//cathode

      void setup() {
      //put your setup code here, to run once:
      pinMode(pin2,OUTPUT);
      pinMode(pin3,OUTPUT);
      pinMode(pin4,OUTPUT);
      pinMode(pin7,OUTPUT);
      pinMode(pin8,OUTPUT);
      pinMode(pin11,OUTPUT);
      pinMode(pin14,OUTPUT);
      pinMode(pin15,OUTPUT);
      }
      void loop() {
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,LOW);
      digitalWrite(pin7,HIGH);
      digitalWrite(pin8,HIGH);
      digitalWrite(pin11,LOW);
      digitalWrite(pin14,HIGH);
      digitalWrite(pin15,LOW);
      delay(500);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,HIGH);
      digitalWrite(pin7,LOW);
      digitalWrite(pin8,LOW);
      digitalWrite(pin11,HIGH);
      digitalWrite(pin14,LOW);
      digitalWrite(pin15,HIGH);
      delay(500);
      }
      
