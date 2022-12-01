void setup() {
pinMode(13, OUTPUT);     //PIN DE SALIDA 13.
pinMode(12, OUTPUT);     //PIN DE SALIDA 12.
pinMode(11, OUTPUT);     //PIN DE SALIDA 11.
}

void loop() {
digitalWrite(13, HIGH);  //PIN 13 ENCENDIDO.
digitalWrite(12, LOW);   //PIN 12 APAGADO.
digitalWrite(11, LOW);   //PIN 11 APAGADO.

delay(500);              //ESPERO MEDIO SEGUNDO.

digitalWrite(13, LOW);   //PIN 13 APAGADO.
digitalWrite(12, HIGH);  //PIN 12 ENCENDIDO.
digitalWrite(11, LOW);   //PIN 11 APAGADO.

delay(500);              //ESPERO MEDIO SEGUNDO.

digitalWrite(13, LOW);   //PIN 13 APAGADO.
digitalWrite(12, LOW);   //PIN 12 APAGADO.
digitalWrite(11, HIGH);  //PIN 11 ENCENDIDO.

delay(500);              //ESPERO MEDIO SEGUNDO.


}
