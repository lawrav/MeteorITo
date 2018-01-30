#include <SFE_BMP180.h>
#include <Wire.h>

char status;
double tem,presion;

SFE_BMP180 sensorPresion;

void setup()
{
  Serial.begin(9600);
  sensorPresion.begin();
}
void loop()
{
  status = sensorPresion.startTemperature(); 
  delay(status);
  sensorPresion.getTemperature(tem);
  status = sensorPresion.startPressure(3);
  delay(status);
  sensorPresion.getPressure(presion,tem);
  Serial.print("Presion absoluta:  ");
  Serial.print(presion*0.1,2);
  Serial.println( " KPa");
  delay(500); 
}
