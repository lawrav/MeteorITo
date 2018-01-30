int pinAnalogico = A0;              //pin analógico a leer
int pinLED = 9;               //pin digital para el led
int valorSensor = 0;                  //variable del sensor a leer
int intensidadLED = 0;                  //variable para la intensidad del led

void setup() {
}

void loop() {
  valorSensor = analogRead(pinAnalogico);       //leemos el pin analogico
  intensidadLED = map(valorSensor, 120, 1020, 0, 255);      //convertimos el valor del sensor a la intensidad del led
  analogWrite(pinLED, intensidadLED);         //escribimos una variable analogica
  delay(50);                //pausa de 50 milisegundos
}
