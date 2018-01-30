#include "DHT.h"  

int SENSOR = 2;
int Temperature;
int Humidity;

DHT dht(SENSOR, DHT22);
 
void setup() {
  Serial.begin(9600); 
  dht.begin();
}
 
void loop() {
  Temperature = dht.readTemperature();
  Humidity = dht.readHumidity();
  Serial.print("Temperature: "); 
  Serial.print(Temperature);
  Serial.print("ºC ");
  Serial.print("Humidity: "); 
  Serial.print(Humidity);
  Serial.println(" %");
  delay(5000);
}

