// C++ code
// ***********************************************
// Program: Traffic Lights Arduino
// Programmer: Labib Sarwar
// Date: November 18,2021
// Description: The following program is coded to
//	an Arduino that implements a light pattern on
// 	a circuit to simulate a four-way traffic light.
// ***********************************************

void setup()
{
  DDRD = 0b01111110;
}

void loop()
{
  // Code for the interval where both Red lights are on.
  PORTD = 0b01001000;
  delay(2000);
  
  // Code that has EAST/WEST bound lights on Green.
  PORTD = 0b01000010;
  delay(5000);
  
  // EAST/WEST lights on Yellow.
  PORTD = 0b01000100;
  delay(3500);
  
  // Interval with all traffic waiting on Red.
  PORTD = 0b01001000;
  delay(2000);
  
  // NORTH/SOUTH lights are on Green. EAST/WEST are on Red. 
  PORTD = 0b00011000;
  delay(5000);
  
  // NORTH/SOUTH lights are on Yellow.
  PORTD = 0b00101000;
  delay(3500);
  
  // The loop repeats back to the top where both Red lights
  // are on and the code inside the loop is run through 
  // repetitively.
}
