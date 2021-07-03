// Use ultrasonic sensor HC-SR04 to measure distance to object

const int trigPin = 7; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor
long duration, inches, cm;

void setup() {
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
   Serial.begin(9600); // Starting Serial Terminal  
}

void loop() {
   digitalWrite(trigPin, LOW);
   delayMicroseconds(2);
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);
  
   duration = pulseIn(echoPin, HIGH);
   inches = duration/74/2;
   cm = duration/29/2;
   Serial.print("Duration is ");
   Serial.println(duration);
   Serial.print("Distance is ");
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(1000);//delay to allow for viewing
}
