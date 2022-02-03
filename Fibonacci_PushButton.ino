int button = 2;
int ledPin = 9;
unsigned long first = 0; // using 32-bit unsigned long here so that values dosent overflow or become negative.
unsigned long second = 1;
unsigned long third;
int button_Count = 0;
int button_Value;

void setup() {

  pinMode(button, INPUT); //declared push button as input
  Serial.begin(9600);

}

void loop() {
  button_Value = digitalRead(button);//reads push button state
  delay(100);

  if (button_Value == HIGH) {
    button_Count = button_Count + 1;
    if (button_Count == 1) {
      Serial.println("Button Count is :");
      Serial.println(button_Count);
      Serial.println("The Fibonacci No. is:");
      Serial.println(0);
    }
    else if (button_Count == 2) {
      Serial.println("Button Count is :");
      Serial.println(button_Count);
      Serial.println("The Fibonacci No. is:");
      Serial.println(1);
    }
  }
  third = first + second;
  if (button_Count > 2 && button_Value == HIGH ) {
    Serial.println("Button Count is :");
    Serial.println(button_Count);
    Serial.println("The Fibonacci No. is:");
    Serial.println(third);

    for (int i = 0; i < (third); i++)
    {
      digitalWrite(ledPin, HIGH);
      delay(100);
      digitalWrite(ledPin, LOW);
      delay(100);
    }
    first = second;
    second = third;

  }



  delay(50);
}

// wait for 50ms
