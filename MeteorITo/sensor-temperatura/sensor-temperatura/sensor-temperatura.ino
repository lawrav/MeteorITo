#include "DHT.h"  
float temperatura;

DHT dht(2, DHT22);
 
void setup() {
  Serial.begin(9600); 
  dht.begin();
}
 
void loop() {
  temperatura = dht.readTemperature();
  Serial.print("Temperatura: "); 
  Serial.print(temperatura);
  Serial.println(" *C ");
  delay(2000);
}

