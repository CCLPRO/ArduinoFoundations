/* Using TMP36 with 2 analog pins set to high and low acting as 5V power supply
and ground. A third analog pin serves as the input pin for the sensor's output
*/
int t=0; // set time t to 0
const int Vin=A0; // sets analog input A0 as +5V source 
const int Vout=A1; // sets A1 as the sensor input
const int Gnd=A2; // sets analog input A2 as ground for TMP36
float valueADC;
float celcius;
float tempf;
void setup()
{
  pinMode(Vin,OUTPUT);
  pinMode(Gnd,OUTPUT);
  pinMode(Vout,INPUT);
  digitalWrite(Vin,HIGH); // sets analog input A0 HIGH
  digitalWrite(Gnd,LOW);  // sets analog input A2 LOW
  Serial.begin(9600);    

}
void loop()
{ delay(2000); // delay of 2 seconds 
  t=t+5;       // increment time by five seconds
  valueADC=analogRead(Vout); // reads the TMP36 output
  float vout = (valueADC/1023.0) * 5000;
  float celcius= (vout-500)/10; 

  tempf=(celcius*9)/5 +32;    // converts degree C to degree F
  Serial.println("...............");
  Serial.println("Temperature logger");
  Serial.print("Time in sec = ");  // prints the time on serial monitor window
  Serial.println(t);
  Serial.print("ADC value is ");
  Serial.println(valueADC);
  Serial.print("Temperature in deg C = "); // prints the temperature in degreeC
  Serial.println(celcius);
  Serial.print("Temperature in deg F = "); // prints the temperature in degreeF
  Serial.println(tempf);
}
