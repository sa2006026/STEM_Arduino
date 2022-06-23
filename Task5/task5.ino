// Example 53.1 - ADS1110 single-sided voltmeter (0~2.048VDC)

#include "Wire.h"
#define ads1110 0x48
float voltage, data;
byte highbyte, lowbyte, configRegister;
void setup()
{
 Serial.begin(9600);
 Wire.begin();
}
void loop()
{
 Wire.requestFrom(ads1110, 3);
 while(Wire.available()) // ensure all the data comes in
 {
 highbyte = Wire.read(); // high byte * B11111111
 lowbyte = Wire.read(); // low byte
 configRegister = Wire.read();
 }

 data = highbyte * 256;
 data = data + lowbyte;
 Serial.print("Data >> ");
 Serial.println(data, DEC);
 Serial.print("Voltage >> ");
 voltage = data * 2.048 ;
 voltage = voltage / 32768.0;
 Serial.print(voltage, DEC);
 Serial.println(" V");
 delay(1000);
}
