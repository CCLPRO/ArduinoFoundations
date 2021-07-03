/*Potentiometer
  Reads an analog input on pin 0, converts it to voltage, and prints both results
  of analog input and voltage to the Serial Monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
*/
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // convert value read to voltage:
  float voltage = sensorValue * (5.0 / 1023.0);

  Serial.println("Analog Read = " + String(sensorValue) + "," + " Voltage = " + String(voltage)+ " volts");
  delay(1000); // delay in between reads for stability
}
