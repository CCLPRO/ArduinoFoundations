
// to drive the unipolar step motor 28-BYJ48 in 4 phases

const int stepPin1=8; // ULN2003's IN1 connect to pin8
const int stepPin2=9; // IN2 connect to pin9
const int stepPin3=10;// IN3 connect to pin10
const int stepPin4=11;// IN4 connect to pin11
// set the delaytime in between phases
// adjust this to see the four LED lights blinking in sequence
const int delaytime=20;

void setup() {
// set each stepper motor pin to output
pinMode(stepPin1,OUTPUT);
pinMode(stepPin2,OUTPUT);
pinMode(stepPin3,OUTPUT);
pinMode(stepPin4,OUTPUT);
}
void loop() {
// first phase, refer to the truth table for 4-phase driving
  digitalWrite(stepPin1,HIGH);
  digitalWrite(stepPin2,LOW);
  digitalWrite(stepPin3,LOW);
  digitalWrite(stepPin4,LOW);
  delay(delaytime);
// second phase
  digitalWrite(stepPin1,LOW);
  digitalWrite(stepPin2,HIGH);
  digitalWrite(stepPin3,LOW);
  digitalWrite(stepPin4,LOW);
  delay(delaytime);
// third phase
  digitalWrite(stepPin1,LOW);
  digitalWrite(stepPin2,LOW);
  digitalWrite(stepPin3,HIGH);
  digitalWrite(stepPin4,LOW);
  delay(delaytime);
// fourth phase
  digitalWrite(stepPin1,LOW);
  digitalWrite(stepPin2,LOW);
  digitalWrite(stepPin3,LOW);
  digitalWrite(stepPin4,HIGH);
  delay(delaytime);
}
