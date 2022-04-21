/*
-Jesus Bartolomé
-Practica 
-Encendido secuencial de 5 leds
-Tarjeta de desarrollo Kaanbal
*/

int ledPin1 = 4; // Con esta línea y las siguientes 4                    
int ledPin2 = 5; //definimos que pines utilizaremos de nuestra shield Kaanbal 
int ledPin3 = 6; //como no usaremos el pin 13, hay que recordar que se deben colocar resistenciasen cada uno de los leds.
int ledPin4 = 7; 
int ledPin5 = 8; 

//La función de configuración se ejecuta una vez cuando se presiona reset o se enciende la placa.  
void setup() { 
// Configuración del comportamiento de las salidas escogidas en las anteriores lineas de programación.
pinMode(ledPin1, OUTPUT); // Se declara este LED y los siguientes 4 como salidas
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT); 
pinMode(ledPin4, OUTPUT);
pinMode(ledPin5, OUTPUT);
digitalWrite(ledPin1, LOW); // Se inicia con los leds apagados
digitalWrite(ledPin2, LOW); 
digitalWrite(ledPin3, LOW); 
digitalWrite(ledPin4, LOW); 
digitalWrite(ledPin5, LOW);
} 

// Este bucle permitirá que las siguientes lineas de programación se repitan indefinidamente   
void loop(){ 
 //Instrucciones a ejecutar ciclicamente
digitalWrite(ledPin1, HIGH); // Enciende el primer LED 
delay(200); // Se mantiene 200 ms encendido
digitalWrite(ledPin1, LOW);  //Apaga el primer Led
digitalWrite(ledPin2, HIGH); // Enciende el segundo LED 
delay(200); // Se mantiene 200 ms encendido
digitalWrite(ledPin2, LOW); //Apaga el segundo Led
digitalWrite(ledPin3, HIGH); // Enciende el tercer LED 
delay(200);  // Se mantiene 200 ms encendido
digitalWrite(ledPin3, LOW); //Apaga el tercer Led
digitalWrite(ledPin4, HIGH); // Enciende el cuarto LED 
delay(200);  // Se mantiene 200 ms encendido
digitalWrite(ledPin4, LOW); //Apaga el cuarto Led
digitalWrite(ledPin5, HIGH); // Enciende el quinto LED 
delay(200);  // Se mantiene 200 ms encendido
digitalWrite(ledPin5, LOW); //Apaga el quinto Led
}  
