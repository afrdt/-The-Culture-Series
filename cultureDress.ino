/*
"The Culture" dress is a project developed
 by Afroditi Psarra and Dafni Papadopoulou
 at WeMake, Milan's Makerspace during a two week residency.
 
 Project description: 
 An interactive garment that incorporates 
 muscle wire actuators in the sleeves that 
 move accordingly to the user's heart beat.
 
 Circuit:
 * Arduino Pro Mini 328/16MHz
 * Pulse Sensor connected to analog pin A3.
 * Six muscle wire actuators connected to digital i/o pins 3, 5, 7, 12, A0, A2.
 * Six Tip122 Darlington transistors used as digital switches to control the muscle wire heating.
 * Six 100 Ohm resistors.
 * Six 100 KOhm resistors.
 * Seven 3.7V Lipo batteries at 1000 mAh.
 
 Code by Afroditi Psarra
 
 March 2015
 */

#define muscle1 3
#define muscle2 5
#define muscle3 7
#define muscle4 12
#define muscle5 A0
#define muscle6 A2

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pins as outputs.
  pinMode(muscle1, OUTPUT); 
  pinMode(muscle2, OUTPUT); 
  pinMode(muscle3, OUTPUT); 
  pinMode(muscle4, OUTPUT); 
  pinMode(muscle5, OUTPUT); 
  pinMode(muscle6, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(muscle1, HIGH);   
  digitalWrite(muscle2, HIGH);    
  digitalWrite(muscle3, HIGH);
  digitalWrite(muscle4, HIGH);
  digitalWrite(muscle5, HIGH);
  digitalWrite(muscle6, HIGH);
  delay(7800);
  digitalWrite(muscle1, LOW);    
  digitalWrite(muscle2, LOW); 
  digitalWrite(muscle3, LOW); 
  digitalWrite(muscle4, LOW); 
  digitalWrite(muscle5, LOW); 
  digitalWrite(muscle6, LOW); 
  delay(7800);               
}


