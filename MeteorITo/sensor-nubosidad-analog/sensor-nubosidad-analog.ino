int PinAnalogico = A0; 
int ValorSensor;

void setup() { 
  Serial.begin(9600);
}

void loop() 
{
ValorSensor = analogRead(PinAnalogico); 
Serial.print("sensor = "); 
Serial.println(ValorSensor);
delay(500);
}
