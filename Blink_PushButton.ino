int led = 8;
int button = 2;
int button_value;

void setup() {
  pinMode(led, OUTPUT);//declared led as output
  pinMode(button, INPUT); //declared push button as input
}

void loop() {
  button_value = digitalRead(button);//reads input value
  if(button_value == HIGH){
      digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(500);                       // wait for a second
      digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
      delay(500);                       // wait for a second
  } else {
    digitalWrite(led, LOW);
  }

}
