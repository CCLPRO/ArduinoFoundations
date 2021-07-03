/* This project measures temperature using TMP36 sensor.
Temperature in Celcius and Fahrenheit sent to serial monitor with ADC value.
Output offset voltage = 500mV
Scale factor = 10mV/celcius.
*/

const int Vout= A0; // pin A0 is initialise as sensor's output

void setup()
{
Serial.begin(9600);
analogReference(DEFAULT);//maximum voltage read from sensor is default ie. 5V
}
//main loop
void loop()
{
int valueADC = analogRead(Vout);
float Vout = (valueADC/1023.0) * 5000;
float celsius= (Vout-500)/10; //for tmp37,it is dividing by 20 - check datasheet
Serial.print("ADC value is ");
Serial.println(valueADC);
Serial.print(celsius);
Serial.write(0xB0);//to print the degree symbol
Serial.print(" Celsius, ");
Serial.print((celsius * 9)/5 + 32);
Serial.write(0xB0);
Serial.println(" Fahrenheit");
delay(3000); // delay 3 seconds
}
