// Pin 13 has an LED connected on most Arduino boards.

int ledG = 13;//declarando pin 13 para la led green
int ledY = 12;//declarando pin 12 para la led yellow
int ledR = 11;//declarando pin 11 para la led red

// the setup routine runs once when you press reset:
void setup() {
  
// Inicializar el pin digital como salida
  pinMode(ledG, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledR, OUTPUT);
  
}


// La rutina de bucle se ejecuta una y otra vez para siempre :
void loop() {
  
  //GREEN LED
  digitalWrite(ledG, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10000);               // wait for a second
  digitalWrite(ledG, LOW);    // turn the LED off by making the voltage LOW
                
  //GREEN YELLOW
  for (int ledRtime = 0;ledRtime<5;ledRtime++){
  digitalWrite(ledY, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(ledY, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second      
  }               
  
  //RED LED
  digitalWrite(ledR, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10000);               // wait for a second
  digitalWrite(ledR, LOW);    // turn the LED off by making the voltage LOW
  
}
