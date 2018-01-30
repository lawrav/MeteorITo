const char tipoNubosidad[5]={'C','M','N','P','D'}; 
/* D - despejado
 * P - poco nuboso 
 * N - nuboso
 * M - muy nuboso 
 * C - cubierto
 */
void setup() {
  Serial.begin(9600);
}

void loop() {
int lecturaSensor=analogRead(A0);
char nubosidad = tipoNubosidad[map(lecturaSensor, 300, 1023, 0, 5)];
  Serial.print(lecturaSensor);
  Serial.print("Nubosidad:"); 
  Serial.println(nubosidad); 
  delay(1000);
}
