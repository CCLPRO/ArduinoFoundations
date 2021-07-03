    /* In this project, 5 LEDs shall blink in sequence.
    A 8x8 dot matrix display type 1088BS Common Anode is used
    */
    const int pin9=2; //Connect the matrix pin 9 to Uno pin 2
    const int pin13=3;//Connect the matrix pin 13 to Uno pin 3
    const int pin14=4;
    const int pin16=5;
    const int pin2=6;
    const int pin3=7;
    const int pin5=8;
    const int pin4=9;
    const int pin12=10;
    const int pin6=11;
    ;
    void setup() {
    // put your setup code here, to run once:
    pinMode(pin9,OUTPUT);
    pinMode(pin13,OUTPUT);
    pinMode(pin14,OUTPUT);
    pinMode(pin16,OUTPUT);
    pinMode(pin2,OUTPUT);
    pinMode(pin3,OUTPUT);
    pinMode(pin5,OUTPUT);
    pinMode(pin4,OUTPUT);
    pinMode(pin12,OUTPUT);
    pinMode(pin6,OUTPUT);

    }
    void loop() {
      // put your main code here, to run repeatedly:
    digitalWrite(pin9,HIGH);//set the anode pin HIGH
    digitalWrite(pin13,LOW);//set the cathode pin LOW，led will be turned on。
    delay(500);
    digitalWrite(pin9,LOW);//set the anode pin LOW
    digitalWrite(pin13,HIGH);//set the cathode pin HIGH，led will be turned off。
    delay(500);
    digitalWrite(pin14,HIGH);
    digitalWrite(pin16,LOW);
    delay(500);
    digitalWrite(pin14,LOW);
    digitalWrite(pin16,HIGH);
    delay(500);
    digitalWrite(pin2,HIGH);
    digitalWrite(pin3,LOW);
    delay(500);
    digitalWrite(pin2,LOW);
    digitalWrite(pin3,HIGH);
    delay(500);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin4,LOW);
    delay(500);
    digitalWrite(pin5,LOW);
    digitalWrite(pin4,HIGH);
    delay(500);
    digitalWrite(pin12,HIGH);
    digitalWrite(pin6,LOW);
    delay(500);
    digitalWrite(pin12,LOW);
    digitalWrite(pin6,HIGH);
    delay(500);
    }
