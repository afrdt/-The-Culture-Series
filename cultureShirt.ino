/*
"The Culture" shirt is a project developed
 by Afroditi Psarra and Dafni Papadopoulou
 at WeMake, Milan's Makerspace during a two week residency.
 
 Project description: 
 An interactive garment that incorporates 
 muscle wire actuators in the sleeves that 
 move move in a pre-programmed way.
 
 Circuit:
 * LilyPad Arduino USB
 * Pulse Sensor connected to analog pin A3.
 * Two muscle wire actuators connected to digital i/o pins 3, A2.
 * Two Tip122 Darlington transistors used as digital switches to control the muscle wire heating.
 * Two 100 Ohm resistors.
 * Two 100 KOhm resistors.
 * Three 3.7V Lipo batteries at 1000 mAh (one for each muscle and one for the uC).
 
 March 2015
 */

// muscle wire actuators connected to digital i/o 3 and A2 
#define muscle1 3;
#define muscle2 A2;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pins as output.
  pinMode(muscle1, OUTPUT); 
  pinMode(muscle2, OUTPUT);   
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(muscle1, HIGH);   // turn the muscle on (HIGH is the voltage level)
  digitalWrite(muscle2, HIGH);   
  delay(5400); // wait for 5.4 seconds for the muscle wire to cool down
  digitalWrite(muscle1, LOW);   // turn the muscle off by making the voltage LOW
  digitalWrite(muscle2, LOW);    
  delay(5400); // wait for 5.4 seconds for the muscle wire to cool down
}
