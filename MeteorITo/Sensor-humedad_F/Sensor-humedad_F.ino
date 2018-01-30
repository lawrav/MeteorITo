#include "DHT.h"

DHT dht(2, DHT22);  // Pin donde está conectado el sensor y el sensor

void setup() {
  Serial.begin(9600);
  Serial.println("Iniciando...");
  dht.begin();
}
void loop() {
  delay(5000);
  float h = dht.readHumidity(); //Leemos la Humedad
  float t = dht.readTemperature(); //Leemos la temperatura en grados Celsius
  float f = dht.readTemperature(true); //Leemos la temperatura en grados Fahrenheit
  float hi = dht.computeHeatIndex(f, h); // Leemes Sensasión térmica en Fahrenheit
    
   *///--------Enviamos las lecturas por el puerto serial-------------
  
  Serial.print("Humedad ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.print(" *C\t");
  Serial.print(f);
  Serial.print(" *F\t");
  Serial.print("Sensasion Termica ");
  Serial.print(hi);
  Serial.println(" *F");
}
