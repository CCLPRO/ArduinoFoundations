  /*
   Stepper Motor Control - one revolution
   This program drives a unipolar or bipolar stepper motor.
   The motor is attached to digital pins 8 - 11 of the Arduino.
   The motor should revolve one revolution in one direction, then
   one revolution in the other direction.
   Created 11 Mar. 2007
   Modified 30 Nov. 2009
   by Tom Igoe
   */
  #include <Stepper.h>
  const int stepsPerRevolution = 2048;  // changed to fit the number of steps per rev for 28-BYJ48.

  // initialize the stepper library on pins 8 through 11:
  Stepper myStepper(32, 8, 10, 9, 11); // 2048/64 = 32, creating an instance of the Stepper class called “steppermotor” 
  void setup() {
    // set the speed at 60 rpm:
    myStepper.setSpeed(200);//adjust speed for your preference
    // initialize the serial port:
    Serial.begin(9600);
  }

  void loop() {
    // step one revolution  in one direction:
    Serial.println("clockwise");
    myStepper.step(stepsPerRevolution);
    delay(500);

    // step one revolution in the other direction:
    Serial.println("counterclockwise");
    myStepper.step(-stepsPerRevolution);
    delay(500);
  }
