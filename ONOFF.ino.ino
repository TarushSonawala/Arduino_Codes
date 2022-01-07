int led = 8;// this is the led pin
int button = 2;// this is the button pin
int button_value = 0; // variable for reading the pin status
void setup() {
  pinMode(led, OUTPUT);//declared led as output
  pinMode(button, INPUT); //declared push button as input
}

void loop() {
  button_value = digitalRead(button);//reads input value

  if (button_value == HIGH) {
    digitalWrite(led, HIGH);
  }

  else {
    digitalWrite(led, LOW);
  }
}
