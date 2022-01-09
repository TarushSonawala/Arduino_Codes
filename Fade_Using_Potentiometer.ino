int pot= A0;  //Declare Potentiometer Pin to be analog pin A0
int led= 9;  // Declare LED Pin to be arduino pin 9
int readValue;  // Use this variable to read Potentiometer
int writeValue; // Use this variable for writing to LED
 
void setup() {
  pinMode(pot, INPUT);  //set Potentiometer Pin to be an input
  pinMode(led, OUTPUT); //set LED Pin to be an OUTPUT

}
 
void loop() {
  
 readValue = analogRead(pot);  //Read the voltage on the Potentiometer
 delay(50);
  writeValue=map(readValue,0,1023,0,255);
 analogWrite(led, writeValue);      //Write to the LED

 
}
