/*
-Jesus Bartolomé
-Practica 1
-Parpadeo de led en diferentes tiempos
-Tarjeta de desarrollo Kaanbal
*/

int ledPin = 13; //Se asigna a ledPin el led que se encuentra en el pin 13 del Arduino


//La función de configuración se ejecuta una vez cuando se presiona reset o se enciende la placa.

void setup() {
  
  pinMode(ledPin, OUTPUT); //Se configura el pi 13 como salida digital

}

void loop() {
  
  //Instrucciones a ejecutar ciclicamente
  
   digitalWrite(ledPin, HIGH);  // Enciende el LED
   delay(1000);                 // Pausa de 1 segundo 
   digitalWrite(ledPin, LOW);   // Apaga el LED 
   delay(1000);                 // Pausa de 1 segundo 
         
}
