/******************************************************************************************
*  simpleAnalogTest
*  
*  This program reads the value from the analog pin AO and displays the value on
*  the serial terminal.
*  
*   Setup with potentiometer:
*     Connect the outer leads of a potentiometer (variable resistor) to power and ground. 
*     Connect the middle lead to A0.
*     
*   Setup with photoresistor:
*     Connect one lead of the photoresistor (light depedent resistor) to power. Connect the
*     other lead of the photoresistor to A0 as well one lead of a fixed resistor. Connect the 
*     other lead of the fixed resistor to ground.
*     
*     Note if using a standard photoresistor:
*       Any fixed resistor above 10 ohms will work if powered with 5 volts.
*       Any fixed resistor above 20 ohms will work if powered with 3.3 volts.
*       A resistor around 1000 ohms will work well for both cases.
*       Do not go too large, stay below 50k ohms to be safe.
*       
*    This example code is property of Blue Stamp Engineering, LLC.
*    
*    Written by Tamir Amitai 6/23/2017
*   
*******************************************************************************************/
int analogIn; //creates a variable to store your analog input value

void setup() {
  
  pinMode(A0, INPUT); //declares the analog pin as an input
  Serial.begin(9600); //opens the serial terminal

}

void loop() {
  
  analogIn = analogRead(A0);  //reads the analog input
  Serial.println(analogIn);   //displays the value on the serial monitor
  
}
