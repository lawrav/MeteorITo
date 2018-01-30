int pinRadiacionUV = A0;  //pin para el sensor UV
byte indiceUV = 0;

void setup()
{
  Serial.begin(9600);   //iniciamos comunicación
}

void loop()
{
  indiceUV = map(analogRead(pinRadiacionUV),50,480,0,11); 
  Serial.print("Índice UV: ");
  Serial.println(indiceUV);
  
  delay(1000);
}



