// to drive the step motor 28-BYJ48 in 4 phases
int motorpin1=8; // ULN2003's IN1 connect to pin8
int motorpin2=9; // IN2 connect to pin9
int motorpin3=10;// IN3 connect to pin10
int motorpin4=11;// IN4 connect to pin11
// set the delaytime in between phases
// adjust this to see the four LED lights blinking in sequence
int delaytime=20;

void setup() {
  // put your setup code here, to run once:
  pinMode(motorpin1,OUTPUT);
  pinMode(motorpin2,OUTPUT);
  pinMode(motorpin3,OUTPUT);
  pinMode(motorpin4,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  // first phase
    digitalWrite(motorpin1,HIGH);
    digitalWrite(motorpin2,LOW);
    digitalWrite(motorpin3,LOW);
    digitalWrite(motorpin4,LOW);
    delay(delaytime);
  // second phase  
    digitalWrite(motorpin1,LOW);
    digitalWrite(motorpin2,HIGH);
    digitalWrite(motorpin3,LOW);
    digitalWrite(motorpin4,LOW);
    delay(delaytime);
  // third phase  
    digitalWrite(motorpin1,LOW);
    digitalWrite(motorpin2,LOW);
    digitalWrite(motorpin3,HIGH);
    digitalWrite(motorpin4,LOW);
    delay(delaytime);
  // fourth phase
    digitalWrite(motorpin1,LOW);
    digitalWrite(motorpin2,LOW);
    digitalWrite(motorpin3,LOW);
    digitalWrite(motorpin4,HIGH);
    delay(delaytime);
}
