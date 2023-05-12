//I2C_SLAVE
// Include Arduino Wire library for I2C
#include <Wire.h>

// Define Slave I2C Address
#define SLAVE_ADDR 9

// Define LED Pin
int led = 8;

// Variable for received data
int rd;

// Variable for blink rate
int br;

void setup() {

  pinMode(led, OUTPUT);

  // Initialize I2C communications as Slave
  Wire.begin(SLAVE_ADDR);

  // Function to run when data received from master
  Wire.onReceive(receiveEvent);

  // Setup Serial Monitor
  Serial.begin(9600);
  Serial.println("I2C Slave Demonstration");
}


void receiveEvent() {
  // read one character from the I2C
  rd = Wire.read();
  // Print value of incoming data
  Serial.println(rd);

}
void loop() {
  delay(50);

  // Calculate blink value
  br = rd;

  if (rd == HIGH) {
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);                       // wait for a second
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(500);                       // wait for a second
  } else {
    digitalWrite(led, LOW);
  }

}
